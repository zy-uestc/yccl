#include "common.h"
#include "all_reduce.h"
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
DEFINE_ncclDevFunc(AllReduce_Prod_bf16_COLLNET_CHAIN_SIMPLE, ncclFuncAllReduce, FuncProd, __nv_bfloat16, NCCL_ALGO_COLLNET_CHAIN, NCCL_PROTO_SIMPLE)
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
DEFINE_ncclDevFunc(AllReduce_Prod_bf16_COLLNET_DIRECT_SIMPLE, ncclFuncAllReduce, FuncProd, __nv_bfloat16, NCCL_ALGO_COLLNET_DIRECT, NCCL_PROTO_SIMPLE)
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
DEFINE_ncclDevFunc(AllReduce_Prod_bf16_RING_LL, ncclFuncAllReduce, FuncProd, __nv_bfloat16, NCCL_ALGO_RING, NCCL_PROTO_LL)
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
DEFINE_ncclDevFunc(AllReduce_Prod_bf16_RING_LL128, ncclFuncAllReduce, FuncProd, __nv_bfloat16, NCCL_ALGO_RING, NCCL_PROTO_LL128)
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
DEFINE_ncclDevFunc(AllReduce_Prod_bf16_RING_SIMPLE, ncclFuncAllReduce, FuncProd, __nv_bfloat16, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
DEFINE_ncclDevFunc(AllReduce_Prod_bf16_TREE_LL, ncclFuncAllReduce, FuncProd, __nv_bfloat16, NCCL_ALGO_TREE, NCCL_PROTO_LL)
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
DEFINE_ncclDevFunc(AllReduce_Prod_bf16_TREE_LL128, ncclFuncAllReduce, FuncProd, __nv_bfloat16, NCCL_ALGO_TREE, NCCL_PROTO_LL128)
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
DEFINE_ncclDevFunc(AllReduce_Prod_bf16_TREE_SIMPLE, ncclFuncAllReduce, FuncProd, __nv_bfloat16, NCCL_ALGO_TREE, NCCL_PROTO_SIMPLE)
#endif
