#include "common.h"
#include "reduce.h"
DEFINE_ncclDevFunc(Reduce_SumPostDiv_i8_RING_LL, ncclFuncReduce, FuncSumPostDiv, int8_t, NCCL_ALGO_RING, NCCL_PROTO_LL)
DEFINE_ncclDevFunc(Reduce_SumPostDiv_i8_RING_LL128, ncclFuncReduce, FuncSumPostDiv, int8_t, NCCL_ALGO_RING, NCCL_PROTO_LL128)
DEFINE_ncclDevFunc(Reduce_SumPostDiv_i8_RING_SIMPLE, ncclFuncReduce, FuncSumPostDiv, int8_t, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
