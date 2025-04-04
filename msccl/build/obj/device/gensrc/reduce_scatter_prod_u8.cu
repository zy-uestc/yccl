#include "common.h"
#include "reduce_scatter.h"
DEFINE_ncclDevFunc(ReduceScatter_Prod_u8_COLLNET_DIRECT_SIMPLE, ncclFuncReduceScatter, FuncProd, uint8_t, NCCL_ALGO_COLLNET_DIRECT, NCCL_PROTO_SIMPLE)
DEFINE_ncclDevFunc(ReduceScatter_Prod_u8_PAT_SIMPLE, ncclFuncReduceScatter, FuncProd, uint8_t, NCCL_ALGO_PAT, NCCL_PROTO_SIMPLE)
DEFINE_ncclDevFunc(ReduceScatter_Prod_u8_RING_LL, ncclFuncReduceScatter, FuncProd, uint8_t, NCCL_ALGO_RING, NCCL_PROTO_LL)
DEFINE_ncclDevFunc(ReduceScatter_Prod_u8_RING_LL128, ncclFuncReduceScatter, FuncProd, uint8_t, NCCL_ALGO_RING, NCCL_PROTO_LL128)
DEFINE_ncclDevFunc(ReduceScatter_Prod_u8_RING_SIMPLE, ncclFuncReduceScatter, FuncProd, uint8_t, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
