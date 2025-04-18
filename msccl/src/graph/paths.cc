/*************************************************************************
 * Copyright (c) 2018-2022, NVIDIA CORPORATION. All rights reserved.
 *
 * See LICENSE.txt for license information
 ************************************************************************/

#include "core.h"
#include "graph.h"
#include "topo.h"
#include "comm.h"
#include "net.h"
#include "channel.h"
#include "transport.h"
#include "device.h"

// Pre-compute GPU->NIC, GPU->GPU and NIC->GPU paths

struct ncclTopoNodeList {
  struct ncclTopoNode* list[NCCL_TOPO_MAX_NODES];
  int count;
};

static ncclResult_t getPath(struct ncclTopoSystem* system, struct ncclTopoNode* node, int t, int64_t id, struct ncclTopoLinkList** path) {
  for (int i=0; i<system->nodes[t].count; i++) {
    if (system->nodes[t].nodes[i].id == id) {
      *path = node->paths[t]+i;
      return ncclSuccess;
    }
  }
  WARN("Could not find node of type %d id %lx", t, id);
  return ncclInternalError;
}
// 重命名函数，避免与头文件中的数组冲突
const char* getTopoNodeTypeStr_v1(int type) {
  switch(type) {
    case GPU: return "GPU";
    case NET: return "NET";
    case CPU: return "CPU";
    case PCI: return "PCI";
    case NVS: return "NVS";
    case NIC: return "NIC";
    default: return "UNKNOWN";
  }
}

// 重命名路径类型转换函数
const char* getPathTypeStr_v1(int type) {
  switch(type) {
    // Local (myself)
    case PATH_LOC : return "PATH_LOC";
    case PATH_NVL: return "PATH_NVL";
    // Connection through NVLink using an intermediate GPU
    case PATH_NVB: return "PATH_NVB";
    // Connection traversing at most a single PCIe bridge
    case PATH_PIX: return "PATH_PIX";
    // Connection traversing multiple PCIe bridges (without traversing the PCIe Host Bridge)
    case PATH_PXB: return "PATH_PXB";

    // Connection between a GPU and a NIC using an intermediate GPU. Used to enable rail-local, aggregated network send/recv operations.
    case PATH_PXN: return "PATH_PXN";

    // Connection traversing PCIe as well as a PCIe Host Bridge (typically the CPU)
    case PATH_PHB : return "PATH_PHB";

    // Connection traversing PCIe as well as the SMP interconnect between NUMA nodes (e.g., QPI/UPI)
    case PATH_SYS: return "PATH_SYS";

    // Connection through the network
    case PATH_NET : return "PATH_NET";

    // Disconnected
    case PATH_DIS : return "PATH_DIS";
    default: return "UNKNOWN";
  }
}

// 新增的路径打印函数
static void printPathList_v1(int destType, struct ncclTopoLinkList* pathList) {
    INFO(NCCL_INIT, "  -> Dest Type: %s\n", getTopoNodeTypeStr_v1(destType));
    INFO(NCCL_INIT, "     Total Paths: %d, BW: %.2f GB/s, Type: %s\n",
        pathList->count, pathList->bw, getPathTypeStr_v1(pathList->type));

    for (int hop = 0; hop < pathList->count; hop++) {
        struct ncclTopoLink* link = pathList->list[hop];
        if (!link) break;

        char busId_link[16];
        int64ToBusId(link->remNode->id, busId_link);
        INFO(NCCL_INIT, "     Hop %d: Type=%s, BW=%.2f GB/s, RemNodeType=%s, id %s \n",
            hop + 1, getPathTypeStr_v1(link->type), link->bw,
            getTopoNodeTypeStr_v1(link->remNode->type), busId_link);
    }
}

// 修改后的主函数
void printNodePaths_v1(struct ncclTopoNode* node) {
    char busId[16];
    int64ToBusId(node->id, busId);
    INFO(NCCL_INIT, "Node Type: %s, ID: %s\n", getTopoNodeTypeStr_v1(node->type), busId);

    for (int destType = 0; destType < NCCL_TOPO_NODE_TYPES; destType++) {
        struct ncclTopoLinkList* pathList = node->paths[destType];
        if (pathList == NULL) continue;

        printPathList_v1(destType, pathList);
    }
}

// 修改后的遍历函数
void printAllTopoPaths_v1(struct ncclTopoSystem* system) {
  for (int nodeType = 0; nodeType < NCCL_TOPO_NODE_TYPES; nodeType++) {
    struct ncclTopoNodeSet* set = &system->nodes[nodeType];
    INFO(NCCL_INIT,"\n=== Node Type: %s (Count: %d) ===\n", getTopoNodeTypeStr_v1(nodeType), set->count);

    for (int i = 0; i < set->count; i++) {
      struct ncclTopoNode* node = &set->nodes[i];
      printNodePaths_v1(node);
    }
  }
}
// 修改后的打印函数
// void printNodePaths(struct ncclTopoSystem* system, struct ncclTopoNode* node) {
//   char busId[16];
//   int64ToBusId(node->id,busId);
//   INFO(NCCL_INIT,"Node Type: %s, ID: %s\n", getTopoNodeTypeStr(node->type), busId);

//   for (int destType = 0; destType < NCCL_TOPO_NODE_TYPES; destType++) {
//     struct ncclTopoLinkList* pathList = node->paths[destType];
//     if (pathList == NULL) continue;

//     INFO(NCCL_INIT,"  -> Dest Type: %s\n", getTopoNodeTypeStr(destType));
//     INFO(NCCL_INIT,"     Total Paths: %d, BW: %.2f GB/s, Type: %s\n", 
//            pathList->count, pathList->bw, getPathTypeStr(pathList->type));

//     for (int hop = 0; hop < pathList->count; hop++) {
//       struct ncclTopoLink* link = pathList->list[hop];
//       if (!link) break;

//       char busId_link[16];
//       int64ToBusId(link->remNode->id,busId_link);
//       INFO(NCCL_INIT,"     Hop %d: Type=%s, BW=%.2f GB/s, RemNodeType=%s, id %s \n",
//               hop+1, getPathTypeStr(link->type), link->bw,
//              getTopoNodeTypeStr(link->remNode->type),busId_link);
//     }
//   }
// }



NCCL_PARAM(NvbDisable, "NVB_DISABLE", 0);

static ncclResult_t ncclTopoSetPaths(struct ncclTopoNode* baseNode, struct ncclTopoSystem* system) {
  // if (baseNode->type == GPU)
  //   printNodePaths_v1(baseNode);
  if (baseNode->paths[baseNode->type] == NULL) {
    NCCLCHECK(ncclCalloc(baseNode->paths+baseNode->type, system->nodes[baseNode->type].count));
    for (int i=0; i<system->nodes[baseNode->type].count; i++) baseNode->paths[baseNode->type][i].type = PATH_DIS;
  }

  // breadth-first search to set all paths to that node in the system
  struct ncclTopoNodeList nodeList;
  struct ncclTopoNodeList nextNodeList = { { 0 }, 0 };
  nodeList.count = 1; nodeList.list[0] = baseNode;
  struct ncclTopoLinkList* basePath;
  NCCLCHECK(getPath(system, baseNode, baseNode->type, baseNode->id, &basePath));
  basePath->count = 0;
  basePath->bw = LOC_BW;
  basePath->type = PATH_LOC;
  // char busId1[16];

  while (nodeList.count) {
    nextNodeList.count = 0;
    for (int n=0; n<nodeList.count; n++) {
      struct ncclTopoNode* node = nodeList.list[n];
      struct ncclTopoLinkList* path;
      NCCLCHECK(getPath(system, node, baseNode->type, baseNode->id, &path));
      // if (baseNode->type == GPU && node->type == GPU && node->id != baseNode->id){
      //   // printf("node->nlinks %d============\n",node->nlinks);
      //   int64ToBusId(node->id,busId1);
      //   printf("=====%s======\n",busId1);
      //   printPathList(baseNode->type,path);
      // }
      for (int l=0; l<node->nlinks; l++) {
        struct ncclTopoLink* link = node->links+l;
        struct ncclTopoNode* remNode = link->remNode;
        if (remNode->paths[baseNode->type] == NULL) {
          NCCLCHECK(ncclCalloc(remNode->paths+baseNode->type, system->nodes[baseNode->type].count));
          for (int i=0; i<system->nodes[baseNode->type].count; i++) remNode->paths[baseNode->type][i].type = PATH_DIS;
        }
        struct ncclTopoLinkList* remPath;
        NCCLCHECK(getPath(system, remNode, baseNode->type, baseNode->id, &remPath));
        float bw = std::min(path->bw, link->bw);

        // allow routing through a GPU only as 1 hop
        if (node != baseNode && node->type == GPU &&
            (ncclParamNvbDisable() || link->type != LINK_NVL || remNode->type != GPU || path->count > 1)) continue;

        if ((remPath->bw == 0 || remPath->count > path->count) && remPath->bw < bw) {
          // Find reverse link
          for (int l=0; l<remNode->nlinks; l++) {
            if (remNode->links[l].remNode == node && remNode->links[l].type == link->type) {
              remPath->list[0] = remNode->links+l;
              break;
            }
          }
          if (remPath->list[0] == NULL) {
            WARN("Failed to find reverse path from remNode %d/%lx nlinks %d to node %d/%lx",
                 remNode->type, remNode->id, remNode->nlinks, node->type, node->id);
            return ncclInternalError;
          }
          // Copy the rest of the path
          for (int i=0; i<path->count; i++) remPath->list[i+1] = path->list[i];
          remPath->count = path->count + 1;
          remPath->bw = bw;

          // Start with path type = link type. PATH and LINK types are supposed to match.
          // Don't consider LINK_NET as we only care about the NIC->GPU path.
          int type = link->type == LINK_NET ? LINK_LOC : link->type;
          // Differentiate between one and multiple PCI switches
          if (node->type == PCI && remNode->type == PCI) type = PATH_PXB;
          // Consider a path going through the CPU as PATH_PHB
          if (link->type == LINK_PCI && (node->type == CPU || link->remNode->type == CPU)) type = PATH_PHB;
          // Set 1 hop NVLink as NVB
          if (node->type == GPU && path->type == PATH_NVL && type == PATH_NVL && remPath->count > 1) type = PATH_NVB;

          remPath->type = std::max(path->type, type);

          // Add to the list for the next iteration if not already in the list
          int i;
          for (i=0; i<nextNodeList.count; i++) if (nextNodeList.list[i] == remNode) break;
          if (i == nextNodeList.count) nextNodeList.list[nextNodeList.count++] = remNode;
        }
      }
    }
    memcpy(&nodeList, &nextNodeList, sizeof(nodeList));
  }
  return ncclSuccess;
}

static void printNodePaths(struct ncclTopoSystem* system, struct ncclTopoNode* node) {
  const int linesize = 1024;
  char line[linesize];
#ifdef ENABLE_TRACE
  INFO(NCCL_GRAPH, "Paths from %s/%lx-%lx :", topoNodeTypeStr[node->type], NCCL_TOPO_ID_SYSTEM_ID(node->id), NCCL_TOPO_ID_LOCAL_ID(node->id));
#else
  snprintf(line, linesize, "%s/%lx-%lx :", topoNodeTypeStr[node->type], NCCL_TOPO_ID_SYSTEM_ID(node->id), NCCL_TOPO_ID_LOCAL_ID(node->id));
  int offset = strlen(line);
#endif
  for (int t=0; t<NCCL_TOPO_NODE_TYPES; t++) {
    if (node->paths[t] == NULL) continue;
    for (int n = 0; n<system->nodes[t].count; n++) {
#ifdef ENABLE_TRACE
      line[0] = 0;
      int offset = 0;
      for (int i=0; i<node->paths[t][n].count; i++) {
        struct ncclTopoLink* link = node->paths[t][n].list[i];
        struct ncclTopoNode* remNode = link->remNode;
        snprintf(line+offset, linesize-offset, "--%s(%g)->%s/%lx-%lx", topoLinkTypeStr[link->type], link->bw, topoNodeTypeStr[remNode->type], NCCL_TOPO_ID_SYSTEM_ID(remNode->id), NCCL_TOPO_ID_LOCAL_ID(remNode->id));
        offset = strlen(line);
      }
      INFO(NCCL_GRAPH, "%s (%f)", line, node->paths[t][n].bw);
#else
      snprintf(line+offset, linesize-offset, "%s/%lx-%lx (%d/%.1f/%s) ", topoNodeTypeStr[t], NCCL_TOPO_ID_SYSTEM_ID(system->nodes[t].nodes[n].id), NCCL_TOPO_ID_LOCAL_ID(system->nodes[t].nodes[n].id), node->paths[t][n].count, node->paths[t][n].bw, topoPathTypeStr[node->paths[t][n].type]);
      offset = strlen(line);
#endif
    }
  }
#ifndef ENABLE_TRACE
  INFO(NCCL_GRAPH, "%s", line);
#endif
}

ncclResult_t ncclTopoPrintPaths(struct ncclTopoSystem* system) {
  for (int i=0; i<system->nodes[GPU].count; i++) {
    printNodePaths(system, system->nodes[GPU].nodes+i);
  }
  for (int i=0; i<system->nodes[NET].count; i++) {
    printNodePaths(system, system->nodes[NET].nodes+i);
  }
  return ncclSuccess;
}

ncclResult_t ncclGetLocalCpu(struct ncclTopoSystem* system, int gpu, int* retCpu) {
  // Find the closest CPU to a GPU
  int minHops = 0;
  int localCpu = -1;
  struct ncclTopoLinkList* paths = system->nodes[GPU].nodes[gpu].paths[CPU];
  for (int c=0; c<system->nodes[CPU].count; c++) {
    int hops = paths[c].count;
    if (hops > 0 && (minHops == 0 || hops < minHops)) {
      localCpu = c;
      minHops = hops;
    }
  }
  if (localCpu == -1) {
    WARN("Error : could not find CPU close to GPU %d", gpu);
    return ncclInternalError;
  }
  *retCpu = localCpu;
  return ncclSuccess;
}

static ncclResult_t addInterStep(struct ncclTopoSystem* system, int tx, int ix, int t1, int i1, int t2, int i2) {
  struct ncclTopoNode* cpuNode = system->nodes[tx].nodes+ix;
  struct ncclTopoNode* srcNode = system->nodes[t1].nodes+i1;

  int l=0;
  // Node 1 -> CPU
  for (int i=0; i<srcNode->paths[tx][ix].count; i++) srcNode->paths[t2][i2].list[l++] = srcNode->paths[tx][ix].list[i];
  // CPU -> Node 2
  for (int i=0; i<cpuNode->paths[t2][i2].count; i++) srcNode->paths[t2][i2].list[l++] = cpuNode->paths[t2][i2].list[i];

  // Update path characteristics
  srcNode->paths[t2][i2].count = l;
  srcNode->paths[t2][i2].type = std::max(srcNode->paths[tx][ix].type, cpuNode->paths[t2][i2].type);
  if (tx == GPU) srcNode->paths[t2][i2].type = PATH_PXN;
  srcNode->paths[t2][i2].bw = std::min(srcNode->paths[tx][ix].bw, cpuNode->paths[t2][i2].bw);
  return ncclSuccess;
}

// Remove/free all paths
static void ncclTopoRemovePaths(struct ncclTopoSystem* system) {
  for (int t1=0; t1<NCCL_TOPO_NODE_TYPES; t1++) {
    for (int n=0; n<system->nodes[t1].count; n++) {
      struct ncclTopoNode* node = system->nodes[t1].nodes+n;
      for (int t2=0; t2<NCCL_TOPO_NODE_TYPES; t2++) {
        if (node->paths[t2]) free(node->paths[t2]);
        node->paths[t2] = NULL;
      }
    }
  }
}

static const int levelsOldToNew[] = { PATH_LOC, PATH_PIX, PATH_PXB, PATH_PHB, PATH_SYS, PATH_SYS };
ncclResult_t ncclGetLevel(int* level, const char* disableEnv, const char* levelEnv) {
  if (*level == -1) {
    int l = -1;
    if (disableEnv) {
      const char* str = ncclGetEnv(disableEnv);
      if (str) {
        int disable = strtol(str, NULL, 0);
        if (disable == 1) l = 0;
        if (l >= 0) INFO(NCCL_ALL, "%s set by environment to %d", disableEnv, disable);
      }
    }
    if (l == -1) {
      const char* str = ncclGetEnv(levelEnv);
      if (str) {
        for (int i=0; i<=PATH_SYS; i++) {
          if (strcmp(str, topoPathTypeStr[i]) == 0) {
            l = i;
            break;
          }
        }
        // Old style numbering
        // levelsOldToNew to is an array with each index corresponding to the
        // "old level" int, and each value mapping to the correct value defined in topo.h
        // maxOldLevel is a quick check to handle out of bounds (based on the length of levelsOldToNew)
        if (l == -1 && str[0] >= '0' && str[0] <= '9') {
          int oldLevel = strtol(str, NULL, 0);
          const int maxOldLevel = sizeof(levelsOldToNew)/sizeof(int) - 1;
          if (oldLevel > maxOldLevel) oldLevel = maxOldLevel;
          l = levelsOldToNew[oldLevel];
        }
        if (l >= 0) INFO(NCCL_ALL, "%s set by environment to %s", levelEnv, topoPathTypeStr[l]);
      }
    }
    *level = l >= 0 ? l : -2;
  }
  return ncclSuccess;
}

NCCL_PARAM(IgnoreDisabledP2p, "IGNORE_DISABLED_P2P", 0);

int ncclTopoUserP2pLevel = -1;
ncclResult_t ncclTopoCheckP2p(struct ncclTopoSystem* system, int rank1, int rank2, int* p2p, int *read, int* intermediateRank) {
  *p2p = 0;
  if (read) *read = 0;
  if (intermediateRank) *intermediateRank = -1;

  // Get GPUs from topology
  int g1, g2;
  NCCLCHECK(ncclTopoRankToIndex(system, rank1, &g1));
  struct ncclTopoNode* gpu1 = system->nodes[GPU].nodes+g1;
  if (ncclTopoRankToIndex(system, rank2, &g2) == ncclInternalError) { //从rank获取index
    // GPU not found, we can't use p2p.
    return ncclSuccess;
  }

  int intermediateIndex = -1;
  // Set intermediate GPU rank, if routing through an intermediate GPU.
  struct ncclTopoLinkList* path = gpu1->paths[GPU]+g2;
  if (path->count == 2) {
    struct ncclTopoNode* intermediateNode = path->list[0]->remNode;
    if (intermediateNode->type == GPU) {
      intermediateIndex = intermediateNode - system->nodes[GPU].nodes;
      if (intermediateRank) *intermediateRank = intermediateNode->gpu.rank;
    }
  }

  // By default don't use P2P across CPU Host Bridges and further apart
  int p2pLevel = PATH_PXB;

  int arch, vendor, model;
  NCCLCHECK(ncclTopoCpuType(system, &arch, &vendor, &model));
  // Allow P2P between pairs of GPUs on AMD systems
  if ((arch == NCCL_TOPO_CPU_ARCH_X86 && vendor == NCCL_TOPO_CPU_VENDOR_AMD) && system->nodes[GPU].count <= 2) p2pLevel = PATH_SYS;

  // User override
  if (ncclTopoUserP2pLevel == -1)
    NCCLCHECK(ncclGetLevel(&ncclTopoUserP2pLevel, "NCCL_P2P_DISABLE", "NCCL_P2P_LEVEL"));
  if (ncclTopoUserP2pLevel != -2) {
    p2pLevel = ncclTopoUserP2pLevel;
    goto compare;
  }


compare:
  // Compute the PCI distance and compare with the p2pLevel.
  if (path->type <= p2pLevel) *p2p = 1;
  // INFO(NCCL_INIT,"  p2p %d p2p->type: %d\n", *p2p, path->type);
  if (*p2p == 1) {
    // NCCL_IGNORE_DISABLED_P2P=2 is used by unit tests that don't want to
    // validate against NVML at all since they are pretending to be on other hw.
    if (g1 != g2 && ncclParamIgnoreDisabledP2p() != 2) {
      int indexes[3] = {-1,-1,-1};
      int verticeN = 0;
      NCCLCHECK(ncclNvmlEnsureInitialized());

      indexes[verticeN++] = system->nodes[GPU].nodes[g1].gpu.dev;
      if (intermediateIndex != -1) indexes[verticeN++] = system->nodes[GPU].nodes[intermediateIndex].gpu.dev;
      indexes[verticeN++] = system->nodes[GPU].nodes[g2].gpu.dev;

      for (int i=1; i < verticeN; i++) {
        nvmlGpuP2PStatus_t status;
        status = ncclNvmlDevicePairs[indexes[i-1]][indexes[i-0]].p2pStatusRead;
        bool good = status == NVML_P2P_STATUS_OK;
        status = ncclNvmlDevicePairs[indexes[i-1]][indexes[i-0]].p2pStatusWrite;
        good &= status == NVML_P2P_STATUS_OK;
        if (!good) {
          if (!ncclParamIgnoreDisabledP2p()) {
            if (path->type <= PATH_NVB) {
              WARN("P2P is disabled between NVLINK connected GPUs %d and %d. This should not be the case given their connectivity, and is probably due to a hardware issue. If you still want to proceed, you can set NCCL_IGNORE_DISABLED_P2P=1.", indexes[i-1], indexes[i-0]);
              return ncclUnhandledCudaError;
            } else if (path->type < PATH_SYS) {
              INFO(NCCL_INIT, "P2P is disabled between connected GPUs %d and %d. You can repress this message with NCCL_IGNORE_DISABLED_P2P=1.", indexes[i-1], indexes[i-0]);
            }
          }
          *p2p = 0;
        }
      }
    }
  }

  if (path->type == PATH_NVL) {
    struct ncclTopoNode* gpu2 = system->nodes[GPU].nodes+g2;
    // Enable P2P Read for Ampere/NVLink only
    if (read && (gpu1->gpu.cudaCompCap == gpu2->gpu.cudaCompCap) && (gpu1->gpu.cudaCompCap == 80)) *read = 1;
  }

  return ncclSuccess;
}

// MNNVL: Check whether peers are in the same fabric cluster and clique
ncclResult_t ncclTopoCheckMNNVL(struct ncclTopoSystem* system, struct ncclPeerInfo* info1, struct ncclPeerInfo* info2, int* ret) {
  *ret = 0;

  nvmlGpuFabricInfoV_t *fabricInfo1 = &info1->fabricInfo;
  nvmlGpuFabricInfoV_t *fabricInfo2 = &info2->fabricInfo;
  // A zero UUID means we don't have MNNVL fabric info
  if ((((long *)&fabricInfo2->clusterUuid)[0]|((long *)fabricInfo2->clusterUuid)[1]) == 0) return ncclSuccess;
  if ((memcmp(fabricInfo1->clusterUuid, fabricInfo2->clusterUuid, NVML_GPU_FABRIC_UUID_LEN) == 0) &&
      (fabricInfo1->cliqueId == fabricInfo2->cliqueId)) {
    INFO(NCCL_NET, "MNNVL matching peer 0x%lx UUID %lx.%lx cliqueId 0x%x",
         info2->busId, ((long *)fabricInfo2->clusterUuid)[0], ((long *)fabricInfo2->clusterUuid)[1], fabricInfo2->cliqueId);
    *ret = 1;
  }
  return ncclSuccess;
}

NCCL_PARAM(NetGdrRead, "NET_GDR_READ", -2);
int ncclTopoUserGdrLevel = -1;

ncclResult_t ncclTopoCheckGdr(struct ncclTopoSystem* system, int64_t busId, int64_t netId, int read, int* useGdr) {
  *useGdr = 0;

  // Get GPU and NET
  int n, g;
  NCCLCHECK(ncclTopoIdToIndex(system, NET, netId, &n));
  struct ncclTopoNode* net = system->nodes[NET].nodes+n;
  NCCLCHECK(ncclTopoIdToIndex(system, GPU, busId, &g));
  struct ncclTopoNode* gpu = system->nodes[GPU].nodes+g;

  // Check that both the NIC and GPUs support it
  if (net->net.gdrSupport == 0) return ncclSuccess;
  if (gpu->gpu.gdrSupport == 0) return ncclSuccess;

  if (read) { // For reads (sends) only enable under certain conditions
    int gdrReadParam = ncclParamNetGdrRead();
    if (gdrReadParam == 0) return ncclSuccess;
    // Disable GDR Reads pre-Ampere when we have other PCI flows
    if (gdrReadParam < 0 && gpu->gpu.cudaCompCap < 80) {
      int nvlink = 0;
      // Since we don't know whether there are other communicators,
      // it's better to keep things local if we have a single GPU.
      if (system->nodes[GPU].count == 1) nvlink = 1;
      for (int i=0; i<system->nodes[GPU].count; i++) {
        if (i == g) continue;
        if (gpu->paths[GPU][i].type == PATH_NVL) {
          nvlink = 1;
          break;
        }
      }
      if (!nvlink) return ncclSuccess;
    }
  }

  // Check if we are close enough that it makes sense to enable GDR
  int netGdrLevel = PATH_PXB;
  NCCLCHECK(ncclGetLevel(&ncclTopoUserGdrLevel, NULL, "NCCL_NET_GDR_LEVEL"));
  if (ncclTopoUserGdrLevel != -2) netGdrLevel = ncclTopoUserGdrLevel;
  int distance = gpu->paths[NET][n].type;
  if (distance == PATH_PXN) {
    // In case of PXN, use the intermediate GPU distance instead
    int proxyRank, g;
    NCCLCHECK(ncclTopoGetIntermediateRank(system, gpu->gpu.rank, netId, &proxyRank));
    NCCLCHECK(ncclTopoRankToIndex(system, proxyRank, &g));
    struct ncclTopoNode* proxyGpu = system->nodes[GPU].nodes+g;
    distance = proxyGpu->paths[NET][n].type;
  }
  if (distance > netGdrLevel) {
    INFO(NCCL_NET,"GPU Direct RDMA Disabled for GPU %lx / HCA %lx (distance %d > %d)", busId, netId, distance, netGdrLevel);
    return ncclSuccess;
  }

  *useGdr = 1;
  INFO(NCCL_NET,"GPU Direct RDMA Enabled for GPU %lx / HCA %lx (distance %d <= %d), read %d", busId, netId, distance, netGdrLevel, read);
  return ncclSuccess;
}

// Set to 0 to disable the flush on Hopper when using GDR
NCCL_PARAM(NetForceFlush, "NET_FORCE_FLUSH", 0);

// Determine whether we need to flush the GDR recv buffers
ncclResult_t ncclTopoNeedFlush(struct ncclTopoSystem* system, int64_t busId, int* flush) {
  int g;
  NCCLCHECK(ncclTopoIdToIndex(system, GPU, busId, &g));
  struct ncclTopoNode* gpu = system->nodes[GPU].nodes+g;
  // Flush is required on Ampere and earlier
  *flush = gpu->gpu.cudaCompCap < 90 ? 1 : ncclParamNetForceFlush();
  return ncclSuccess;
}

NCCL_PARAM(NetDisableIntra, "NET_DISABLE_INTRA", 0);

// Check whether going through the network would be faster than going through P2P/SHM.
ncclResult_t ncclTopoCheckNet(struct ncclTopoSystem* system, int rank1, int rank2, int* net) {
  if (ncclParamNetDisableIntra() == 1) {
    *net = 0;
    return ncclSuccess;
  }
  *net = 1;
  // First check the current GPU-to-GPU speed.
  int g1, g2;
  if (ncclTopoRankToIndex(system, rank1, &g1) != ncclSuccess ||
      ncclTopoRankToIndex(system, rank2, &g2) != ncclSuccess) {
    return ncclSuccess;
  }

  struct ncclTopoNode* gpu1 = system->nodes[GPU].nodes+g1;
  struct ncclTopoNode* gpu2 = system->nodes[GPU].nodes+g2;
  float speed = gpu1->paths[GPU][g2].bw;

  // Now check the speed each GPU can access the network through PXB or better
  float netSpeed1 = 0, netSpeed2 = 0;
  for (int n=0; n<system->nodes[NET].count; n++) {
    struct ncclTopoLinkList* path = gpu1->paths[NET]+n;
    if (path->type <= PATH_PXB && path->bw > netSpeed1) netSpeed1 = path->bw;
    path = gpu2->paths[NET]+n;
    if (path->type <= PATH_PXB && path->bw > netSpeed2) netSpeed2 = path->bw;
  }
  // printf("=============speed:%f,netSpeed1:%f,netSpeed2:%f================\n",speed,netSpeed1,netSpeed2);
  if (netSpeed1 > speed && netSpeed2 > speed) return ncclSuccess; //当机外带宽大于机内带宽才会采用net模式
  *net = 0;
  return ncclSuccess;
}

ncclResult_t ncclTopoGetIntermediateRank(struct ncclTopoSystem* system, int rank, int64_t netId, int* intermediateRank) {
  // Get GPU and NET
  int n, g;
  NCCLCHECK(ncclTopoIdToIndex(system, NET, netId, &n));
  NCCLCHECK(ncclTopoRankToIndex(system, rank, &g));
  struct ncclTopoNode* gpu = system->nodes[GPU].nodes+g;
  struct ncclTopoLinkList* path = gpu->paths[NET]+n;
  if (path->type == PATH_PXN) {
    struct ncclTopoNode* node;
    int type = NVS;
    for (int i=0; i<path->count && type == NVS; i++) {
      node = path->list[i]->remNode;
      type = node->type;
    }
    if (type != GPU) {
      WARN("Could not find intermediate GPU between GPU rank %d and NIC %lx", rank, netId);
      return ncclInternalError;
    }
    *intermediateRank = node->gpu.rank;
  } else {
    *intermediateRank = rank;
  }
  return ncclSuccess;
}

NCCL_PARAM(PxnDisable, "PXN_DISABLE", 0);

// Net v4 plugins don't have non-blocking connect/accept. We can't therefore use
// remote proxies without risking deadlocks
int ncclPxnDisable(struct ncclComm* comm) {
  static int pxnDisable = -1;
  if (pxnDisable == -1) {
    if (comm && ncclNetVersion(comm) == 4) {
      INFO(NCCL_INIT, "PXN Disabled as plugin is v4");
      pxnDisable = 1;
    } else {
      pxnDisable = ncclParamPxnDisable();
    }
  }
  return pxnDisable;
}

ncclResult_t ncclTopoGetPxnRanks(struct ncclComm* comm, int** intermediateRanks, int* nranks) {
  struct ncclTopoSystem* system = comm->topo;
  *nranks = 0;
  *intermediateRanks = NULL;
  if (system->nodes[NET].count == 0) return ncclSuccess;

  int nr = 0;
  int* ranks = NULL;
  for (int rank=0; rank<comm->nRanks; rank++) {
    int64_t netId;
    int proxyRank;
    NCCLCHECK(ncclTopoGetNetDev(comm, comm->rank, NULL, 0, rank, &netId, NULL, &proxyRank));
    if (proxyRank == comm->rank) continue;
    int useGdr;
    NCCLCHECK(ncclTopoCheckGdr(comm->topo, comm->busId, netId, 1, &useGdr));
    if (useGdr == 0) continue;
    int found = 0;
    for (int r=0; r<nr; r++) {
      if (ranks[r] == proxyRank) found = 1;
    }
    if (!found) {
      NCCLCHECK(ncclRealloc(&ranks, nr, nr+1));
      ranks[nr++] = proxyRank;
    }
  }
  *nranks = nr;
  *intermediateRanks = ranks;
  return ncclSuccess;
}

ncclResult_t ncclTopoComputePaths(struct ncclTopoSystem* system, struct ncclComm* comm) {
  // Precompute paths between GPUs/NICs.

  // Remove everything in case we're re-computing
  ncclTopoRemovePaths(system);

  // Set direct paths to CPUs. We need them in many cases.
  for (int c=0; c<system->nodes[CPU].count; c++) {
    NCCLCHECK(ncclTopoSetPaths(system->nodes[CPU].nodes+c, system));
  }

  // Set direct paths to GPUs.
  for (int g=0; g<system->nodes[GPU].count; g++) {
    // printf("=================%d==============\n",g);
    // printNodePaths_v1(system->nodes[GPU].nodes+g);
    NCCLCHECK(ncclTopoSetPaths(system->nodes[GPU].nodes+g, system));
  }
  // printAllTopoPaths_v1(system);

  // Set direct paths to NICs.
  for (int n=0; n<system->nodes[NET].count; n++) {
    NCCLCHECK(ncclTopoSetPaths(system->nodes[NET].nodes+n, system));
  }

  // Set direct paths to NVSwitches.
  for (int n=0; n<system->nodes[NVS].count; n++) {
    NCCLCHECK(ncclTopoSetPaths(system->nodes[NVS].nodes+n, system));
  }

  // Update path for GPUs when we don't want to / can't use GPU Direct P2P
  for (int g=0; g<system->nodes[GPU].count; g++) {
    for (int p=0; p<system->nodes[GPU].count; p++) {
      int p2p;
      NCCLCHECK(ncclTopoCheckP2p(system, system->nodes[GPU].nodes[p].gpu.rank, system->nodes[GPU].nodes[g].gpu.rank, &p2p, NULL, NULL));
      if (p2p == 0) {
        // Divert all traffic through the CPU
        int cpu;
        NCCLCHECK(ncclGetLocalCpu(system, g, &cpu));
        NCCLCHECK(addInterStep(system, CPU, cpu, GPU, p, GPU, g));
      }
    }

    if (comm == NULL) continue;
    // Remove GPUs we can't (or don't want to) communicate with through P2P or SHM
    struct ncclPeerInfo* dstInfo = comm->peerInfo+system->nodes[GPU].nodes[g].gpu.rank;
    for (int p=0; p<system->nodes[GPU].count; p++) {
      if (p == g) continue;
      struct ncclPeerInfo* srcInfo = comm->peerInfo+system->nodes[GPU].nodes[p].gpu.rank;
      int p2p;
      NCCLCHECK(ncclTransports[TRANSPORT_P2P]->canConnect(&p2p, comm, NULL, srcInfo, dstInfo));
      if (p2p == 0) {
        int shm;
        NCCLCHECK(ncclTransports[TRANSPORT_SHM]->canConnect(&shm, comm, NULL, srcInfo, dstInfo));
        if (shm == 0) {
          // Mark this peer as inaccessible. We'll trim it later.
          system->nodes[GPU].nodes[p].paths[GPU][g].type = PATH_NET;
        }
      }
    }
  }

  // Update paths for NICs (no GPU Direct, PXN, ...)
  for (int n=0; n<system->nodes[NET].count; n++) {
    struct ncclTopoNode* netNode = system->nodes[NET].nodes+n;

    for (int g=0; g<system->nodes[GPU].count; g++) {
      // Check whether we can access the NIC through another NVLink-connected GPU (PXN)
      struct ncclTopoNode* gpu = system->nodes[GPU].nodes+g;
      if (ncclPxnDisable(comm) != 1) {
        int localGpuIndex;
        NCCLCHECK(ncclTopoGetLocalGpu(system, netNode->id, &localGpuIndex));
        if (localGpuIndex != g && localGpuIndex != -1) {
          // PXN = PCI + NVLink.
          struct ncclTopoNode* peerNode = system->nodes[GPU].nodes+localGpuIndex;
          // Only use PXN for NIC n if remote GPU p ...
          if (peerNode->paths[NET][n].type <= PATH_PXB && // Is connected to the NIC through PCI
              peerNode->paths[GPU][g].type <= PATH_NVL && // Is connected to us through NVLink
              NCCL_TOPO_ID_SYSTEM_ID(peerNode->id) == NCCL_TOPO_ID_SYSTEM_ID(gpu->id) && // Is on the same node as us
              (peerNode->paths[NET][n].bw > gpu->paths[NET][n].bw || // Has either higher BW to that NIC
               gpu->paths[NET][n].type > PATH_PXB))                  // or avoids going through a CPU
          // We can use that GPU as relay to communicate with that NIC.
          // Only enabling it in the GPU->NIC direction for now to favor
          // receiving locally and sending remotely (consistent with net.cc)
          NCCLCHECK(addInterStep(system, GPU, localGpuIndex, GPU, g, NET, n));
        }
      }
      if (gpu->paths[NET][n].type < PATH_PHB) {
        // Update path when we dont want to / can't use GPU Direct RDMA.
        int gdr;
        NCCLCHECK(ncclTopoCheckGdr(system, system->nodes[GPU].nodes[g].id, netNode->id, 0, &gdr));
        if (gdr == 0) {
          // We cannot use GPU Direct RDMA, divert all traffic through the CPU local to the GPU
          int localCpu;
          NCCLCHECK(ncclGetLocalCpu(system, g, &localCpu));
          NCCLCHECK(addInterStep(system, CPU, localCpu, NET, n, GPU, g));
          NCCLCHECK(addInterStep(system, CPU, localCpu, GPU, g, NET, n));
        }
      }
    }
  }
  return ncclSuccess;
}

ncclResult_t ncclTopoTrimSystem(struct ncclTopoSystem* system, struct ncclComm* comm) {
  ncclResult_t ret = ncclSuccess;
  int *domains;
  int64_t *ids = NULL;
  int myDomain = 0;
  int ngpus = system->nodes[GPU].count;
  NCCLCHECK(ncclCalloc(&domains, system->nodes[GPU].count));
  NCCLCHECKGOTO(ncclCalloc(&ids, system->nodes[GPU].count), ret, fail);
  for (int g=0; g<system->nodes[GPU].count; g++) {
    struct ncclTopoNode* gpu = system->nodes[GPU].nodes+g;
    domains[g] = g;
    ids[g] = gpu->id;
    for (int p=0; p<g; p++) {
      if (gpu->paths[GPU][p].type < PATH_NET) {
        domains[g] = std::min(domains[g], domains[p]);
      }
    }
    if (gpu->gpu.rank == comm->rank) myDomain = domains[g];
  }

  for (int i=0; i<ngpus; i++) {
    if (domains[i] == myDomain) continue;
    struct ncclTopoNode* gpu = NULL;
    int g;
    for (g=0; g<system->nodes[GPU].count /* This one varies over the loops */; g++) {
      gpu = system->nodes[GPU].nodes+g;
      if (gpu->id == ids[i]) break; else gpu=NULL;
    }
    if (gpu == NULL) {
      WARN("Could not find id %lx", ids[i]);
      ret = ncclInternalError;
      goto fail;
    }
    NCCLCHECKGOTO(ncclTopoRemoveNode(system, GPU, g), ret, fail);
  }

  if (system->nodes[GPU].count == comm->nRanks) {
    for (int n=system->nodes[NET].count-1; n>=0; n--)
      NCCLCHECKGOTO(ncclTopoRemoveNode(system, NET, n), ret, fail);
  }
exit:
  free(domains);
  if (ids) free(ids);
  return ret;
fail:
  goto exit;
}

void ncclTopoFree(struct ncclTopoSystem* system) {
  ncclTopoRemovePaths(system);
  free(system);
}

NCCL_PARAM(NChannelsPerNetPeer, "NCHANNELS_PER_NET_PEER", -1);

static ncclResult_t ncclTopoGetNchannels(struct ncclComm* comm, int g /*local gpu index*/, int peerRank, int* nChannels) {
  int peer;
  struct ncclTopoSystem* system = comm->topo;
  struct ncclTopoLinkList* path = NULL;
  if (ncclTopoRankToIndex(system, peerRank, &peer) == ncclSuccess) {
    // Same rank
    if (g == peer) {
      *nChannels = -1;
      return ncclSuccess;
    }
    // Local rank
    path = system->nodes[GPU].nodes[peer].paths[GPU]+g;
    // INFO(NCCL_INIT,"=======paths.cc 702 ========");

    for (int i = 0; i < path->count; ++i) {
        if (path->list[i] != nullptr) {
            INFO(NCCL_INIT, "Link %d: ID = %d, Bandwidth = %.2f\n", 
                 i, path->list[i]->type, path->list[i]->bw);
        }
    }

    if (path->type == PATH_NVL) {
      float nvlBw = ncclTopoNVLinkBw(system->nodes[GPU].nodes[g].gpu.cudaCompCap);
      *nChannels = 2*std::max(1, (int)(path->bw / nvlBw));
    } else {
      *nChannels = 2;
    }
  } else {
    // Remote rank, use network
    int nNetChannels = ncclParamNChannelsPerNetPeer();
    if (nNetChannels == -1) {
       //start from 2 channels per NIC and reduce with scale
       nNetChannels = 2;

       // check if we need to use more than one NIC, hence more than one channel
       int netCountByBw = 1, nChannelsMax = nNetChannels;
       NCCLCHECK(getLocalNetCountByBw(system, g, &netCountByBw));
       // Avoid overloading channels with 8+ operations as we loose the sync warp, hence a bit of bandwidth.
       while (nChannelsMax*comm->nRanks > comm->p2pnChannels*4 && nChannelsMax > 1) nChannelsMax /= 2;

       //allow upto channels requires to drive the NICs
       nNetChannels = std::max(netCountByBw, nChannelsMax);
    }
    *nChannels = nNetChannels;
  }
  return ncclSuccess;
}

NCCL_PARAM(MinP2pNChannels, "MIN_P2P_NCHANNELS", 1);
NCCL_PARAM(MaxP2pNChannels, "MAX_P2P_NCHANNELS", MAXCHANNELS);
extern int64_t ncclParamWorkArgsBytes();

ncclResult_t ncclTopoComputeP2pChannels(struct ncclComm* comm) {
  /* here we already honor comm->max/minCTAs for p2pnChannels. */
  if (comm->sharedRes->owner != comm) {
    comm->p2pnChannels = std::min(comm->nChannels, (int)ncclParamMaxP2pNChannels());
    comm->p2pnChannels = std::min(std::max(comm->p2pnChannels, (int)ncclParamMinP2pNChannels()), comm->sharedRes->tpP2pNChannels);
  } else {
    comm->p2pnChannels = std::min(comm->nChannels, (int)ncclParamMaxP2pNChannels());
    comm->p2pnChannels = std::max(comm->p2pnChannels, (int)ncclParamMinP2pNChannels());
  }

  int minChannels = comm->p2pnChannels;
  // We need to loop through all local GPUs to have a global picture
  for (int g=0; g<comm->topo->nodes[GPU].count; g++) {
    for (int r=0; r<comm->nRanks; r++) {
      int nChannels;
      NCCLCHECK(ncclTopoGetNchannels(comm, g, r, &nChannels));
      if (nChannels >= 0) minChannels = std::min(minChannels, nChannels);
    }
  }

  // Make nChannelsPerPeer and nChannels powers of 2. This is relied on when
  // mapping p2p peers to channels.
  comm->p2pnChannelsPerPeer = pow2Up(minChannels);
  comm->p2pnChannels = pow2Up(comm->p2pnChannels);

  comm->p2pnChannels = std::min(comm->p2pnChannels, pow2Down(ncclDevMaxChannelsForArgsBytes(ncclParamWorkArgsBytes())));
  comm->p2pnChannelsPerPeer = std::min(comm->p2pnChannelsPerPeer, comm->p2pnChannels);

  // Init channels that weren't used so far
  for (int c=comm->nChannels; c<comm->p2pnChannels; c++) NCCLCHECK(initChannel(comm, c));

  return ncclSuccess;
}

ncclResult_t ncclTopoGetNvbGpus(struct ncclTopoSystem* system, int rank, int* nranks, int** ranks) {
  int ngpus = system->nodes[GPU].count;
  NCCLCHECK(ncclCalloc(ranks, ngpus));
  int nvbGpus = 0;
  for (int g=0; g<ngpus; g++) {
    struct ncclTopoNode* gpu = system->nodes[GPU].nodes+g;
    if (gpu->gpu.rank != rank) continue;
    for (int p=0; p<ngpus; p++) {
      if (gpu->paths[GPU][p].type == PATH_NVB) {
        (*ranks)[nvbGpus++] = system->nodes[GPU].nodes[p].gpu.rank;
      }
    }
  }
  *nranks = nvbGpus;
  return ncclSuccess;
}

int ncclTopoPathAllNVLink(struct ncclTopoSystem* system) {
  int minPath = PATH_DIS;
  for (int i=0; i<system->nodes[GPU].count; i++) {
    struct ncclTopoLinkList* paths = system->nodes[GPU].nodes[i].paths[GPU];
    for (int j=0; j<system->nodes[GPU].count; j++) {
      if (i == j) continue;
      minPath = std::min(minPath, paths[j].type);
    }
  }
  return minPath >= PATH_PIX ? 0 : 1;
}
