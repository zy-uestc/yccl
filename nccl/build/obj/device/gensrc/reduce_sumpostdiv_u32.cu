#include "common.h"
#include "reduce.h"
DEFINE_ncclDevFunc(Reduce_SumPostDiv_u32_RING_LL, ncclFuncReduce, FuncSumPostDiv, uint32_t, NCCL_ALGO_RING, NCCL_PROTO_LL)
DEFINE_ncclDevFunc(Reduce_SumPostDiv_u32_RING_LL128, ncclFuncReduce, FuncSumPostDiv, uint32_t, NCCL_ALGO_RING, NCCL_PROTO_LL128)
DEFINE_ncclDevFunc(Reduce_SumPostDiv_u32_RING_SIMPLE, ncclFuncReduce, FuncSumPostDiv, uint32_t, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
