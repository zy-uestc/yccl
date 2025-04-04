#include "common.h"
#include "reduce.h"
DEFINE_ncclDevKernel(Reduce_Sum_u32_RING_LL, ncclFuncReduce, FuncSum, uint32_t, NCCL_ALGO_RING, NCCL_PROTO_LL, 468)
DEFINE_ncclDevFunc(Reduce_Sum_u32_RING_LL, ncclFuncReduce, FuncSum, uint32_t, NCCL_ALGO_RING, NCCL_PROTO_LL)
DEFINE_ncclDevFunc(Reduce_Sum_u32_RING_LL128, ncclFuncReduce, FuncSum, uint32_t, NCCL_ALGO_RING, NCCL_PROTO_LL128)
DEFINE_ncclDevFunc(Reduce_Sum_u32_RING_SIMPLE, ncclFuncReduce, FuncSum, uint32_t, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
