#include "common.h"
#include "reduce.h"
DEFINE_ncclDevFunc(Reduce_MinMax_u8_RING_LL, ncclFuncReduce, FuncMinMax, uint8_t, NCCL_ALGO_RING, NCCL_PROTO_LL)
DEFINE_ncclDevFunc(Reduce_MinMax_u8_RING_LL128, ncclFuncReduce, FuncMinMax, uint8_t, NCCL_ALGO_RING, NCCL_PROTO_LL128)
DEFINE_ncclDevFunc(Reduce_MinMax_u8_RING_SIMPLE, ncclFuncReduce, FuncMinMax, uint8_t, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
