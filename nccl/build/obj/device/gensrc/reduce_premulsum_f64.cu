#include "common.h"
#include "reduce.h"
DEFINE_ncclDevFunc(Reduce_PreMulSum_f64_RING_LL, ncclFuncReduce, FuncPreMulSum, double, NCCL_ALGO_RING, NCCL_PROTO_LL)
DEFINE_ncclDevFunc(Reduce_PreMulSum_f64_RING_LL128, ncclFuncReduce, FuncPreMulSum, double, NCCL_ALGO_RING, NCCL_PROTO_LL128)
DEFINE_ncclDevFunc(Reduce_PreMulSum_f64_RING_SIMPLE, ncclFuncReduce, FuncPreMulSum, double, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
