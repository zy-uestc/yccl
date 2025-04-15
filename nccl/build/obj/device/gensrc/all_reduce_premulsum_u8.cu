#include "common.h"
#include "all_reduce.h"
DEFINE_ncclDevFunc(AllReduce_PreMulSum_u8_COLLNET_CHAIN_SIMPLE, ncclFuncAllReduce, FuncPreMulSum, uint8_t, NCCL_ALGO_COLLNET_CHAIN, NCCL_PROTO_SIMPLE)
DEFINE_ncclDevFunc(AllReduce_PreMulSum_u8_COLLNET_DIRECT_SIMPLE, ncclFuncAllReduce, FuncPreMulSum, uint8_t, NCCL_ALGO_COLLNET_DIRECT, NCCL_PROTO_SIMPLE)
DEFINE_ncclDevFunc(AllReduce_PreMulSum_u8_RING_LL, ncclFuncAllReduce, FuncPreMulSum, uint8_t, NCCL_ALGO_RING, NCCL_PROTO_LL)
DEFINE_ncclDevFunc(AllReduce_PreMulSum_u8_RING_LL128, ncclFuncAllReduce, FuncPreMulSum, uint8_t, NCCL_ALGO_RING, NCCL_PROTO_LL128)
DEFINE_ncclDevFunc(AllReduce_PreMulSum_u8_RING_SIMPLE, ncclFuncAllReduce, FuncPreMulSum, uint8_t, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
DEFINE_ncclDevFunc(AllReduce_PreMulSum_u8_TREE_LL, ncclFuncAllReduce, FuncPreMulSum, uint8_t, NCCL_ALGO_TREE, NCCL_PROTO_LL)
DEFINE_ncclDevFunc(AllReduce_PreMulSum_u8_TREE_LL128, ncclFuncAllReduce, FuncPreMulSum, uint8_t, NCCL_ALGO_TREE, NCCL_PROTO_LL128)
DEFINE_ncclDevFunc(AllReduce_PreMulSum_u8_TREE_SIMPLE, ncclFuncAllReduce, FuncPreMulSum, uint8_t, NCCL_ALGO_TREE, NCCL_PROTO_SIMPLE)
