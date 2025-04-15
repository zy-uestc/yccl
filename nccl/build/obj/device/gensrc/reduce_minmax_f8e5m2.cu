#include "common.h"
#include "reduce.h"
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
DEFINE_ncclDevFunc(Reduce_MinMax_f8e5m2_RING_LL, ncclFuncReduce, FuncMinMax, __nv_fp8_e5m2, NCCL_ALGO_RING, NCCL_PROTO_LL)
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
DEFINE_ncclDevFunc(Reduce_MinMax_f8e5m2_RING_LL128, ncclFuncReduce, FuncMinMax, __nv_fp8_e5m2, NCCL_ALGO_RING, NCCL_PROTO_LL128)
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
DEFINE_ncclDevFunc(Reduce_MinMax_f8e5m2_RING_SIMPLE, ncclFuncReduce, FuncMinMax, __nv_fp8_e5m2, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
#endif
