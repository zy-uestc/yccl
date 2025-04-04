#include "common.h"
#include "reduce.h"
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 0
DEFINE_ncclDevFunc(Reduce_PreMulSum_fp8_e4m3_RING_LL, ncclFuncReduce, FuncPreMulSum, __nv_fp8_e4m3, NCCL_ALGO_RING, NCCL_PROTO_LL)
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 0
DEFINE_ncclDevFunc(Reduce_PreMulSum_fp8_e4m3_RING_LL128, ncclFuncReduce, FuncPreMulSum, __nv_fp8_e4m3, NCCL_ALGO_RING, NCCL_PROTO_LL128)
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 0
DEFINE_ncclDevFunc(Reduce_PreMulSum_fp8_e4m3_RING_SIMPLE, ncclFuncReduce, FuncPreMulSum, __nv_fp8_e4m3, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
#endif
