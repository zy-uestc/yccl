#include "common.h"
#include "all_reduce.h"
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
DEFINE_ncclDevFunc(AllReduce_MinMax_i32_NVLS_SIMPLE, ncclFuncAllReduce, FuncMinMax, int32_t, NCCL_ALGO_NVLS, NCCL_PROTO_SIMPLE)
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
DEFINE_ncclDevFunc(AllReduce_MinMax_i32_NVLS_TREE_SIMPLE, ncclFuncAllReduce, FuncMinMax, int32_t, NCCL_ALGO_NVLS_TREE, NCCL_PROTO_SIMPLE)
#endif
