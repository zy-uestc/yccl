#include "common.h"
#include "all_reduce.h"
DEFINE_ncclDevFunc(AllReduce_Prod_f64_COLLNET_CHAIN_SIMPLE, ncclFuncAllReduce, FuncProd, double, NCCL_ALGO_COLLNET_CHAIN, NCCL_PROTO_SIMPLE)
DEFINE_ncclDevFunc(AllReduce_Prod_f64_COLLNET_DIRECT_SIMPLE, ncclFuncAllReduce, FuncProd, double, NCCL_ALGO_COLLNET_DIRECT, NCCL_PROTO_SIMPLE)
DEFINE_ncclDevFunc(AllReduce_Prod_f64_RING_LL, ncclFuncAllReduce, FuncProd, double, NCCL_ALGO_RING, NCCL_PROTO_LL)
DEFINE_ncclDevFunc(AllReduce_Prod_f64_RING_LL128, ncclFuncAllReduce, FuncProd, double, NCCL_ALGO_RING, NCCL_PROTO_LL128)
DEFINE_ncclDevFunc(AllReduce_Prod_f64_RING_SIMPLE, ncclFuncAllReduce, FuncProd, double, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
DEFINE_ncclDevFunc(AllReduce_Prod_f64_TREE_LL, ncclFuncAllReduce, FuncProd, double, NCCL_ALGO_TREE, NCCL_PROTO_LL)
DEFINE_ncclDevFunc(AllReduce_Prod_f64_TREE_LL128, ncclFuncAllReduce, FuncProd, double, NCCL_ALGO_TREE, NCCL_PROTO_LL128)
DEFINE_ncclDevFunc(AllReduce_Prod_f64_TREE_SIMPLE, ncclFuncAllReduce, FuncProd, double, NCCL_ALGO_TREE, NCCL_PROTO_SIMPLE)
