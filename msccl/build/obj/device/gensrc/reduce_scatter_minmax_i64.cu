#include "common.h"
#include "reduce_scatter.h"
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
DEFINE_ncclDevFunc(ReduceScatter_MinMax_i64_NVLS_SIMPLE, ncclFuncReduceScatter, FuncMinMax, int64_t, NCCL_ALGO_NVLS, NCCL_PROTO_SIMPLE)
#endif
