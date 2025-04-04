#include "device.h"

extern int const ncclDevFuncIdCount = 718;
extern int const ncclDevFuncRowToId[] = {
/*   0*/ 717, // SendRecv
/*   1*/ 3, // AllGather RING LL
/*   2*/ 4, // AllGather RING LL128
/*   3*/ 5, // AllGather RING SIMPLE
/*   4*/ -1,
/*   5*/ -1,
/*   6*/ 0, // AllGather COLLNET_DIRECT SIMPLE
/*   7*/ -1,
/*   8*/ -1,
/*   9*/ 1, // AllGather NVLS SIMPLE
/*  10*/ -1,
/*  11*/ -1,
/*  12*/ 2, // AllGather PAT SIMPLE
/*  13*/ 366, // Broadcast RING LL
/*  14*/ 367, // Broadcast RING LL128
/*  15*/ 368, // Broadcast RING SIMPLE
/*  16*/ 315, // AllReduce Sum i8 TREE LL
/*  17*/ 316, // AllReduce Sum i8 TREE LL128
/*  18*/ 317, // AllReduce Sum i8 TREE SIMPLE
/*  19*/ 312, // AllReduce Sum i8 RING LL
/*  20*/ 313, // AllReduce Sum i8 RING LL128
/*  21*/ 314, // AllReduce Sum i8 RING SIMPLE
/*  22*/ -1,
/*  23*/ -1,
/*  24*/ 311, // AllReduce Sum i8 COLLNET_DIRECT SIMPLE
/*  25*/ -1,
/*  26*/ -1,
/*  27*/ 310, // AllReduce Sum i8 COLLNET_CHAIN SIMPLE
/*  28*/ -1,
/*  29*/ -1,
/*  30*/ -1,
/*  31*/ -1,
/*  32*/ -1,
/*  33*/ -1,
/*  34*/ 315, // AllReduce Sum u8 TREE LL
/*  35*/ 316, // AllReduce Sum u8 TREE LL128
/*  36*/ 317, // AllReduce Sum u8 TREE SIMPLE
/*  37*/ 312, // AllReduce Sum u8 RING LL
/*  38*/ 313, // AllReduce Sum u8 RING LL128
/*  39*/ 314, // AllReduce Sum u8 RING SIMPLE
/*  40*/ -1,
/*  41*/ -1,
/*  42*/ 311, // AllReduce Sum u8 COLLNET_DIRECT SIMPLE
/*  43*/ -1,
/*  44*/ -1,
/*  45*/ 310, // AllReduce Sum u8 COLLNET_CHAIN SIMPLE
/*  46*/ -1,
/*  47*/ -1,
/*  48*/ -1,
/*  49*/ -1,
/*  50*/ -1,
/*  51*/ -1,
/*  52*/ 297, // AllReduce Sum i32 TREE LL
/*  53*/ 298, // AllReduce Sum i32 TREE LL128
/*  54*/ 299, // AllReduce Sum i32 TREE SIMPLE
/*  55*/ 294, // AllReduce Sum i32 RING LL
/*  56*/ 295, // AllReduce Sum i32 RING LL128
/*  57*/ 296, // AllReduce Sum i32 RING SIMPLE
/*  58*/ -1,
/*  59*/ -1,
/*  60*/ 291, // AllReduce Sum i32 COLLNET_DIRECT SIMPLE
/*  61*/ -1,
/*  62*/ -1,
/*  63*/ 290, // AllReduce Sum i32 COLLNET_CHAIN SIMPLE
/*  64*/ -1,
/*  65*/ -1,
/*  66*/ 292, // AllReduce Sum i32 NVLS SIMPLE
/*  67*/ -1,
/*  68*/ -1,
/*  69*/ 293, // AllReduce Sum i32 NVLS_TREE SIMPLE
/*  70*/ 297, // AllReduce Sum u32 TREE LL
/*  71*/ 298, // AllReduce Sum u32 TREE LL128
/*  72*/ 299, // AllReduce Sum u32 TREE SIMPLE
/*  73*/ 294, // AllReduce Sum u32 RING LL
/*  74*/ 295, // AllReduce Sum u32 RING LL128
/*  75*/ 296, // AllReduce Sum u32 RING SIMPLE
/*  76*/ -1,
/*  77*/ -1,
/*  78*/ 291, // AllReduce Sum u32 COLLNET_DIRECT SIMPLE
/*  79*/ -1,
/*  80*/ -1,
/*  81*/ 290, // AllReduce Sum u32 COLLNET_CHAIN SIMPLE
/*  82*/ -1,
/*  83*/ -1,
/*  84*/ 292, // AllReduce Sum u32 NVLS SIMPLE
/*  85*/ -1,
/*  86*/ -1,
/*  87*/ 293, // AllReduce Sum u32 NVLS_TREE SIMPLE
/*  88*/ 307, // AllReduce Sum i64 TREE LL
/*  89*/ 308, // AllReduce Sum i64 TREE LL128
/*  90*/ 309, // AllReduce Sum i64 TREE SIMPLE
/*  91*/ 304, // AllReduce Sum i64 RING LL
/*  92*/ 305, // AllReduce Sum i64 RING LL128
/*  93*/ 306, // AllReduce Sum i64 RING SIMPLE
/*  94*/ -1,
/*  95*/ -1,
/*  96*/ 301, // AllReduce Sum i64 COLLNET_DIRECT SIMPLE
/*  97*/ -1,
/*  98*/ -1,
/*  99*/ 300, // AllReduce Sum i64 COLLNET_CHAIN SIMPLE
/* 100*/ -1,
/* 101*/ -1,
/* 102*/ 302, // AllReduce Sum i64 NVLS SIMPLE
/* 103*/ -1,
/* 104*/ -1,
/* 105*/ 303, // AllReduce Sum i64 NVLS_TREE SIMPLE
/* 106*/ 307, // AllReduce Sum u64 TREE LL
/* 107*/ 308, // AllReduce Sum u64 TREE LL128
/* 108*/ 309, // AllReduce Sum u64 TREE SIMPLE
/* 109*/ 304, // AllReduce Sum u64 RING LL
/* 110*/ 305, // AllReduce Sum u64 RING LL128
/* 111*/ 306, // AllReduce Sum u64 RING SIMPLE
/* 112*/ -1,
/* 113*/ -1,
/* 114*/ 301, // AllReduce Sum u64 COLLNET_DIRECT SIMPLE
/* 115*/ -1,
/* 116*/ -1,
/* 117*/ 300, // AllReduce Sum u64 COLLNET_CHAIN SIMPLE
/* 118*/ -1,
/* 119*/ -1,
/* 120*/ 302, // AllReduce Sum u64 NVLS SIMPLE
/* 121*/ -1,
/* 122*/ -1,
/* 123*/ 303, // AllReduce Sum u64 NVLS_TREE SIMPLE
/* 124*/ 251, // AllReduce Sum f16 TREE LL
/* 125*/ 252, // AllReduce Sum f16 TREE LL128
/* 126*/ 253, // AllReduce Sum f16 TREE SIMPLE
/* 127*/ 248, // AllReduce Sum f16 RING LL
/* 128*/ 249, // AllReduce Sum f16 RING LL128
/* 129*/ 250, // AllReduce Sum f16 RING SIMPLE
/* 130*/ -1,
/* 131*/ -1,
/* 132*/ 245, // AllReduce Sum f16 COLLNET_DIRECT SIMPLE
/* 133*/ -1,
/* 134*/ -1,
/* 135*/ 244, // AllReduce Sum f16 COLLNET_CHAIN SIMPLE
/* 136*/ -1,
/* 137*/ -1,
/* 138*/ 246, // AllReduce Sum f16 NVLS SIMPLE
/* 139*/ -1,
/* 140*/ -1,
/* 141*/ 247, // AllReduce Sum f16 NVLS_TREE SIMPLE
/* 142*/ 261, // AllReduce Sum f32 TREE LL
/* 143*/ 262, // AllReduce Sum f32 TREE LL128
/* 144*/ 263, // AllReduce Sum f32 TREE SIMPLE
/* 145*/ 258, // AllReduce Sum f32 RING LL
/* 146*/ 259, // AllReduce Sum f32 RING LL128
/* 147*/ 260, // AllReduce Sum f32 RING SIMPLE
/* 148*/ -1,
/* 149*/ -1,
/* 150*/ 255, // AllReduce Sum f32 COLLNET_DIRECT SIMPLE
/* 151*/ -1,
/* 152*/ -1,
/* 153*/ 254, // AllReduce Sum f32 COLLNET_CHAIN SIMPLE
/* 154*/ -1,
/* 155*/ -1,
/* 156*/ 256, // AllReduce Sum f32 NVLS SIMPLE
/* 157*/ -1,
/* 158*/ -1,
/* 159*/ 257, // AllReduce Sum f32 NVLS_TREE SIMPLE
/* 160*/ 271, // AllReduce Sum f64 TREE LL
/* 161*/ 272, // AllReduce Sum f64 TREE LL128
/* 162*/ 273, // AllReduce Sum f64 TREE SIMPLE
/* 163*/ 268, // AllReduce Sum f64 RING LL
/* 164*/ 269, // AllReduce Sum f64 RING LL128
/* 165*/ 270, // AllReduce Sum f64 RING SIMPLE
/* 166*/ -1,
/* 167*/ -1,
/* 168*/ 265, // AllReduce Sum f64 COLLNET_DIRECT SIMPLE
/* 169*/ -1,
/* 170*/ -1,
/* 171*/ 264, // AllReduce Sum f64 COLLNET_CHAIN SIMPLE
/* 172*/ -1,
/* 173*/ -1,
/* 174*/ 266, // AllReduce Sum f64 NVLS SIMPLE
/* 175*/ -1,
/* 176*/ -1,
/* 177*/ 267, // AllReduce Sum f64 NVLS_TREE SIMPLE
/* 178*/ 241, // AllReduce Sum bf16 TREE LL
/* 179*/ 242, // AllReduce Sum bf16 TREE LL128
/* 180*/ 243, // AllReduce Sum bf16 TREE SIMPLE
/* 181*/ 238, // AllReduce Sum bf16 RING LL
/* 182*/ 239, // AllReduce Sum bf16 RING LL128
/* 183*/ 240, // AllReduce Sum bf16 RING SIMPLE
/* 184*/ -1,
/* 185*/ -1,
/* 186*/ 235, // AllReduce Sum bf16 COLLNET_DIRECT SIMPLE
/* 187*/ -1,
/* 188*/ -1,
/* 189*/ 234, // AllReduce Sum bf16 COLLNET_CHAIN SIMPLE
/* 190*/ -1,
/* 191*/ -1,
/* 192*/ 236, // AllReduce Sum bf16 NVLS SIMPLE
/* 193*/ -1,
/* 194*/ -1,
/* 195*/ 237, // AllReduce Sum bf16 NVLS_TREE SIMPLE
/* 196*/ 279, // AllReduce Sum fp8_e4m3 TREE LL
/* 197*/ 280, // AllReduce Sum fp8_e4m3 TREE LL128
/* 198*/ 281, // AllReduce Sum fp8_e4m3 TREE SIMPLE
/* 199*/ 276, // AllReduce Sum fp8_e4m3 RING LL
/* 200*/ 277, // AllReduce Sum fp8_e4m3 RING LL128
/* 201*/ 278, // AllReduce Sum fp8_e4m3 RING SIMPLE
/* 202*/ -1,
/* 203*/ -1,
/* 204*/ 275, // AllReduce Sum fp8_e4m3 COLLNET_DIRECT SIMPLE
/* 205*/ -1,
/* 206*/ -1,
/* 207*/ 274, // AllReduce Sum fp8_e4m3 COLLNET_CHAIN SIMPLE
/* 208*/ -1,
/* 209*/ -1,
/* 210*/ -1,
/* 211*/ -1,
/* 212*/ -1,
/* 213*/ -1,
/* 214*/ 287, // AllReduce Sum fp8_e5m2 TREE LL
/* 215*/ 288, // AllReduce Sum fp8_e5m2 TREE LL128
/* 216*/ 289, // AllReduce Sum fp8_e5m2 TREE SIMPLE
/* 217*/ 284, // AllReduce Sum fp8_e5m2 RING LL
/* 218*/ 285, // AllReduce Sum fp8_e5m2 RING LL128
/* 219*/ 286, // AllReduce Sum fp8_e5m2 RING SIMPLE
/* 220*/ -1,
/* 221*/ -1,
/* 222*/ 283, // AllReduce Sum fp8_e5m2 COLLNET_DIRECT SIMPLE
/* 223*/ -1,
/* 224*/ -1,
/* 225*/ 282, // AllReduce Sum fp8_e5m2 COLLNET_CHAIN SIMPLE
/* 226*/ -1,
/* 227*/ -1,
/* 228*/ -1,
/* 229*/ -1,
/* 230*/ -1,
/* 231*/ -1,
/* 232*/ 231, // AllReduce Prod i8 TREE LL
/* 233*/ 232, // AllReduce Prod i8 TREE LL128
/* 234*/ 233, // AllReduce Prod i8 TREE SIMPLE
/* 235*/ 228, // AllReduce Prod i8 RING LL
/* 236*/ 229, // AllReduce Prod i8 RING LL128
/* 237*/ 230, // AllReduce Prod i8 RING SIMPLE
/* 238*/ -1,
/* 239*/ -1,
/* 240*/ 227, // AllReduce Prod i8 COLLNET_DIRECT SIMPLE
/* 241*/ -1,
/* 242*/ -1,
/* 243*/ 226, // AllReduce Prod i8 COLLNET_CHAIN SIMPLE
/* 244*/ -1,
/* 245*/ -1,
/* 246*/ -1,
/* 247*/ -1,
/* 248*/ -1,
/* 249*/ -1,
/* 250*/ 231, // AllReduce Prod u8 TREE LL
/* 251*/ 232, // AllReduce Prod u8 TREE LL128
/* 252*/ 233, // AllReduce Prod u8 TREE SIMPLE
/* 253*/ 228, // AllReduce Prod u8 RING LL
/* 254*/ 229, // AllReduce Prod u8 RING LL128
/* 255*/ 230, // AllReduce Prod u8 RING SIMPLE
/* 256*/ -1,
/* 257*/ -1,
/* 258*/ 227, // AllReduce Prod u8 COLLNET_DIRECT SIMPLE
/* 259*/ -1,
/* 260*/ -1,
/* 261*/ 226, // AllReduce Prod u8 COLLNET_CHAIN SIMPLE
/* 262*/ -1,
/* 263*/ -1,
/* 264*/ -1,
/* 265*/ -1,
/* 266*/ -1,
/* 267*/ -1,
/* 268*/ 215, // AllReduce Prod i32 TREE LL
/* 269*/ 216, // AllReduce Prod i32 TREE LL128
/* 270*/ 217, // AllReduce Prod i32 TREE SIMPLE
/* 271*/ 212, // AllReduce Prod i32 RING LL
/* 272*/ 213, // AllReduce Prod i32 RING LL128
/* 273*/ 214, // AllReduce Prod i32 RING SIMPLE
/* 274*/ -1,
/* 275*/ -1,
/* 276*/ 211, // AllReduce Prod i32 COLLNET_DIRECT SIMPLE
/* 277*/ -1,
/* 278*/ -1,
/* 279*/ 210, // AllReduce Prod i32 COLLNET_CHAIN SIMPLE
/* 280*/ -1,
/* 281*/ -1,
/* 282*/ -1,
/* 283*/ -1,
/* 284*/ -1,
/* 285*/ -1,
/* 286*/ 215, // AllReduce Prod u32 TREE LL
/* 287*/ 216, // AllReduce Prod u32 TREE LL128
/* 288*/ 217, // AllReduce Prod u32 TREE SIMPLE
/* 289*/ 212, // AllReduce Prod u32 RING LL
/* 290*/ 213, // AllReduce Prod u32 RING LL128
/* 291*/ 214, // AllReduce Prod u32 RING SIMPLE
/* 292*/ -1,
/* 293*/ -1,
/* 294*/ 211, // AllReduce Prod u32 COLLNET_DIRECT SIMPLE
/* 295*/ -1,
/* 296*/ -1,
/* 297*/ 210, // AllReduce Prod u32 COLLNET_CHAIN SIMPLE
/* 298*/ -1,
/* 299*/ -1,
/* 300*/ -1,
/* 301*/ -1,
/* 302*/ -1,
/* 303*/ -1,
/* 304*/ 223, // AllReduce Prod i64 TREE LL
/* 305*/ 224, // AllReduce Prod i64 TREE LL128
/* 306*/ 225, // AllReduce Prod i64 TREE SIMPLE
/* 307*/ 220, // AllReduce Prod i64 RING LL
/* 308*/ 221, // AllReduce Prod i64 RING LL128
/* 309*/ 222, // AllReduce Prod i64 RING SIMPLE
/* 310*/ -1,
/* 311*/ -1,
/* 312*/ 219, // AllReduce Prod i64 COLLNET_DIRECT SIMPLE
/* 313*/ -1,
/* 314*/ -1,
/* 315*/ 218, // AllReduce Prod i64 COLLNET_CHAIN SIMPLE
/* 316*/ -1,
/* 317*/ -1,
/* 318*/ -1,
/* 319*/ -1,
/* 320*/ -1,
/* 321*/ -1,
/* 322*/ 223, // AllReduce Prod u64 TREE LL
/* 323*/ 224, // AllReduce Prod u64 TREE LL128
/* 324*/ 225, // AllReduce Prod u64 TREE SIMPLE
/* 325*/ 220, // AllReduce Prod u64 RING LL
/* 326*/ 221, // AllReduce Prod u64 RING LL128
/* 327*/ 222, // AllReduce Prod u64 RING SIMPLE
/* 328*/ -1,
/* 329*/ -1,
/* 330*/ 219, // AllReduce Prod u64 COLLNET_DIRECT SIMPLE
/* 331*/ -1,
/* 332*/ -1,
/* 333*/ 218, // AllReduce Prod u64 COLLNET_CHAIN SIMPLE
/* 334*/ -1,
/* 335*/ -1,
/* 336*/ -1,
/* 337*/ -1,
/* 338*/ -1,
/* 339*/ -1,
/* 340*/ 175, // AllReduce Prod f16 TREE LL
/* 341*/ 176, // AllReduce Prod f16 TREE LL128
/* 342*/ 177, // AllReduce Prod f16 TREE SIMPLE
/* 343*/ 172, // AllReduce Prod f16 RING LL
/* 344*/ 173, // AllReduce Prod f16 RING LL128
/* 345*/ 174, // AllReduce Prod f16 RING SIMPLE
/* 346*/ -1,
/* 347*/ -1,
/* 348*/ 171, // AllReduce Prod f16 COLLNET_DIRECT SIMPLE
/* 349*/ -1,
/* 350*/ -1,
/* 351*/ 170, // AllReduce Prod f16 COLLNET_CHAIN SIMPLE
/* 352*/ -1,
/* 353*/ -1,
/* 354*/ -1,
/* 355*/ -1,
/* 356*/ -1,
/* 357*/ -1,
/* 358*/ 183, // AllReduce Prod f32 TREE LL
/* 359*/ 184, // AllReduce Prod f32 TREE LL128
/* 360*/ 185, // AllReduce Prod f32 TREE SIMPLE
/* 361*/ 180, // AllReduce Prod f32 RING LL
/* 362*/ 181, // AllReduce Prod f32 RING LL128
/* 363*/ 182, // AllReduce Prod f32 RING SIMPLE
/* 364*/ -1,
/* 365*/ -1,
/* 366*/ 179, // AllReduce Prod f32 COLLNET_DIRECT SIMPLE
/* 367*/ -1,
/* 368*/ -1,
/* 369*/ 178, // AllReduce Prod f32 COLLNET_CHAIN SIMPLE
/* 370*/ -1,
/* 371*/ -1,
/* 372*/ -1,
/* 373*/ -1,
/* 374*/ -1,
/* 375*/ -1,
/* 376*/ 191, // AllReduce Prod f64 TREE LL
/* 377*/ 192, // AllReduce Prod f64 TREE LL128
/* 378*/ 193, // AllReduce Prod f64 TREE SIMPLE
/* 379*/ 188, // AllReduce Prod f64 RING LL
/* 380*/ 189, // AllReduce Prod f64 RING LL128
/* 381*/ 190, // AllReduce Prod f64 RING SIMPLE
/* 382*/ -1,
/* 383*/ -1,
/* 384*/ 187, // AllReduce Prod f64 COLLNET_DIRECT SIMPLE
/* 385*/ -1,
/* 386*/ -1,
/* 387*/ 186, // AllReduce Prod f64 COLLNET_CHAIN SIMPLE
/* 388*/ -1,
/* 389*/ -1,
/* 390*/ -1,
/* 391*/ -1,
/* 392*/ -1,
/* 393*/ -1,
/* 394*/ 167, // AllReduce Prod bf16 TREE LL
/* 395*/ 168, // AllReduce Prod bf16 TREE LL128
/* 396*/ 169, // AllReduce Prod bf16 TREE SIMPLE
/* 397*/ 164, // AllReduce Prod bf16 RING LL
/* 398*/ 165, // AllReduce Prod bf16 RING LL128
/* 399*/ 166, // AllReduce Prod bf16 RING SIMPLE
/* 400*/ -1,
/* 401*/ -1,
/* 402*/ 163, // AllReduce Prod bf16 COLLNET_DIRECT SIMPLE
/* 403*/ -1,
/* 404*/ -1,
/* 405*/ 162, // AllReduce Prod bf16 COLLNET_CHAIN SIMPLE
/* 406*/ -1,
/* 407*/ -1,
/* 408*/ -1,
/* 409*/ -1,
/* 410*/ -1,
/* 411*/ -1,
/* 412*/ 199, // AllReduce Prod fp8_e4m3 TREE LL
/* 413*/ 200, // AllReduce Prod fp8_e4m3 TREE LL128
/* 414*/ 201, // AllReduce Prod fp8_e4m3 TREE SIMPLE
/* 415*/ 196, // AllReduce Prod fp8_e4m3 RING LL
/* 416*/ 197, // AllReduce Prod fp8_e4m3 RING LL128
/* 417*/ 198, // AllReduce Prod fp8_e4m3 RING SIMPLE
/* 418*/ -1,
/* 419*/ -1,
/* 420*/ 195, // AllReduce Prod fp8_e4m3 COLLNET_DIRECT SIMPLE
/* 421*/ -1,
/* 422*/ -1,
/* 423*/ 194, // AllReduce Prod fp8_e4m3 COLLNET_CHAIN SIMPLE
/* 424*/ -1,
/* 425*/ -1,
/* 426*/ -1,
/* 427*/ -1,
/* 428*/ -1,
/* 429*/ -1,
/* 430*/ 207, // AllReduce Prod fp8_e5m2 TREE LL
/* 431*/ 208, // AllReduce Prod fp8_e5m2 TREE LL128
/* 432*/ 209, // AllReduce Prod fp8_e5m2 TREE SIMPLE
/* 433*/ 204, // AllReduce Prod fp8_e5m2 RING LL
/* 434*/ 205, // AllReduce Prod fp8_e5m2 RING LL128
/* 435*/ 206, // AllReduce Prod fp8_e5m2 RING SIMPLE
/* 436*/ -1,
/* 437*/ -1,
/* 438*/ 203, // AllReduce Prod fp8_e5m2 COLLNET_DIRECT SIMPLE
/* 439*/ -1,
/* 440*/ -1,
/* 441*/ 202, // AllReduce Prod fp8_e5m2 COLLNET_CHAIN SIMPLE
/* 442*/ -1,
/* 443*/ -1,
/* 444*/ -1,
/* 445*/ -1,
/* 446*/ -1,
/* 447*/ -1,
/* 448*/ 87, // AllReduce MinMax i8 TREE LL
/* 449*/ 88, // AllReduce MinMax i8 TREE LL128
/* 450*/ 89, // AllReduce MinMax i8 TREE SIMPLE
/* 451*/ 84, // AllReduce MinMax i8 RING LL
/* 452*/ 85, // AllReduce MinMax i8 RING LL128
/* 453*/ 86, // AllReduce MinMax i8 RING SIMPLE
/* 454*/ -1,
/* 455*/ -1,
/* 456*/ 83, // AllReduce MinMax i8 COLLNET_DIRECT SIMPLE
/* 457*/ -1,
/* 458*/ -1,
/* 459*/ 82, // AllReduce MinMax i8 COLLNET_CHAIN SIMPLE
/* 460*/ -1,
/* 461*/ -1,
/* 462*/ -1,
/* 463*/ -1,
/* 464*/ -1,
/* 465*/ -1,
/* 466*/ 87, // AllReduce MinMax u8 TREE LL
/* 467*/ 88, // AllReduce MinMax u8 TREE LL128
/* 468*/ 89, // AllReduce MinMax u8 TREE SIMPLE
/* 469*/ 84, // AllReduce MinMax u8 RING LL
/* 470*/ 85, // AllReduce MinMax u8 RING LL128
/* 471*/ 86, // AllReduce MinMax u8 RING SIMPLE
/* 472*/ -1,
/* 473*/ -1,
/* 474*/ 83, // AllReduce MinMax u8 COLLNET_DIRECT SIMPLE
/* 475*/ -1,
/* 476*/ -1,
/* 477*/ 82, // AllReduce MinMax u8 COLLNET_CHAIN SIMPLE
/* 478*/ -1,
/* 479*/ -1,
/* 480*/ -1,
/* 481*/ -1,
/* 482*/ -1,
/* 483*/ -1,
/* 484*/ 69, // AllReduce MinMax i32 TREE LL
/* 485*/ 70, // AllReduce MinMax i32 TREE LL128
/* 486*/ 71, // AllReduce MinMax i32 TREE SIMPLE
/* 487*/ 66, // AllReduce MinMax i32 RING LL
/* 488*/ 67, // AllReduce MinMax i32 RING LL128
/* 489*/ 68, // AllReduce MinMax i32 RING SIMPLE
/* 490*/ -1,
/* 491*/ -1,
/* 492*/ 63, // AllReduce MinMax i32 COLLNET_DIRECT SIMPLE
/* 493*/ -1,
/* 494*/ -1,
/* 495*/ 62, // AllReduce MinMax i32 COLLNET_CHAIN SIMPLE
/* 496*/ -1,
/* 497*/ -1,
/* 498*/ 58, // AllReduce MinMax i32 NVLS SIMPLE
/* 499*/ -1,
/* 500*/ -1,
/* 501*/ 59, // AllReduce MinMax i32 NVLS_TREE SIMPLE
/* 502*/ 69, // AllReduce MinMax u32 TREE LL
/* 503*/ 70, // AllReduce MinMax u32 TREE LL128
/* 504*/ 71, // AllReduce MinMax u32 TREE SIMPLE
/* 505*/ 66, // AllReduce MinMax u32 RING LL
/* 506*/ 67, // AllReduce MinMax u32 RING LL128
/* 507*/ 68, // AllReduce MinMax u32 RING SIMPLE
/* 508*/ -1,
/* 509*/ -1,
/* 510*/ 63, // AllReduce MinMax u32 COLLNET_DIRECT SIMPLE
/* 511*/ -1,
/* 512*/ -1,
/* 513*/ 62, // AllReduce MinMax u32 COLLNET_CHAIN SIMPLE
/* 514*/ -1,
/* 515*/ -1,
/* 516*/ 64, // AllReduce MinMax u32 NVLS SIMPLE
/* 517*/ -1,
/* 518*/ -1,
/* 519*/ 65, // AllReduce MinMax u32 NVLS_TREE SIMPLE
/* 520*/ 79, // AllReduce MinMax i64 TREE LL
/* 521*/ 80, // AllReduce MinMax i64 TREE LL128
/* 522*/ 81, // AllReduce MinMax i64 TREE SIMPLE
/* 523*/ 76, // AllReduce MinMax i64 RING LL
/* 524*/ 77, // AllReduce MinMax i64 RING LL128
/* 525*/ 78, // AllReduce MinMax i64 RING SIMPLE
/* 526*/ -1,
/* 527*/ -1,
/* 528*/ 73, // AllReduce MinMax i64 COLLNET_DIRECT SIMPLE
/* 529*/ -1,
/* 530*/ -1,
/* 531*/ 72, // AllReduce MinMax i64 COLLNET_CHAIN SIMPLE
/* 532*/ -1,
/* 533*/ -1,
/* 534*/ 60, // AllReduce MinMax i64 NVLS SIMPLE
/* 535*/ -1,
/* 536*/ -1,
/* 537*/ 61, // AllReduce MinMax i64 NVLS_TREE SIMPLE
/* 538*/ 79, // AllReduce MinMax u64 TREE LL
/* 539*/ 80, // AllReduce MinMax u64 TREE LL128
/* 540*/ 81, // AllReduce MinMax u64 TREE SIMPLE
/* 541*/ 76, // AllReduce MinMax u64 RING LL
/* 542*/ 77, // AllReduce MinMax u64 RING LL128
/* 543*/ 78, // AllReduce MinMax u64 RING SIMPLE
/* 544*/ -1,
/* 545*/ -1,
/* 546*/ 73, // AllReduce MinMax u64 COLLNET_DIRECT SIMPLE
/* 547*/ -1,
/* 548*/ -1,
/* 549*/ 72, // AllReduce MinMax u64 COLLNET_CHAIN SIMPLE
/* 550*/ -1,
/* 551*/ -1,
/* 552*/ 74, // AllReduce MinMax u64 NVLS SIMPLE
/* 553*/ -1,
/* 554*/ -1,
/* 555*/ 75, // AllReduce MinMax u64 NVLS_TREE SIMPLE
/* 556*/ 23, // AllReduce MinMax f16 TREE LL
/* 557*/ 24, // AllReduce MinMax f16 TREE LL128
/* 558*/ 25, // AllReduce MinMax f16 TREE SIMPLE
/* 559*/ 20, // AllReduce MinMax f16 RING LL
/* 560*/ 21, // AllReduce MinMax f16 RING LL128
/* 561*/ 22, // AllReduce MinMax f16 RING SIMPLE
/* 562*/ -1,
/* 563*/ -1,
/* 564*/ 17, // AllReduce MinMax f16 COLLNET_DIRECT SIMPLE
/* 565*/ -1,
/* 566*/ -1,
/* 567*/ 16, // AllReduce MinMax f16 COLLNET_CHAIN SIMPLE
/* 568*/ -1,
/* 569*/ -1,
/* 570*/ 18, // AllReduce MinMax f16 NVLS SIMPLE
/* 571*/ -1,
/* 572*/ -1,
/* 573*/ 19, // AllReduce MinMax f16 NVLS_TREE SIMPLE
/* 574*/ 31, // AllReduce MinMax f32 TREE LL
/* 575*/ 32, // AllReduce MinMax f32 TREE LL128
/* 576*/ 33, // AllReduce MinMax f32 TREE SIMPLE
/* 577*/ 28, // AllReduce MinMax f32 RING LL
/* 578*/ 29, // AllReduce MinMax f32 RING LL128
/* 579*/ 30, // AllReduce MinMax f32 RING SIMPLE
/* 580*/ -1,
/* 581*/ -1,
/* 582*/ 27, // AllReduce MinMax f32 COLLNET_DIRECT SIMPLE
/* 583*/ -1,
/* 584*/ -1,
/* 585*/ 26, // AllReduce MinMax f32 COLLNET_CHAIN SIMPLE
/* 586*/ -1,
/* 587*/ -1,
/* 588*/ -1,
/* 589*/ -1,
/* 590*/ -1,
/* 591*/ -1,
/* 592*/ 39, // AllReduce MinMax f64 TREE LL
/* 593*/ 40, // AllReduce MinMax f64 TREE LL128
/* 594*/ 41, // AllReduce MinMax f64 TREE SIMPLE
/* 595*/ 36, // AllReduce MinMax f64 RING LL
/* 596*/ 37, // AllReduce MinMax f64 RING LL128
/* 597*/ 38, // AllReduce MinMax f64 RING SIMPLE
/* 598*/ -1,
/* 599*/ -1,
/* 600*/ 35, // AllReduce MinMax f64 COLLNET_DIRECT SIMPLE
/* 601*/ -1,
/* 602*/ -1,
/* 603*/ 34, // AllReduce MinMax f64 COLLNET_CHAIN SIMPLE
/* 604*/ -1,
/* 605*/ -1,
/* 606*/ -1,
/* 607*/ -1,
/* 608*/ -1,
/* 609*/ -1,
/* 610*/ 13, // AllReduce MinMax bf16 TREE LL
/* 611*/ 14, // AllReduce MinMax bf16 TREE LL128
/* 612*/ 15, // AllReduce MinMax bf16 TREE SIMPLE
/* 613*/ 10, // AllReduce MinMax bf16 RING LL
/* 614*/ 11, // AllReduce MinMax bf16 RING LL128
/* 615*/ 12, // AllReduce MinMax bf16 RING SIMPLE
/* 616*/ -1,
/* 617*/ -1,
/* 618*/ 7, // AllReduce MinMax bf16 COLLNET_DIRECT SIMPLE
/* 619*/ -1,
/* 620*/ -1,
/* 621*/ 6, // AllReduce MinMax bf16 COLLNET_CHAIN SIMPLE
/* 622*/ -1,
/* 623*/ -1,
/* 624*/ 8, // AllReduce MinMax bf16 NVLS SIMPLE
/* 625*/ -1,
/* 626*/ -1,
/* 627*/ 9, // AllReduce MinMax bf16 NVLS_TREE SIMPLE
/* 628*/ 47, // AllReduce MinMax fp8_e4m3 TREE LL
/* 629*/ 48, // AllReduce MinMax fp8_e4m3 TREE LL128
/* 630*/ 49, // AllReduce MinMax fp8_e4m3 TREE SIMPLE
/* 631*/ 44, // AllReduce MinMax fp8_e4m3 RING LL
/* 632*/ 45, // AllReduce MinMax fp8_e4m3 RING LL128
/* 633*/ 46, // AllReduce MinMax fp8_e4m3 RING SIMPLE
/* 634*/ -1,
/* 635*/ -1,
/* 636*/ 43, // AllReduce MinMax fp8_e4m3 COLLNET_DIRECT SIMPLE
/* 637*/ -1,
/* 638*/ -1,
/* 639*/ 42, // AllReduce MinMax fp8_e4m3 COLLNET_CHAIN SIMPLE
/* 640*/ -1,
/* 641*/ -1,
/* 642*/ -1,
/* 643*/ -1,
/* 644*/ -1,
/* 645*/ -1,
/* 646*/ 55, // AllReduce MinMax fp8_e5m2 TREE LL
/* 647*/ 56, // AllReduce MinMax fp8_e5m2 TREE LL128
/* 648*/ 57, // AllReduce MinMax fp8_e5m2 TREE SIMPLE
/* 649*/ 52, // AllReduce MinMax fp8_e5m2 RING LL
/* 650*/ 53, // AllReduce MinMax fp8_e5m2 RING LL128
/* 651*/ 54, // AllReduce MinMax fp8_e5m2 RING SIMPLE
/* 652*/ -1,
/* 653*/ -1,
/* 654*/ 51, // AllReduce MinMax fp8_e5m2 COLLNET_DIRECT SIMPLE
/* 655*/ -1,
/* 656*/ -1,
/* 657*/ 50, // AllReduce MinMax fp8_e5m2 COLLNET_CHAIN SIMPLE
/* 658*/ -1,
/* 659*/ -1,
/* 660*/ -1,
/* 661*/ -1,
/* 662*/ -1,
/* 663*/ -1,
/* 664*/ 159, // AllReduce PreMulSum i8 TREE LL
/* 665*/ 160, // AllReduce PreMulSum i8 TREE LL128
/* 666*/ 161, // AllReduce PreMulSum i8 TREE SIMPLE
/* 667*/ 156, // AllReduce PreMulSum i8 RING LL
/* 668*/ 157, // AllReduce PreMulSum i8 RING LL128
/* 669*/ 158, // AllReduce PreMulSum i8 RING SIMPLE
/* 670*/ -1,
/* 671*/ -1,
/* 672*/ 155, // AllReduce PreMulSum i8 COLLNET_DIRECT SIMPLE
/* 673*/ -1,
/* 674*/ -1,
/* 675*/ 154, // AllReduce PreMulSum i8 COLLNET_CHAIN SIMPLE
/* 676*/ -1,
/* 677*/ -1,
/* 678*/ -1,
/* 679*/ -1,
/* 680*/ -1,
/* 681*/ -1,
/* 682*/ 159, // AllReduce PreMulSum u8 TREE LL
/* 683*/ 160, // AllReduce PreMulSum u8 TREE LL128
/* 684*/ 161, // AllReduce PreMulSum u8 TREE SIMPLE
/* 685*/ 156, // AllReduce PreMulSum u8 RING LL
/* 686*/ 157, // AllReduce PreMulSum u8 RING LL128
/* 687*/ 158, // AllReduce PreMulSum u8 RING SIMPLE
/* 688*/ -1,
/* 689*/ -1,
/* 690*/ 155, // AllReduce PreMulSum u8 COLLNET_DIRECT SIMPLE
/* 691*/ -1,
/* 692*/ -1,
/* 693*/ 154, // AllReduce PreMulSum u8 COLLNET_CHAIN SIMPLE
/* 694*/ -1,
/* 695*/ -1,
/* 696*/ -1,
/* 697*/ -1,
/* 698*/ -1,
/* 699*/ -1,
/* 700*/ 143, // AllReduce PreMulSum i32 TREE LL
/* 701*/ 144, // AllReduce PreMulSum i32 TREE LL128
/* 702*/ 145, // AllReduce PreMulSum i32 TREE SIMPLE
/* 703*/ 140, // AllReduce PreMulSum i32 RING LL
/* 704*/ 141, // AllReduce PreMulSum i32 RING LL128
/* 705*/ 142, // AllReduce PreMulSum i32 RING SIMPLE
/* 706*/ -1,
/* 707*/ -1,
/* 708*/ 139, // AllReduce PreMulSum i32 COLLNET_DIRECT SIMPLE
/* 709*/ -1,
/* 710*/ -1,
/* 711*/ 138, // AllReduce PreMulSum i32 COLLNET_CHAIN SIMPLE
/* 712*/ -1,
/* 713*/ -1,
/* 714*/ -1,
/* 715*/ -1,
/* 716*/ -1,
/* 717*/ -1,
/* 718*/ 143, // AllReduce PreMulSum u32 TREE LL
/* 719*/ 144, // AllReduce PreMulSum u32 TREE LL128
/* 720*/ 145, // AllReduce PreMulSum u32 TREE SIMPLE
/* 721*/ 140, // AllReduce PreMulSum u32 RING LL
/* 722*/ 141, // AllReduce PreMulSum u32 RING LL128
/* 723*/ 142, // AllReduce PreMulSum u32 RING SIMPLE
/* 724*/ -1,
/* 725*/ -1,
/* 726*/ 139, // AllReduce PreMulSum u32 COLLNET_DIRECT SIMPLE
/* 727*/ -1,
/* 728*/ -1,
/* 729*/ 138, // AllReduce PreMulSum u32 COLLNET_CHAIN SIMPLE
/* 730*/ -1,
/* 731*/ -1,
/* 732*/ -1,
/* 733*/ -1,
/* 734*/ -1,
/* 735*/ -1,
/* 736*/ 151, // AllReduce PreMulSum i64 TREE LL
/* 737*/ 152, // AllReduce PreMulSum i64 TREE LL128
/* 738*/ 153, // AllReduce PreMulSum i64 TREE SIMPLE
/* 739*/ 148, // AllReduce PreMulSum i64 RING LL
/* 740*/ 149, // AllReduce PreMulSum i64 RING LL128
/* 741*/ 150, // AllReduce PreMulSum i64 RING SIMPLE
/* 742*/ -1,
/* 743*/ -1,
/* 744*/ 147, // AllReduce PreMulSum i64 COLLNET_DIRECT SIMPLE
/* 745*/ -1,
/* 746*/ -1,
/* 747*/ 146, // AllReduce PreMulSum i64 COLLNET_CHAIN SIMPLE
/* 748*/ -1,
/* 749*/ -1,
/* 750*/ -1,
/* 751*/ -1,
/* 752*/ -1,
/* 753*/ -1,
/* 754*/ 151, // AllReduce PreMulSum u64 TREE LL
/* 755*/ 152, // AllReduce PreMulSum u64 TREE LL128
/* 756*/ 153, // AllReduce PreMulSum u64 TREE SIMPLE
/* 757*/ 148, // AllReduce PreMulSum u64 RING LL
/* 758*/ 149, // AllReduce PreMulSum u64 RING LL128
/* 759*/ 150, // AllReduce PreMulSum u64 RING SIMPLE
/* 760*/ -1,
/* 761*/ -1,
/* 762*/ 147, // AllReduce PreMulSum u64 COLLNET_DIRECT SIMPLE
/* 763*/ -1,
/* 764*/ -1,
/* 765*/ 146, // AllReduce PreMulSum u64 COLLNET_CHAIN SIMPLE
/* 766*/ -1,
/* 767*/ -1,
/* 768*/ -1,
/* 769*/ -1,
/* 770*/ -1,
/* 771*/ -1,
/* 772*/ 103, // AllReduce PreMulSum f16 TREE LL
/* 773*/ 104, // AllReduce PreMulSum f16 TREE LL128
/* 774*/ 105, // AllReduce PreMulSum f16 TREE SIMPLE
/* 775*/ 100, // AllReduce PreMulSum f16 RING LL
/* 776*/ 101, // AllReduce PreMulSum f16 RING LL128
/* 777*/ 102, // AllReduce PreMulSum f16 RING SIMPLE
/* 778*/ -1,
/* 779*/ -1,
/* 780*/ 99, // AllReduce PreMulSum f16 COLLNET_DIRECT SIMPLE
/* 781*/ -1,
/* 782*/ -1,
/* 783*/ 98, // AllReduce PreMulSum f16 COLLNET_CHAIN SIMPLE
/* 784*/ -1,
/* 785*/ -1,
/* 786*/ -1,
/* 787*/ -1,
/* 788*/ -1,
/* 789*/ -1,
/* 790*/ 111, // AllReduce PreMulSum f32 TREE LL
/* 791*/ 112, // AllReduce PreMulSum f32 TREE LL128
/* 792*/ 113, // AllReduce PreMulSum f32 TREE SIMPLE
/* 793*/ 108, // AllReduce PreMulSum f32 RING LL
/* 794*/ 109, // AllReduce PreMulSum f32 RING LL128
/* 795*/ 110, // AllReduce PreMulSum f32 RING SIMPLE
/* 796*/ -1,
/* 797*/ -1,
/* 798*/ 107, // AllReduce PreMulSum f32 COLLNET_DIRECT SIMPLE
/* 799*/ -1,
/* 800*/ -1,
/* 801*/ 106, // AllReduce PreMulSum f32 COLLNET_CHAIN SIMPLE
/* 802*/ -1,
/* 803*/ -1,
/* 804*/ -1,
/* 805*/ -1,
/* 806*/ -1,
/* 807*/ -1,
/* 808*/ 119, // AllReduce PreMulSum f64 TREE LL
/* 809*/ 120, // AllReduce PreMulSum f64 TREE LL128
/* 810*/ 121, // AllReduce PreMulSum f64 TREE SIMPLE
/* 811*/ 116, // AllReduce PreMulSum f64 RING LL
/* 812*/ 117, // AllReduce PreMulSum f64 RING LL128
/* 813*/ 118, // AllReduce PreMulSum f64 RING SIMPLE
/* 814*/ -1,
/* 815*/ -1,
/* 816*/ 115, // AllReduce PreMulSum f64 COLLNET_DIRECT SIMPLE
/* 817*/ -1,
/* 818*/ -1,
/* 819*/ 114, // AllReduce PreMulSum f64 COLLNET_CHAIN SIMPLE
/* 820*/ -1,
/* 821*/ -1,
/* 822*/ -1,
/* 823*/ -1,
/* 824*/ -1,
/* 825*/ -1,
/* 826*/ 95, // AllReduce PreMulSum bf16 TREE LL
/* 827*/ 96, // AllReduce PreMulSum bf16 TREE LL128
/* 828*/ 97, // AllReduce PreMulSum bf16 TREE SIMPLE
/* 829*/ 92, // AllReduce PreMulSum bf16 RING LL
/* 830*/ 93, // AllReduce PreMulSum bf16 RING LL128
/* 831*/ 94, // AllReduce PreMulSum bf16 RING SIMPLE
/* 832*/ -1,
/* 833*/ -1,
/* 834*/ 91, // AllReduce PreMulSum bf16 COLLNET_DIRECT SIMPLE
/* 835*/ -1,
/* 836*/ -1,
/* 837*/ 90, // AllReduce PreMulSum bf16 COLLNET_CHAIN SIMPLE
/* 838*/ -1,
/* 839*/ -1,
/* 840*/ -1,
/* 841*/ -1,
/* 842*/ -1,
/* 843*/ -1,
/* 844*/ 127, // AllReduce PreMulSum fp8_e4m3 TREE LL
/* 845*/ 128, // AllReduce PreMulSum fp8_e4m3 TREE LL128
/* 846*/ 129, // AllReduce PreMulSum fp8_e4m3 TREE SIMPLE
/* 847*/ 124, // AllReduce PreMulSum fp8_e4m3 RING LL
/* 848*/ 125, // AllReduce PreMulSum fp8_e4m3 RING LL128
/* 849*/ 126, // AllReduce PreMulSum fp8_e4m3 RING SIMPLE
/* 850*/ -1,
/* 851*/ -1,
/* 852*/ 123, // AllReduce PreMulSum fp8_e4m3 COLLNET_DIRECT SIMPLE
/* 853*/ -1,
/* 854*/ -1,
/* 855*/ 122, // AllReduce PreMulSum fp8_e4m3 COLLNET_CHAIN SIMPLE
/* 856*/ -1,
/* 857*/ -1,
/* 858*/ -1,
/* 859*/ -1,
/* 860*/ -1,
/* 861*/ -1,
/* 862*/ 135, // AllReduce PreMulSum fp8_e5m2 TREE LL
/* 863*/ 136, // AllReduce PreMulSum fp8_e5m2 TREE LL128
/* 864*/ 137, // AllReduce PreMulSum fp8_e5m2 TREE SIMPLE
/* 865*/ 132, // AllReduce PreMulSum fp8_e5m2 RING LL
/* 866*/ 133, // AllReduce PreMulSum fp8_e5m2 RING LL128
/* 867*/ 134, // AllReduce PreMulSum fp8_e5m2 RING SIMPLE
/* 868*/ -1,
/* 869*/ -1,
/* 870*/ 131, // AllReduce PreMulSum fp8_e5m2 COLLNET_DIRECT SIMPLE
/* 871*/ -1,
/* 872*/ -1,
/* 873*/ 130, // AllReduce PreMulSum fp8_e5m2 COLLNET_CHAIN SIMPLE
/* 874*/ -1,
/* 875*/ -1,
/* 876*/ -1,
/* 877*/ -1,
/* 878*/ -1,
/* 879*/ -1,
/* 880*/ 339, // AllReduce SumPostDiv i8 TREE LL
/* 881*/ 340, // AllReduce SumPostDiv i8 TREE LL128
/* 882*/ 341, // AllReduce SumPostDiv i8 TREE SIMPLE
/* 883*/ 336, // AllReduce SumPostDiv i8 RING LL
/* 884*/ 337, // AllReduce SumPostDiv i8 RING LL128
/* 885*/ 338, // AllReduce SumPostDiv i8 RING SIMPLE
/* 886*/ -1,
/* 887*/ -1,
/* 888*/ 335, // AllReduce SumPostDiv i8 COLLNET_DIRECT SIMPLE
/* 889*/ -1,
/* 890*/ -1,
/* 891*/ 334, // AllReduce SumPostDiv i8 COLLNET_CHAIN SIMPLE
/* 892*/ -1,
/* 893*/ -1,
/* 894*/ -1,
/* 895*/ -1,
/* 896*/ -1,
/* 897*/ -1,
/* 898*/ 363, // AllReduce SumPostDiv u8 TREE LL
/* 899*/ 364, // AllReduce SumPostDiv u8 TREE LL128
/* 900*/ 365, // AllReduce SumPostDiv u8 TREE SIMPLE
/* 901*/ 360, // AllReduce SumPostDiv u8 RING LL
/* 902*/ 361, // AllReduce SumPostDiv u8 RING LL128
/* 903*/ 362, // AllReduce SumPostDiv u8 RING SIMPLE
/* 904*/ -1,
/* 905*/ -1,
/* 906*/ 359, // AllReduce SumPostDiv u8 COLLNET_DIRECT SIMPLE
/* 907*/ -1,
/* 908*/ -1,
/* 909*/ 358, // AllReduce SumPostDiv u8 COLLNET_CHAIN SIMPLE
/* 910*/ -1,
/* 911*/ -1,
/* 912*/ -1,
/* 913*/ -1,
/* 914*/ -1,
/* 915*/ -1,
/* 916*/ 323, // AllReduce SumPostDiv i32 TREE LL
/* 917*/ 324, // AllReduce SumPostDiv i32 TREE LL128
/* 918*/ 325, // AllReduce SumPostDiv i32 TREE SIMPLE
/* 919*/ 320, // AllReduce SumPostDiv i32 RING LL
/* 920*/ 321, // AllReduce SumPostDiv i32 RING LL128
/* 921*/ 322, // AllReduce SumPostDiv i32 RING SIMPLE
/* 922*/ -1,
/* 923*/ -1,
/* 924*/ 319, // AllReduce SumPostDiv i32 COLLNET_DIRECT SIMPLE
/* 925*/ -1,
/* 926*/ -1,
/* 927*/ 318, // AllReduce SumPostDiv i32 COLLNET_CHAIN SIMPLE
/* 928*/ -1,
/* 929*/ -1,
/* 930*/ -1,
/* 931*/ -1,
/* 932*/ -1,
/* 933*/ -1,
/* 934*/ 347, // AllReduce SumPostDiv u32 TREE LL
/* 935*/ 348, // AllReduce SumPostDiv u32 TREE LL128
/* 936*/ 349, // AllReduce SumPostDiv u32 TREE SIMPLE
/* 937*/ 344, // AllReduce SumPostDiv u32 RING LL
/* 938*/ 345, // AllReduce SumPostDiv u32 RING LL128
/* 939*/ 346, // AllReduce SumPostDiv u32 RING SIMPLE
/* 940*/ -1,
/* 941*/ -1,
/* 942*/ 343, // AllReduce SumPostDiv u32 COLLNET_DIRECT SIMPLE
/* 943*/ -1,
/* 944*/ -1,
/* 945*/ 342, // AllReduce SumPostDiv u32 COLLNET_CHAIN SIMPLE
/* 946*/ -1,
/* 947*/ -1,
/* 948*/ -1,
/* 949*/ -1,
/* 950*/ -1,
/* 951*/ -1,
/* 952*/ 331, // AllReduce SumPostDiv i64 TREE LL
/* 953*/ 332, // AllReduce SumPostDiv i64 TREE LL128
/* 954*/ 333, // AllReduce SumPostDiv i64 TREE SIMPLE
/* 955*/ 328, // AllReduce SumPostDiv i64 RING LL
/* 956*/ 329, // AllReduce SumPostDiv i64 RING LL128
/* 957*/ 330, // AllReduce SumPostDiv i64 RING SIMPLE
/* 958*/ -1,
/* 959*/ -1,
/* 960*/ 327, // AllReduce SumPostDiv i64 COLLNET_DIRECT SIMPLE
/* 961*/ -1,
/* 962*/ -1,
/* 963*/ 326, // AllReduce SumPostDiv i64 COLLNET_CHAIN SIMPLE
/* 964*/ -1,
/* 965*/ -1,
/* 966*/ -1,
/* 967*/ -1,
/* 968*/ -1,
/* 969*/ -1,
/* 970*/ 355, // AllReduce SumPostDiv u64 TREE LL
/* 971*/ 356, // AllReduce SumPostDiv u64 TREE LL128
/* 972*/ 357, // AllReduce SumPostDiv u64 TREE SIMPLE
/* 973*/ 352, // AllReduce SumPostDiv u64 RING LL
/* 974*/ 353, // AllReduce SumPostDiv u64 RING LL128
/* 975*/ 354, // AllReduce SumPostDiv u64 RING SIMPLE
/* 976*/ -1,
/* 977*/ -1,
/* 978*/ 351, // AllReduce SumPostDiv u64 COLLNET_DIRECT SIMPLE
/* 979*/ -1,
/* 980*/ -1,
/* 981*/ 350, // AllReduce SumPostDiv u64 COLLNET_CHAIN SIMPLE
/* 982*/ -1,
/* 983*/ -1,
/* 984*/ -1,
/* 985*/ -1,
/* 986*/ -1,
/* 987*/ -1,
/* 988*/ -1,
/* 989*/ -1,
/* 990*/ -1,
/* 991*/ -1,
/* 992*/ -1,
/* 993*/ -1,
/* 994*/ -1,
/* 995*/ -1,
/* 996*/ -1,
/* 997*/ -1,
/* 998*/ -1,
/* 999*/ -1,
/*1000*/ -1,
/*1001*/ -1,
/*1002*/ -1,
/*1003*/ -1,
/*1004*/ -1,
/*1005*/ -1,
/*1006*/ -1,
/*1007*/ -1,
/*1008*/ -1,
/*1009*/ -1,
/*1010*/ -1,
/*1011*/ -1,
/*1012*/ -1,
/*1013*/ -1,
/*1014*/ -1,
/*1015*/ -1,
/*1016*/ -1,
/*1017*/ -1,
/*1018*/ -1,
/*1019*/ -1,
/*1020*/ -1,
/*1021*/ -1,
/*1022*/ -1,
/*1023*/ -1,
/*1024*/ -1,
/*1025*/ -1,
/*1026*/ -1,
/*1027*/ -1,
/*1028*/ -1,
/*1029*/ -1,
/*1030*/ -1,
/*1031*/ -1,
/*1032*/ -1,
/*1033*/ -1,
/*1034*/ -1,
/*1035*/ -1,
/*1036*/ -1,
/*1037*/ -1,
/*1038*/ -1,
/*1039*/ -1,
/*1040*/ -1,
/*1041*/ -1,
/*1042*/ -1,
/*1043*/ -1,
/*1044*/ -1,
/*1045*/ -1,
/*1046*/ -1,
/*1047*/ -1,
/*1048*/ -1,
/*1049*/ -1,
/*1050*/ -1,
/*1051*/ -1,
/*1052*/ -1,
/*1053*/ -1,
/*1054*/ -1,
/*1055*/ -1,
/*1056*/ -1,
/*1057*/ -1,
/*1058*/ -1,
/*1059*/ -1,
/*1060*/ -1,
/*1061*/ -1,
/*1062*/ -1,
/*1063*/ -1,
/*1064*/ -1,
/*1065*/ -1,
/*1066*/ -1,
/*1067*/ -1,
/*1068*/ -1,
/*1069*/ -1,
/*1070*/ -1,
/*1071*/ -1,
/*1072*/ -1,
/*1073*/ -1,
/*1074*/ -1,
/*1075*/ -1,
/*1076*/ -1,
/*1077*/ -1,
/*1078*/ -1,
/*1079*/ -1,
/*1080*/ -1,
/*1081*/ -1,
/*1082*/ -1,
/*1083*/ -1,
/*1084*/ -1,
/*1085*/ -1,
/*1086*/ -1,
/*1087*/ -1,
/*1088*/ -1,
/*1089*/ -1,
/*1090*/ -1,
/*1091*/ -1,
/*1092*/ -1,
/*1093*/ -1,
/*1094*/ -1,
/*1095*/ -1,
/*1096*/ 474, // Reduce Sum i8 RING LL
/*1097*/ 475, // Reduce Sum i8 RING LL128
/*1098*/ 476, // Reduce Sum i8 RING SIMPLE
/*1099*/ 474, // Reduce Sum u8 RING LL
/*1100*/ 475, // Reduce Sum u8 RING LL128
/*1101*/ 476, // Reduce Sum u8 RING SIMPLE
/*1102*/ 468, // Reduce Sum i32 RING LL
/*1103*/ 469, // Reduce Sum i32 RING LL128
/*1104*/ 470, // Reduce Sum i32 RING SIMPLE
/*1105*/ 468, // Reduce Sum u32 RING LL
/*1106*/ 469, // Reduce Sum u32 RING LL128
/*1107*/ 470, // Reduce Sum u32 RING SIMPLE
/*1108*/ 471, // Reduce Sum i64 RING LL
/*1109*/ 472, // Reduce Sum i64 RING LL128
/*1110*/ 473, // Reduce Sum i64 RING SIMPLE
/*1111*/ 471, // Reduce Sum u64 RING LL
/*1112*/ 472, // Reduce Sum u64 RING LL128
/*1113*/ 473, // Reduce Sum u64 RING SIMPLE
/*1114*/ 453, // Reduce Sum f16 RING LL
/*1115*/ 454, // Reduce Sum f16 RING LL128
/*1116*/ 455, // Reduce Sum f16 RING SIMPLE
/*1117*/ 456, // Reduce Sum f32 RING LL
/*1118*/ 457, // Reduce Sum f32 RING LL128
/*1119*/ 458, // Reduce Sum f32 RING SIMPLE
/*1120*/ 459, // Reduce Sum f64 RING LL
/*1121*/ 460, // Reduce Sum f64 RING LL128
/*1122*/ 461, // Reduce Sum f64 RING SIMPLE
/*1123*/ 450, // Reduce Sum bf16 RING LL
/*1124*/ 451, // Reduce Sum bf16 RING LL128
/*1125*/ 452, // Reduce Sum bf16 RING SIMPLE
/*1126*/ 462, // Reduce Sum fp8_e4m3 RING LL
/*1127*/ 463, // Reduce Sum fp8_e4m3 RING LL128
/*1128*/ 464, // Reduce Sum fp8_e4m3 RING SIMPLE
/*1129*/ 465, // Reduce Sum fp8_e5m2 RING LL
/*1130*/ 466, // Reduce Sum fp8_e5m2 RING LL128
/*1131*/ 467, // Reduce Sum fp8_e5m2 RING SIMPLE
/*1132*/ 447, // Reduce Prod i8 RING LL
/*1133*/ 448, // Reduce Prod i8 RING LL128
/*1134*/ 449, // Reduce Prod i8 RING SIMPLE
/*1135*/ 447, // Reduce Prod u8 RING LL
/*1136*/ 448, // Reduce Prod u8 RING LL128
/*1137*/ 449, // Reduce Prod u8 RING SIMPLE
/*1138*/ 441, // Reduce Prod i32 RING LL
/*1139*/ 442, // Reduce Prod i32 RING LL128
/*1140*/ 443, // Reduce Prod i32 RING SIMPLE
/*1141*/ 441, // Reduce Prod u32 RING LL
/*1142*/ 442, // Reduce Prod u32 RING LL128
/*1143*/ 443, // Reduce Prod u32 RING SIMPLE
/*1144*/ 444, // Reduce Prod i64 RING LL
/*1145*/ 445, // Reduce Prod i64 RING LL128
/*1146*/ 446, // Reduce Prod i64 RING SIMPLE
/*1147*/ 444, // Reduce Prod u64 RING LL
/*1148*/ 445, // Reduce Prod u64 RING LL128
/*1149*/ 446, // Reduce Prod u64 RING SIMPLE
/*1150*/ 426, // Reduce Prod f16 RING LL
/*1151*/ 427, // Reduce Prod f16 RING LL128
/*1152*/ 428, // Reduce Prod f16 RING SIMPLE
/*1153*/ 429, // Reduce Prod f32 RING LL
/*1154*/ 430, // Reduce Prod f32 RING LL128
/*1155*/ 431, // Reduce Prod f32 RING SIMPLE
/*1156*/ 432, // Reduce Prod f64 RING LL
/*1157*/ 433, // Reduce Prod f64 RING LL128
/*1158*/ 434, // Reduce Prod f64 RING SIMPLE
/*1159*/ 423, // Reduce Prod bf16 RING LL
/*1160*/ 424, // Reduce Prod bf16 RING LL128
/*1161*/ 425, // Reduce Prod bf16 RING SIMPLE
/*1162*/ 435, // Reduce Prod fp8_e4m3 RING LL
/*1163*/ 436, // Reduce Prod fp8_e4m3 RING LL128
/*1164*/ 437, // Reduce Prod fp8_e4m3 RING SIMPLE
/*1165*/ 438, // Reduce Prod fp8_e5m2 RING LL
/*1166*/ 439, // Reduce Prod fp8_e5m2 RING LL128
/*1167*/ 440, // Reduce Prod fp8_e5m2 RING SIMPLE
/*1168*/ 393, // Reduce MinMax i8 RING LL
/*1169*/ 394, // Reduce MinMax i8 RING LL128
/*1170*/ 395, // Reduce MinMax i8 RING SIMPLE
/*1171*/ 393, // Reduce MinMax u8 RING LL
/*1172*/ 394, // Reduce MinMax u8 RING LL128
/*1173*/ 395, // Reduce MinMax u8 RING SIMPLE
/*1174*/ 387, // Reduce MinMax i32 RING LL
/*1175*/ 388, // Reduce MinMax i32 RING LL128
/*1176*/ 389, // Reduce MinMax i32 RING SIMPLE
/*1177*/ 387, // Reduce MinMax u32 RING LL
/*1178*/ 388, // Reduce MinMax u32 RING LL128
/*1179*/ 389, // Reduce MinMax u32 RING SIMPLE
/*1180*/ 390, // Reduce MinMax i64 RING LL
/*1181*/ 391, // Reduce MinMax i64 RING LL128
/*1182*/ 392, // Reduce MinMax i64 RING SIMPLE
/*1183*/ 390, // Reduce MinMax u64 RING LL
/*1184*/ 391, // Reduce MinMax u64 RING LL128
/*1185*/ 392, // Reduce MinMax u64 RING SIMPLE
/*1186*/ 372, // Reduce MinMax f16 RING LL
/*1187*/ 373, // Reduce MinMax f16 RING LL128
/*1188*/ 374, // Reduce MinMax f16 RING SIMPLE
/*1189*/ 375, // Reduce MinMax f32 RING LL
/*1190*/ 376, // Reduce MinMax f32 RING LL128
/*1191*/ 377, // Reduce MinMax f32 RING SIMPLE
/*1192*/ 378, // Reduce MinMax f64 RING LL
/*1193*/ 379, // Reduce MinMax f64 RING LL128
/*1194*/ 380, // Reduce MinMax f64 RING SIMPLE
/*1195*/ 369, // Reduce MinMax bf16 RING LL
/*1196*/ 370, // Reduce MinMax bf16 RING LL128
/*1197*/ 371, // Reduce MinMax bf16 RING SIMPLE
/*1198*/ 381, // Reduce MinMax fp8_e4m3 RING LL
/*1199*/ 382, // Reduce MinMax fp8_e4m3 RING LL128
/*1200*/ 383, // Reduce MinMax fp8_e4m3 RING SIMPLE
/*1201*/ 384, // Reduce MinMax fp8_e5m2 RING LL
/*1202*/ 385, // Reduce MinMax fp8_e5m2 RING LL128
/*1203*/ 386, // Reduce MinMax fp8_e5m2 RING SIMPLE
/*1204*/ 420, // Reduce PreMulSum i8 RING LL
/*1205*/ 421, // Reduce PreMulSum i8 RING LL128
/*1206*/ 422, // Reduce PreMulSum i8 RING SIMPLE
/*1207*/ 420, // Reduce PreMulSum u8 RING LL
/*1208*/ 421, // Reduce PreMulSum u8 RING LL128
/*1209*/ 422, // Reduce PreMulSum u8 RING SIMPLE
/*1210*/ 414, // Reduce PreMulSum i32 RING LL
/*1211*/ 415, // Reduce PreMulSum i32 RING LL128
/*1212*/ 416, // Reduce PreMulSum i32 RING SIMPLE
/*1213*/ 414, // Reduce PreMulSum u32 RING LL
/*1214*/ 415, // Reduce PreMulSum u32 RING LL128
/*1215*/ 416, // Reduce PreMulSum u32 RING SIMPLE
/*1216*/ 417, // Reduce PreMulSum i64 RING LL
/*1217*/ 418, // Reduce PreMulSum i64 RING LL128
/*1218*/ 419, // Reduce PreMulSum i64 RING SIMPLE
/*1219*/ 417, // Reduce PreMulSum u64 RING LL
/*1220*/ 418, // Reduce PreMulSum u64 RING LL128
/*1221*/ 419, // Reduce PreMulSum u64 RING SIMPLE
/*1222*/ 399, // Reduce PreMulSum f16 RING LL
/*1223*/ 400, // Reduce PreMulSum f16 RING LL128
/*1224*/ 401, // Reduce PreMulSum f16 RING SIMPLE
/*1225*/ 402, // Reduce PreMulSum f32 RING LL
/*1226*/ 403, // Reduce PreMulSum f32 RING LL128
/*1227*/ 404, // Reduce PreMulSum f32 RING SIMPLE
/*1228*/ 405, // Reduce PreMulSum f64 RING LL
/*1229*/ 406, // Reduce PreMulSum f64 RING LL128
/*1230*/ 407, // Reduce PreMulSum f64 RING SIMPLE
/*1231*/ 396, // Reduce PreMulSum bf16 RING LL
/*1232*/ 397, // Reduce PreMulSum bf16 RING LL128
/*1233*/ 398, // Reduce PreMulSum bf16 RING SIMPLE
/*1234*/ 408, // Reduce PreMulSum fp8_e4m3 RING LL
/*1235*/ 409, // Reduce PreMulSum fp8_e4m3 RING LL128
/*1236*/ 410, // Reduce PreMulSum fp8_e4m3 RING SIMPLE
/*1237*/ 411, // Reduce PreMulSum fp8_e5m2 RING LL
/*1238*/ 412, // Reduce PreMulSum fp8_e5m2 RING LL128
/*1239*/ 413, // Reduce PreMulSum fp8_e5m2 RING SIMPLE
/*1240*/ 483, // Reduce SumPostDiv i8 RING LL
/*1241*/ 484, // Reduce SumPostDiv i8 RING LL128
/*1242*/ 485, // Reduce SumPostDiv i8 RING SIMPLE
/*1243*/ 492, // Reduce SumPostDiv u8 RING LL
/*1244*/ 493, // Reduce SumPostDiv u8 RING LL128
/*1245*/ 494, // Reduce SumPostDiv u8 RING SIMPLE
/*1246*/ 477, // Reduce SumPostDiv i32 RING LL
/*1247*/ 478, // Reduce SumPostDiv i32 RING LL128
/*1248*/ 479, // Reduce SumPostDiv i32 RING SIMPLE
/*1249*/ 486, // Reduce SumPostDiv u32 RING LL
/*1250*/ 487, // Reduce SumPostDiv u32 RING LL128
/*1251*/ 488, // Reduce SumPostDiv u32 RING SIMPLE
/*1252*/ 480, // Reduce SumPostDiv i64 RING LL
/*1253*/ 481, // Reduce SumPostDiv i64 RING LL128
/*1254*/ 482, // Reduce SumPostDiv i64 RING SIMPLE
/*1255*/ 489, // Reduce SumPostDiv u64 RING LL
/*1256*/ 490, // Reduce SumPostDiv u64 RING LL128
/*1257*/ 491, // Reduce SumPostDiv u64 RING SIMPLE
/*1258*/ -1,
/*1259*/ -1,
/*1260*/ -1,
/*1261*/ -1,
/*1262*/ -1,
/*1263*/ -1,
/*1264*/ -1,
/*1265*/ -1,
/*1266*/ -1,
/*1267*/ -1,
/*1268*/ -1,
/*1269*/ -1,
/*1270*/ -1,
/*1271*/ -1,
/*1272*/ -1,
/*1273*/ -1,
/*1274*/ -1,
/*1275*/ -1,
/*1276*/ 684, // ReduceScatter Sum i8 RING LL
/*1277*/ 685, // ReduceScatter Sum i8 RING LL128
/*1278*/ 686, // ReduceScatter Sum i8 RING SIMPLE
/*1279*/ -1,
/*1280*/ -1,
/*1281*/ 682, // ReduceScatter Sum i8 COLLNET_DIRECT SIMPLE
/*1282*/ -1,
/*1283*/ -1,
/*1284*/ -1,
/*1285*/ -1,
/*1286*/ -1,
/*1287*/ 683, // ReduceScatter Sum i8 PAT SIMPLE
/*1288*/ 684, // ReduceScatter Sum u8 RING LL
/*1289*/ 685, // ReduceScatter Sum u8 RING LL128
/*1290*/ 686, // ReduceScatter Sum u8 RING SIMPLE
/*1291*/ -1,
/*1292*/ -1,
/*1293*/ 682, // ReduceScatter Sum u8 COLLNET_DIRECT SIMPLE
/*1294*/ -1,
/*1295*/ -1,
/*1296*/ -1,
/*1297*/ -1,
/*1298*/ -1,
/*1299*/ 683, // ReduceScatter Sum u8 PAT SIMPLE
/*1300*/ 673, // ReduceScatter Sum i32 RING LL
/*1301*/ 674, // ReduceScatter Sum i32 RING LL128
/*1302*/ 675, // ReduceScatter Sum i32 RING SIMPLE
/*1303*/ -1,
/*1304*/ -1,
/*1305*/ 670, // ReduceScatter Sum i32 COLLNET_DIRECT SIMPLE
/*1306*/ -1,
/*1307*/ -1,
/*1308*/ 671, // ReduceScatter Sum i32 NVLS SIMPLE
/*1309*/ -1,
/*1310*/ -1,
/*1311*/ 672, // ReduceScatter Sum i32 PAT SIMPLE
/*1312*/ 673, // ReduceScatter Sum u32 RING LL
/*1313*/ 674, // ReduceScatter Sum u32 RING LL128
/*1314*/ 675, // ReduceScatter Sum u32 RING SIMPLE
/*1315*/ -1,
/*1316*/ -1,
/*1317*/ 670, // ReduceScatter Sum u32 COLLNET_DIRECT SIMPLE
/*1318*/ -1,
/*1319*/ -1,
/*1320*/ 671, // ReduceScatter Sum u32 NVLS SIMPLE
/*1321*/ -1,
/*1322*/ -1,
/*1323*/ 672, // ReduceScatter Sum u32 PAT SIMPLE
/*1324*/ 679, // ReduceScatter Sum i64 RING LL
/*1325*/ 680, // ReduceScatter Sum i64 RING LL128
/*1326*/ 681, // ReduceScatter Sum i64 RING SIMPLE
/*1327*/ -1,
/*1328*/ -1,
/*1329*/ 676, // ReduceScatter Sum i64 COLLNET_DIRECT SIMPLE
/*1330*/ -1,
/*1331*/ -1,
/*1332*/ 677, // ReduceScatter Sum i64 NVLS SIMPLE
/*1333*/ -1,
/*1334*/ -1,
/*1335*/ 678, // ReduceScatter Sum i64 PAT SIMPLE
/*1336*/ 679, // ReduceScatter Sum u64 RING LL
/*1337*/ 680, // ReduceScatter Sum u64 RING LL128
/*1338*/ 681, // ReduceScatter Sum u64 RING SIMPLE
/*1339*/ -1,
/*1340*/ -1,
/*1341*/ 676, // ReduceScatter Sum u64 COLLNET_DIRECT SIMPLE
/*1342*/ -1,
/*1343*/ -1,
/*1344*/ 677, // ReduceScatter Sum u64 NVLS SIMPLE
/*1345*/ -1,
/*1346*/ -1,
/*1347*/ 678, // ReduceScatter Sum u64 PAT SIMPLE
/*1348*/ 645, // ReduceScatter Sum f16 RING LL
/*1349*/ 646, // ReduceScatter Sum f16 RING LL128
/*1350*/ 647, // ReduceScatter Sum f16 RING SIMPLE
/*1351*/ -1,
/*1352*/ -1,
/*1353*/ 642, // ReduceScatter Sum f16 COLLNET_DIRECT SIMPLE
/*1354*/ -1,
/*1355*/ -1,
/*1356*/ 643, // ReduceScatter Sum f16 NVLS SIMPLE
/*1357*/ -1,
/*1358*/ -1,
/*1359*/ 644, // ReduceScatter Sum f16 PAT SIMPLE
/*1360*/ 651, // ReduceScatter Sum f32 RING LL
/*1361*/ 652, // ReduceScatter Sum f32 RING LL128
/*1362*/ 653, // ReduceScatter Sum f32 RING SIMPLE
/*1363*/ -1,
/*1364*/ -1,
/*1365*/ 648, // ReduceScatter Sum f32 COLLNET_DIRECT SIMPLE
/*1366*/ -1,
/*1367*/ -1,
/*1368*/ 649, // ReduceScatter Sum f32 NVLS SIMPLE
/*1369*/ -1,
/*1370*/ -1,
/*1371*/ 650, // ReduceScatter Sum f32 PAT SIMPLE
/*1372*/ 657, // ReduceScatter Sum f64 RING LL
/*1373*/ 658, // ReduceScatter Sum f64 RING LL128
/*1374*/ 659, // ReduceScatter Sum f64 RING SIMPLE
/*1375*/ -1,
/*1376*/ -1,
/*1377*/ 654, // ReduceScatter Sum f64 COLLNET_DIRECT SIMPLE
/*1378*/ -1,
/*1379*/ -1,
/*1380*/ 655, // ReduceScatter Sum f64 NVLS SIMPLE
/*1381*/ -1,
/*1382*/ -1,
/*1383*/ 656, // ReduceScatter Sum f64 PAT SIMPLE
/*1384*/ 639, // ReduceScatter Sum bf16 RING LL
/*1385*/ 640, // ReduceScatter Sum bf16 RING LL128
/*1386*/ 641, // ReduceScatter Sum bf16 RING SIMPLE
/*1387*/ -1,
/*1388*/ -1,
/*1389*/ 636, // ReduceScatter Sum bf16 COLLNET_DIRECT SIMPLE
/*1390*/ -1,
/*1391*/ -1,
/*1392*/ 637, // ReduceScatter Sum bf16 NVLS SIMPLE
/*1393*/ -1,
/*1394*/ -1,
/*1395*/ 638, // ReduceScatter Sum bf16 PAT SIMPLE
/*1396*/ 662, // ReduceScatter Sum fp8_e4m3 RING LL
/*1397*/ 663, // ReduceScatter Sum fp8_e4m3 RING LL128
/*1398*/ 664, // ReduceScatter Sum fp8_e4m3 RING SIMPLE
/*1399*/ -1,
/*1400*/ -1,
/*1401*/ 660, // ReduceScatter Sum fp8_e4m3 COLLNET_DIRECT SIMPLE
/*1402*/ -1,
/*1403*/ -1,
/*1404*/ -1,
/*1405*/ -1,
/*1406*/ -1,
/*1407*/ 661, // ReduceScatter Sum fp8_e4m3 PAT SIMPLE
/*1408*/ 667, // ReduceScatter Sum fp8_e5m2 RING LL
/*1409*/ 668, // ReduceScatter Sum fp8_e5m2 RING LL128
/*1410*/ 669, // ReduceScatter Sum fp8_e5m2 RING SIMPLE
/*1411*/ -1,
/*1412*/ -1,
/*1413*/ 665, // ReduceScatter Sum fp8_e5m2 COLLNET_DIRECT SIMPLE
/*1414*/ -1,
/*1415*/ -1,
/*1416*/ -1,
/*1417*/ -1,
/*1418*/ -1,
/*1419*/ 666, // ReduceScatter Sum fp8_e5m2 PAT SIMPLE
/*1420*/ 633, // ReduceScatter Prod i8 RING LL
/*1421*/ 634, // ReduceScatter Prod i8 RING LL128
/*1422*/ 635, // ReduceScatter Prod i8 RING SIMPLE
/*1423*/ -1,
/*1424*/ -1,
/*1425*/ 631, // ReduceScatter Prod i8 COLLNET_DIRECT SIMPLE
/*1426*/ -1,
/*1427*/ -1,
/*1428*/ -1,
/*1429*/ -1,
/*1430*/ -1,
/*1431*/ 632, // ReduceScatter Prod i8 PAT SIMPLE
/*1432*/ 633, // ReduceScatter Prod u8 RING LL
/*1433*/ 634, // ReduceScatter Prod u8 RING LL128
/*1434*/ 635, // ReduceScatter Prod u8 RING SIMPLE
/*1435*/ -1,
/*1436*/ -1,
/*1437*/ 631, // ReduceScatter Prod u8 COLLNET_DIRECT SIMPLE
/*1438*/ -1,
/*1439*/ -1,
/*1440*/ -1,
/*1441*/ -1,
/*1442*/ -1,
/*1443*/ 632, // ReduceScatter Prod u8 PAT SIMPLE
/*1444*/ 623, // ReduceScatter Prod i32 RING LL
/*1445*/ 624, // ReduceScatter Prod i32 RING LL128
/*1446*/ 625, // ReduceScatter Prod i32 RING SIMPLE
/*1447*/ -1,
/*1448*/ -1,
/*1449*/ 621, // ReduceScatter Prod i32 COLLNET_DIRECT SIMPLE
/*1450*/ -1,
/*1451*/ -1,
/*1452*/ -1,
/*1453*/ -1,
/*1454*/ -1,
/*1455*/ 622, // ReduceScatter Prod i32 PAT SIMPLE
/*1456*/ 623, // ReduceScatter Prod u32 RING LL
/*1457*/ 624, // ReduceScatter Prod u32 RING LL128
/*1458*/ 625, // ReduceScatter Prod u32 RING SIMPLE
/*1459*/ -1,
/*1460*/ -1,
/*1461*/ 621, // ReduceScatter Prod u32 COLLNET_DIRECT SIMPLE
/*1462*/ -1,
/*1463*/ -1,
/*1464*/ -1,
/*1465*/ -1,
/*1466*/ -1,
/*1467*/ 622, // ReduceScatter Prod u32 PAT SIMPLE
/*1468*/ 628, // ReduceScatter Prod i64 RING LL
/*1469*/ 629, // ReduceScatter Prod i64 RING LL128
/*1470*/ 630, // ReduceScatter Prod i64 RING SIMPLE
/*1471*/ -1,
/*1472*/ -1,
/*1473*/ 626, // ReduceScatter Prod i64 COLLNET_DIRECT SIMPLE
/*1474*/ -1,
/*1475*/ -1,
/*1476*/ -1,
/*1477*/ -1,
/*1478*/ -1,
/*1479*/ 627, // ReduceScatter Prod i64 PAT SIMPLE
/*1480*/ 628, // ReduceScatter Prod u64 RING LL
/*1481*/ 629, // ReduceScatter Prod u64 RING LL128
/*1482*/ 630, // ReduceScatter Prod u64 RING SIMPLE
/*1483*/ -1,
/*1484*/ -1,
/*1485*/ 626, // ReduceScatter Prod u64 COLLNET_DIRECT SIMPLE
/*1486*/ -1,
/*1487*/ -1,
/*1488*/ -1,
/*1489*/ -1,
/*1490*/ -1,
/*1491*/ 627, // ReduceScatter Prod u64 PAT SIMPLE
/*1492*/ 598, // ReduceScatter Prod f16 RING LL
/*1493*/ 599, // ReduceScatter Prod f16 RING LL128
/*1494*/ 600, // ReduceScatter Prod f16 RING SIMPLE
/*1495*/ -1,
/*1496*/ -1,
/*1497*/ 596, // ReduceScatter Prod f16 COLLNET_DIRECT SIMPLE
/*1498*/ -1,
/*1499*/ -1,
/*1500*/ -1,
/*1501*/ -1,
/*1502*/ -1,
/*1503*/ 597, // ReduceScatter Prod f16 PAT SIMPLE
/*1504*/ 603, // ReduceScatter Prod f32 RING LL
/*1505*/ 604, // ReduceScatter Prod f32 RING LL128
/*1506*/ 605, // ReduceScatter Prod f32 RING SIMPLE
/*1507*/ -1,
/*1508*/ -1,
/*1509*/ 601, // ReduceScatter Prod f32 COLLNET_DIRECT SIMPLE
/*1510*/ -1,
/*1511*/ -1,
/*1512*/ -1,
/*1513*/ -1,
/*1514*/ -1,
/*1515*/ 602, // ReduceScatter Prod f32 PAT SIMPLE
/*1516*/ 608, // ReduceScatter Prod f64 RING LL
/*1517*/ 609, // ReduceScatter Prod f64 RING LL128
/*1518*/ 610, // ReduceScatter Prod f64 RING SIMPLE
/*1519*/ -1,
/*1520*/ -1,
/*1521*/ 606, // ReduceScatter Prod f64 COLLNET_DIRECT SIMPLE
/*1522*/ -1,
/*1523*/ -1,
/*1524*/ -1,
/*1525*/ -1,
/*1526*/ -1,
/*1527*/ 607, // ReduceScatter Prod f64 PAT SIMPLE
/*1528*/ 593, // ReduceScatter Prod bf16 RING LL
/*1529*/ 594, // ReduceScatter Prod bf16 RING LL128
/*1530*/ 595, // ReduceScatter Prod bf16 RING SIMPLE
/*1531*/ -1,
/*1532*/ -1,
/*1533*/ 591, // ReduceScatter Prod bf16 COLLNET_DIRECT SIMPLE
/*1534*/ -1,
/*1535*/ -1,
/*1536*/ -1,
/*1537*/ -1,
/*1538*/ -1,
/*1539*/ 592, // ReduceScatter Prod bf16 PAT SIMPLE
/*1540*/ 613, // ReduceScatter Prod fp8_e4m3 RING LL
/*1541*/ 614, // ReduceScatter Prod fp8_e4m3 RING LL128
/*1542*/ 615, // ReduceScatter Prod fp8_e4m3 RING SIMPLE
/*1543*/ -1,
/*1544*/ -1,
/*1545*/ 611, // ReduceScatter Prod fp8_e4m3 COLLNET_DIRECT SIMPLE
/*1546*/ -1,
/*1547*/ -1,
/*1548*/ -1,
/*1549*/ -1,
/*1550*/ -1,
/*1551*/ 612, // ReduceScatter Prod fp8_e4m3 PAT SIMPLE
/*1552*/ 618, // ReduceScatter Prod fp8_e5m2 RING LL
/*1553*/ 619, // ReduceScatter Prod fp8_e5m2 RING LL128
/*1554*/ 620, // ReduceScatter Prod fp8_e5m2 RING SIMPLE
/*1555*/ -1,
/*1556*/ -1,
/*1557*/ 616, // ReduceScatter Prod fp8_e5m2 COLLNET_DIRECT SIMPLE
/*1558*/ -1,
/*1559*/ -1,
/*1560*/ -1,
/*1561*/ -1,
/*1562*/ -1,
/*1563*/ 617, // ReduceScatter Prod fp8_e5m2 PAT SIMPLE
/*1564*/ 543, // ReduceScatter MinMax i8 RING LL
/*1565*/ 544, // ReduceScatter MinMax i8 RING LL128
/*1566*/ 545, // ReduceScatter MinMax i8 RING SIMPLE
/*1567*/ -1,
/*1568*/ -1,
/*1569*/ 541, // ReduceScatter MinMax i8 COLLNET_DIRECT SIMPLE
/*1570*/ -1,
/*1571*/ -1,
/*1572*/ -1,
/*1573*/ -1,
/*1574*/ -1,
/*1575*/ 542, // ReduceScatter MinMax i8 PAT SIMPLE
/*1576*/ 543, // ReduceScatter MinMax u8 RING LL
/*1577*/ 544, // ReduceScatter MinMax u8 RING LL128
/*1578*/ 545, // ReduceScatter MinMax u8 RING SIMPLE
/*1579*/ -1,
/*1580*/ -1,
/*1581*/ 541, // ReduceScatter MinMax u8 COLLNET_DIRECT SIMPLE
/*1582*/ -1,
/*1583*/ -1,
/*1584*/ -1,
/*1585*/ -1,
/*1586*/ -1,
/*1587*/ 542, // ReduceScatter MinMax u8 PAT SIMPLE
/*1588*/ 532, // ReduceScatter MinMax i32 RING LL
/*1589*/ 533, // ReduceScatter MinMax i32 RING LL128
/*1590*/ 534, // ReduceScatter MinMax i32 RING SIMPLE
/*1591*/ -1,
/*1592*/ -1,
/*1593*/ 529, // ReduceScatter MinMax i32 COLLNET_DIRECT SIMPLE
/*1594*/ -1,
/*1595*/ -1,
/*1596*/ 527, // ReduceScatter MinMax i32 NVLS SIMPLE
/*1597*/ -1,
/*1598*/ -1,
/*1599*/ 531, // ReduceScatter MinMax i32 PAT SIMPLE
/*1600*/ 532, // ReduceScatter MinMax u32 RING LL
/*1601*/ 533, // ReduceScatter MinMax u32 RING LL128
/*1602*/ 534, // ReduceScatter MinMax u32 RING SIMPLE
/*1603*/ -1,
/*1604*/ -1,
/*1605*/ 529, // ReduceScatter MinMax u32 COLLNET_DIRECT SIMPLE
/*1606*/ -1,
/*1607*/ -1,
/*1608*/ 530, // ReduceScatter MinMax u32 NVLS SIMPLE
/*1609*/ -1,
/*1610*/ -1,
/*1611*/ 531, // ReduceScatter MinMax u32 PAT SIMPLE
/*1612*/ 538, // ReduceScatter MinMax i64 RING LL
/*1613*/ 539, // ReduceScatter MinMax i64 RING LL128
/*1614*/ 540, // ReduceScatter MinMax i64 RING SIMPLE
/*1615*/ -1,
/*1616*/ -1,
/*1617*/ 535, // ReduceScatter MinMax i64 COLLNET_DIRECT SIMPLE
/*1618*/ -1,
/*1619*/ -1,
/*1620*/ 528, // ReduceScatter MinMax i64 NVLS SIMPLE
/*1621*/ -1,
/*1622*/ -1,
/*1623*/ 537, // ReduceScatter MinMax i64 PAT SIMPLE
/*1624*/ 538, // ReduceScatter MinMax u64 RING LL
/*1625*/ 539, // ReduceScatter MinMax u64 RING LL128
/*1626*/ 540, // ReduceScatter MinMax u64 RING SIMPLE
/*1627*/ -1,
/*1628*/ -1,
/*1629*/ 535, // ReduceScatter MinMax u64 COLLNET_DIRECT SIMPLE
/*1630*/ -1,
/*1631*/ -1,
/*1632*/ 536, // ReduceScatter MinMax u64 NVLS SIMPLE
/*1633*/ -1,
/*1634*/ -1,
/*1635*/ 537, // ReduceScatter MinMax u64 PAT SIMPLE
/*1636*/ 504, // ReduceScatter MinMax f16 RING LL
/*1637*/ 505, // ReduceScatter MinMax f16 RING LL128
/*1638*/ 506, // ReduceScatter MinMax f16 RING SIMPLE
/*1639*/ -1,
/*1640*/ -1,
/*1641*/ 501, // ReduceScatter MinMax f16 COLLNET_DIRECT SIMPLE
/*1642*/ -1,
/*1643*/ -1,
/*1644*/ 502, // ReduceScatter MinMax f16 NVLS SIMPLE
/*1645*/ -1,
/*1646*/ -1,
/*1647*/ 503, // ReduceScatter MinMax f16 PAT SIMPLE
/*1648*/ 509, // ReduceScatter MinMax f32 RING LL
/*1649*/ 510, // ReduceScatter MinMax f32 RING LL128
/*1650*/ 511, // ReduceScatter MinMax f32 RING SIMPLE
/*1651*/ -1,
/*1652*/ -1,
/*1653*/ 507, // ReduceScatter MinMax f32 COLLNET_DIRECT SIMPLE
/*1654*/ -1,
/*1655*/ -1,
/*1656*/ -1,
/*1657*/ -1,
/*1658*/ -1,
/*1659*/ 508, // ReduceScatter MinMax f32 PAT SIMPLE
/*1660*/ 514, // ReduceScatter MinMax f64 RING LL
/*1661*/ 515, // ReduceScatter MinMax f64 RING LL128
/*1662*/ 516, // ReduceScatter MinMax f64 RING SIMPLE
/*1663*/ -1,
/*1664*/ -1,
/*1665*/ 512, // ReduceScatter MinMax f64 COLLNET_DIRECT SIMPLE
/*1666*/ -1,
/*1667*/ -1,
/*1668*/ -1,
/*1669*/ -1,
/*1670*/ -1,
/*1671*/ 513, // ReduceScatter MinMax f64 PAT SIMPLE
/*1672*/ 498, // ReduceScatter MinMax bf16 RING LL
/*1673*/ 499, // ReduceScatter MinMax bf16 RING LL128
/*1674*/ 500, // ReduceScatter MinMax bf16 RING SIMPLE
/*1675*/ -1,
/*1676*/ -1,
/*1677*/ 495, // ReduceScatter MinMax bf16 COLLNET_DIRECT SIMPLE
/*1678*/ -1,
/*1679*/ -1,
/*1680*/ 496, // ReduceScatter MinMax bf16 NVLS SIMPLE
/*1681*/ -1,
/*1682*/ -1,
/*1683*/ 497, // ReduceScatter MinMax bf16 PAT SIMPLE
/*1684*/ 519, // ReduceScatter MinMax fp8_e4m3 RING LL
/*1685*/ 520, // ReduceScatter MinMax fp8_e4m3 RING LL128
/*1686*/ 521, // ReduceScatter MinMax fp8_e4m3 RING SIMPLE
/*1687*/ -1,
/*1688*/ -1,
/*1689*/ 517, // ReduceScatter MinMax fp8_e4m3 COLLNET_DIRECT SIMPLE
/*1690*/ -1,
/*1691*/ -1,
/*1692*/ -1,
/*1693*/ -1,
/*1694*/ -1,
/*1695*/ 518, // ReduceScatter MinMax fp8_e4m3 PAT SIMPLE
/*1696*/ 524, // ReduceScatter MinMax fp8_e5m2 RING LL
/*1697*/ 525, // ReduceScatter MinMax fp8_e5m2 RING LL128
/*1698*/ 526, // ReduceScatter MinMax fp8_e5m2 RING SIMPLE
/*1699*/ -1,
/*1700*/ -1,
/*1701*/ 522, // ReduceScatter MinMax fp8_e5m2 COLLNET_DIRECT SIMPLE
/*1702*/ -1,
/*1703*/ -1,
/*1704*/ -1,
/*1705*/ -1,
/*1706*/ -1,
/*1707*/ 523, // ReduceScatter MinMax fp8_e5m2 PAT SIMPLE
/*1708*/ 588, // ReduceScatter PreMulSum i8 RING LL
/*1709*/ 589, // ReduceScatter PreMulSum i8 RING LL128
/*1710*/ 590, // ReduceScatter PreMulSum i8 RING SIMPLE
/*1711*/ -1,
/*1712*/ -1,
/*1713*/ 586, // ReduceScatter PreMulSum i8 COLLNET_DIRECT SIMPLE
/*1714*/ -1,
/*1715*/ -1,
/*1716*/ -1,
/*1717*/ -1,
/*1718*/ -1,
/*1719*/ 587, // ReduceScatter PreMulSum i8 PAT SIMPLE
/*1720*/ 588, // ReduceScatter PreMulSum u8 RING LL
/*1721*/ 589, // ReduceScatter PreMulSum u8 RING LL128
/*1722*/ 590, // ReduceScatter PreMulSum u8 RING SIMPLE
/*1723*/ -1,
/*1724*/ -1,
/*1725*/ 586, // ReduceScatter PreMulSum u8 COLLNET_DIRECT SIMPLE
/*1726*/ -1,
/*1727*/ -1,
/*1728*/ -1,
/*1729*/ -1,
/*1730*/ -1,
/*1731*/ 587, // ReduceScatter PreMulSum u8 PAT SIMPLE
/*1732*/ 578, // ReduceScatter PreMulSum i32 RING LL
/*1733*/ 579, // ReduceScatter PreMulSum i32 RING LL128
/*1734*/ 580, // ReduceScatter PreMulSum i32 RING SIMPLE
/*1735*/ -1,
/*1736*/ -1,
/*1737*/ 576, // ReduceScatter PreMulSum i32 COLLNET_DIRECT SIMPLE
/*1738*/ -1,
/*1739*/ -1,
/*1740*/ -1,
/*1741*/ -1,
/*1742*/ -1,
/*1743*/ 577, // ReduceScatter PreMulSum i32 PAT SIMPLE
/*1744*/ 578, // ReduceScatter PreMulSum u32 RING LL
/*1745*/ 579, // ReduceScatter PreMulSum u32 RING LL128
/*1746*/ 580, // ReduceScatter PreMulSum u32 RING SIMPLE
/*1747*/ -1,
/*1748*/ -1,
/*1749*/ 576, // ReduceScatter PreMulSum u32 COLLNET_DIRECT SIMPLE
/*1750*/ -1,
/*1751*/ -1,
/*1752*/ -1,
/*1753*/ -1,
/*1754*/ -1,
/*1755*/ 577, // ReduceScatter PreMulSum u32 PAT SIMPLE
/*1756*/ 583, // ReduceScatter PreMulSum i64 RING LL
/*1757*/ 584, // ReduceScatter PreMulSum i64 RING LL128
/*1758*/ 585, // ReduceScatter PreMulSum i64 RING SIMPLE
/*1759*/ -1,
/*1760*/ -1,
/*1761*/ 581, // ReduceScatter PreMulSum i64 COLLNET_DIRECT SIMPLE
/*1762*/ -1,
/*1763*/ -1,
/*1764*/ -1,
/*1765*/ -1,
/*1766*/ -1,
/*1767*/ 582, // ReduceScatter PreMulSum i64 PAT SIMPLE
/*1768*/ 583, // ReduceScatter PreMulSum u64 RING LL
/*1769*/ 584, // ReduceScatter PreMulSum u64 RING LL128
/*1770*/ 585, // ReduceScatter PreMulSum u64 RING SIMPLE
/*1771*/ -1,
/*1772*/ -1,
/*1773*/ 581, // ReduceScatter PreMulSum u64 COLLNET_DIRECT SIMPLE
/*1774*/ -1,
/*1775*/ -1,
/*1776*/ -1,
/*1777*/ -1,
/*1778*/ -1,
/*1779*/ 582, // ReduceScatter PreMulSum u64 PAT SIMPLE
/*1780*/ 553, // ReduceScatter PreMulSum f16 RING LL
/*1781*/ 554, // ReduceScatter PreMulSum f16 RING LL128
/*1782*/ 555, // ReduceScatter PreMulSum f16 RING SIMPLE
/*1783*/ -1,
/*1784*/ -1,
/*1785*/ 551, // ReduceScatter PreMulSum f16 COLLNET_DIRECT SIMPLE
/*1786*/ -1,
/*1787*/ -1,
/*1788*/ -1,
/*1789*/ -1,
/*1790*/ -1,
/*1791*/ 552, // ReduceScatter PreMulSum f16 PAT SIMPLE
/*1792*/ 558, // ReduceScatter PreMulSum f32 RING LL
/*1793*/ 559, // ReduceScatter PreMulSum f32 RING LL128
/*1794*/ 560, // ReduceScatter PreMulSum f32 RING SIMPLE
/*1795*/ -1,
/*1796*/ -1,
/*1797*/ 556, // ReduceScatter PreMulSum f32 COLLNET_DIRECT SIMPLE
/*1798*/ -1,
/*1799*/ -1,
/*1800*/ -1,
/*1801*/ -1,
/*1802*/ -1,
/*1803*/ 557, // ReduceScatter PreMulSum f32 PAT SIMPLE
/*1804*/ 563, // ReduceScatter PreMulSum f64 RING LL
/*1805*/ 564, // ReduceScatter PreMulSum f64 RING LL128
/*1806*/ 565, // ReduceScatter PreMulSum f64 RING SIMPLE
/*1807*/ -1,
/*1808*/ -1,
/*1809*/ 561, // ReduceScatter PreMulSum f64 COLLNET_DIRECT SIMPLE
/*1810*/ -1,
/*1811*/ -1,
/*1812*/ -1,
/*1813*/ -1,
/*1814*/ -1,
/*1815*/ 562, // ReduceScatter PreMulSum f64 PAT SIMPLE
/*1816*/ 548, // ReduceScatter PreMulSum bf16 RING LL
/*1817*/ 549, // ReduceScatter PreMulSum bf16 RING LL128
/*1818*/ 550, // ReduceScatter PreMulSum bf16 RING SIMPLE
/*1819*/ -1,
/*1820*/ -1,
/*1821*/ 546, // ReduceScatter PreMulSum bf16 COLLNET_DIRECT SIMPLE
/*1822*/ -1,
/*1823*/ -1,
/*1824*/ -1,
/*1825*/ -1,
/*1826*/ -1,
/*1827*/ 547, // ReduceScatter PreMulSum bf16 PAT SIMPLE
/*1828*/ 568, // ReduceScatter PreMulSum fp8_e4m3 RING LL
/*1829*/ 569, // ReduceScatter PreMulSum fp8_e4m3 RING LL128
/*1830*/ 570, // ReduceScatter PreMulSum fp8_e4m3 RING SIMPLE
/*1831*/ -1,
/*1832*/ -1,
/*1833*/ 566, // ReduceScatter PreMulSum fp8_e4m3 COLLNET_DIRECT SIMPLE
/*1834*/ -1,
/*1835*/ -1,
/*1836*/ -1,
/*1837*/ -1,
/*1838*/ -1,
/*1839*/ 567, // ReduceScatter PreMulSum fp8_e4m3 PAT SIMPLE
/*1840*/ 573, // ReduceScatter PreMulSum fp8_e5m2 RING LL
/*1841*/ 574, // ReduceScatter PreMulSum fp8_e5m2 RING LL128
/*1842*/ 575, // ReduceScatter PreMulSum fp8_e5m2 RING SIMPLE
/*1843*/ -1,
/*1844*/ -1,
/*1845*/ 571, // ReduceScatter PreMulSum fp8_e5m2 COLLNET_DIRECT SIMPLE
/*1846*/ -1,
/*1847*/ -1,
/*1848*/ -1,
/*1849*/ -1,
/*1850*/ -1,
/*1851*/ 572, // ReduceScatter PreMulSum fp8_e5m2 PAT SIMPLE
/*1852*/ 699, // ReduceScatter SumPostDiv i8 RING LL
/*1853*/ 700, // ReduceScatter SumPostDiv i8 RING LL128
/*1854*/ 701, // ReduceScatter SumPostDiv i8 RING SIMPLE
/*1855*/ -1,
/*1856*/ -1,
/*1857*/ 697, // ReduceScatter SumPostDiv i8 COLLNET_DIRECT SIMPLE
/*1858*/ -1,
/*1859*/ -1,
/*1860*/ -1,
/*1861*/ -1,
/*1862*/ -1,
/*1863*/ 698, // ReduceScatter SumPostDiv i8 PAT SIMPLE
/*1864*/ 714, // ReduceScatter SumPostDiv u8 RING LL
/*1865*/ 715, // ReduceScatter SumPostDiv u8 RING LL128
/*1866*/ 716, // ReduceScatter SumPostDiv u8 RING SIMPLE
/*1867*/ -1,
/*1868*/ -1,
/*1869*/ 712, // ReduceScatter SumPostDiv u8 COLLNET_DIRECT SIMPLE
/*1870*/ -1,
/*1871*/ -1,
/*1872*/ -1,
/*1873*/ -1,
/*1874*/ -1,
/*1875*/ 713, // ReduceScatter SumPostDiv u8 PAT SIMPLE
/*1876*/ 689, // ReduceScatter SumPostDiv i32 RING LL
/*1877*/ 690, // ReduceScatter SumPostDiv i32 RING LL128
/*1878*/ 691, // ReduceScatter SumPostDiv i32 RING SIMPLE
/*1879*/ -1,
/*1880*/ -1,
/*1881*/ 687, // ReduceScatter SumPostDiv i32 COLLNET_DIRECT SIMPLE
/*1882*/ -1,
/*1883*/ -1,
/*1884*/ -1,
/*1885*/ -1,
/*1886*/ -1,
/*1887*/ 688, // ReduceScatter SumPostDiv i32 PAT SIMPLE
/*1888*/ 704, // ReduceScatter SumPostDiv u32 RING LL
/*1889*/ 705, // ReduceScatter SumPostDiv u32 RING LL128
/*1890*/ 706, // ReduceScatter SumPostDiv u32 RING SIMPLE
/*1891*/ -1,
/*1892*/ -1,
/*1893*/ 702, // ReduceScatter SumPostDiv u32 COLLNET_DIRECT SIMPLE
/*1894*/ -1,
/*1895*/ -1,
/*1896*/ -1,
/*1897*/ -1,
/*1898*/ -1,
/*1899*/ 703, // ReduceScatter SumPostDiv u32 PAT SIMPLE
/*1900*/ 694, // ReduceScatter SumPostDiv i64 RING LL
/*1901*/ 695, // ReduceScatter SumPostDiv i64 RING LL128
/*1902*/ 696, // ReduceScatter SumPostDiv i64 RING SIMPLE
/*1903*/ -1,
/*1904*/ -1,
/*1905*/ 692, // ReduceScatter SumPostDiv i64 COLLNET_DIRECT SIMPLE
/*1906*/ -1,
/*1907*/ -1,
/*1908*/ -1,
/*1909*/ -1,
/*1910*/ -1,
/*1911*/ 693, // ReduceScatter SumPostDiv i64 PAT SIMPLE
/*1912*/ 709, // ReduceScatter SumPostDiv u64 RING LL
/*1913*/ 710, // ReduceScatter SumPostDiv u64 RING LL128
/*1914*/ 711, // ReduceScatter SumPostDiv u64 RING SIMPLE
/*1915*/ -1,
/*1916*/ -1,
/*1917*/ 707, // ReduceScatter SumPostDiv u64 COLLNET_DIRECT SIMPLE
/*1918*/ -1,
/*1919*/ -1,
/*1920*/ -1,
/*1921*/ -1,
/*1922*/ -1,
/*1923*/ 708, // ReduceScatter SumPostDiv u64 PAT SIMPLE
/*1924*/ -1,
/*1925*/ -1,
/*1926*/ -1,
/*1927*/ -1,
/*1928*/ -1,
/*1929*/ -1,
/*1930*/ -1,
/*1931*/ -1,
/*1932*/ -1,
/*1933*/ -1,
/*1934*/ -1,
/*1935*/ -1,
/*1936*/ -1,
/*1937*/ -1,
/*1938*/ -1,
/*1939*/ -1,
/*1940*/ -1,
/*1941*/ -1,
/*1942*/ -1,
/*1943*/ -1,
/*1944*/ -1,
/*1945*/ -1,
/*1946*/ -1,
/*1947*/ -1,
/*1948*/ -1,
/*1949*/ -1,
/*1950*/ -1,
/*1951*/ -1,
/*1952*/ -1,
/*1953*/ -1,
/*1954*/ -1,
/*1955*/ -1,
/*1956*/ -1,
/*1957*/ -1,
/*1958*/ -1,
/*1959*/ -1,
/*1960*/ -1,
/*1961*/ -1,
/*1962*/ -1,
/*1963*/ -1,
/*1964*/ -1,
/*1965*/ -1,
/*1966*/ -1,
/*1967*/ -1,
/*1968*/ -1,
/*1969*/ -1,
/*1970*/ -1,
/*1971*/ -1,
/*1972*/ -1,
/*1973*/ -1,
/*1974*/ -1,
/*1975*/ -1,
/*1976*/ -1,
/*1977*/ -1,
/*1978*/ -1,
/*1979*/ -1,
/*1980*/ -1,
/*1981*/ -1,
/*1982*/ -1,
/*1983*/ -1,
/*1984*/ -1,
/*1985*/ -1,
/*1986*/ -1,
/*1987*/ -1,
/*1988*/ -1,
/*1989*/ -1,
/*1990*/ -1,
/*1991*/ -1,
/*1992*/ -1,
/*1993*/ -1,
/*1994*/ -1,
/*1995*/ -1,
-1};

// coverity[declaration]
__global__ void ncclDevKernel_AllGather_RING_LL(ncclDevKernelArgs4K const);
#if CUDART_VERSION >= 11000
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_bf16_RING_LL(ncclDevKernelArgs4K const);
#endif
#if CUDART_VERSION >= 11000
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_bf16_TREE_LL(ncclDevKernelArgs4K const);
#endif
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f16_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f16_TREE_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f32_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f32_TREE_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f64_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f64_TREE_LL(ncclDevKernelArgs4K const);
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL(ncclDevKernelArgs4K const);
#endif
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL(ncclDevKernelArgs4K const);
#endif
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL(ncclDevKernelArgs4K const);
#endif
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL(ncclDevKernelArgs4K const);
#endif
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_u32_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_u32_TREE_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_u64_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_u64_TREE_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_u8_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_u8_TREE_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_Broadcast_RING_LL(ncclDevKernelArgs4K const);
#if CUDART_VERSION >= 11000
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_bf16_RING_LL(ncclDevKernelArgs4K const);
#endif
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_f16_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_f32_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_f64_RING_LL(ncclDevKernelArgs4K const);
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL(ncclDevKernelArgs4K const);
#endif
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL(ncclDevKernelArgs4K const);
#endif
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_u32_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_u64_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_u8_RING_LL(ncclDevKernelArgs4K const);
#if CUDART_VERSION >= 11000
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL(ncclDevKernelArgs4K const);
#endif
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_f16_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_f32_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_f64_RING_LL(ncclDevKernelArgs4K const);
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL(ncclDevKernelArgs4K const);
#endif
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL(ncclDevKernelArgs4K const);
#endif
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_u32_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_u64_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_u8_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_SendRecv(ncclDevKernelArgs4K const);

extern int const ncclDevKernelCount = 39;
extern void* const ncclDevKernelList[] = {
/*   0*/ (void*)ncclDevKernel_AllGather_RING_LL,
#if CUDART_VERSION >= 11000
/*   1*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*   1*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*   2*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*   2*/ nullptr,
#endif
/*   3*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*   4*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/*   5*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/*   6*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/*   7*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/*   8*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
#if CUDART_VERSION >= 11080
/*   9*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/*   9*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  10*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/*  10*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  11*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/*  11*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  12*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/*  12*/ nullptr,
#endif
/*  13*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  14*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/*  15*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  16*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/*  17*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/*  18*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/*  19*/ (void*)ncclDevKernel_Broadcast_RING_LL,
#if CUDART_VERSION >= 11000
/*  20*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/*  20*/ nullptr,
#endif
/*  21*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/*  22*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/*  23*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/*  24*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/*  24*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  25*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/*  25*/ nullptr,
#endif
/*  26*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/*  27*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/*  28*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/*  29*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/*  29*/ nullptr,
#endif
/*  30*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/*  31*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/*  32*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/*  33*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/*  33*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  34*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/*  34*/ nullptr,
#endif
/*  35*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/*  36*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/*  37*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/*  38*/ (void*)ncclDevKernel_SendRecv,
nullptr};

extern void* const ncclDevKernelForFunc[] = {
/*   0*/ (void*)ncclDevKernel_AllGather_RING_LL,
/*   1*/ (void*)ncclDevKernel_AllGather_RING_LL,
/*   2*/ (void*)ncclDevKernel_AllGather_RING_LL,
/*   3*/ (void*)ncclDevKernel_AllGather_RING_LL,
/*   4*/ (void*)ncclDevKernel_AllGather_RING_LL,
/*   5*/ (void*)ncclDevKernel_AllGather_RING_LL,
#if CUDART_VERSION >= 11000
/*   6*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*   6*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*   7*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*   7*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*   8*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*   8*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*   9*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*   9*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  10*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  10*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  11*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  11*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  12*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  12*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  13*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*  13*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  14*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*  14*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  15*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*  15*/ nullptr,
#endif
/*  16*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  17*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  18*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  19*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  20*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  21*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  22*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  23*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/*  24*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/*  25*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/*  26*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/*  27*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/*  28*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/*  29*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/*  30*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/*  31*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/*  32*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/*  33*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/*  34*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/*  35*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/*  36*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/*  37*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/*  38*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/*  39*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/*  40*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/*  41*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
#if CUDART_VERSION >= 11080
/*  42*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/*  42*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  43*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/*  43*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  44*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/*  44*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  45*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/*  45*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  46*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/*  46*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  47*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/*  47*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  48*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/*  48*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  49*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/*  49*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  50*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/*  50*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  51*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/*  51*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  52*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/*  52*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  53*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/*  53*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  54*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/*  54*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  55*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/*  55*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  56*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/*  56*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  57*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/*  57*/ nullptr,
#endif
/*  58*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  59*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  60*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  61*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  62*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  63*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  64*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  65*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  66*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  67*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  68*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  69*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/*  70*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/*  71*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/*  72*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  73*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  74*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  75*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  76*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  77*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  78*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  79*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/*  80*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/*  81*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/*  82*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/*  83*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/*  84*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/*  85*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/*  86*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/*  87*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/*  88*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/*  89*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
#if CUDART_VERSION >= 11000
/*  90*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  90*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  91*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  91*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  92*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  92*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  93*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  93*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  94*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  94*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  95*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*  95*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  96*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*  96*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  97*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*  97*/ nullptr,
#endif
/*  98*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  99*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 100*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 101*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 102*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 103*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 104*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 105*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 106*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 107*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 108*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 109*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 110*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 111*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 112*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 113*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 114*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 115*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 116*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 117*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 118*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 119*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/* 120*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/* 121*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
#if CUDART_VERSION >= 11080
/* 122*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 122*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 123*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 123*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 124*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 124*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 125*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 125*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 126*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 126*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 127*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/* 127*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 128*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/* 128*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 129*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/* 129*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 130*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 130*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 131*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 131*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 132*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 132*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 133*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 133*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 134*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 134*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 135*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/* 135*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 136*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/* 136*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 137*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/* 137*/ nullptr,
#endif
/* 138*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 139*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 140*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 141*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 142*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 143*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 144*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 145*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 146*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 147*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 148*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 149*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 150*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 151*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 152*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 153*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 154*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 155*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 156*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 157*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 158*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 159*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 160*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 161*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
#if CUDART_VERSION >= 11000
/* 162*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 162*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 163*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 163*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 164*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 164*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 165*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 165*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 166*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 166*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 167*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 167*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 168*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 168*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 169*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 169*/ nullptr,
#endif
/* 170*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 171*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 172*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 173*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 174*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 175*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 176*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 177*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 178*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 179*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 180*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 181*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 182*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 183*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 184*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 185*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 186*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 187*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 188*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 189*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 190*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 191*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/* 192*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/* 193*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
#if CUDART_VERSION >= 11080
/* 194*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 194*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 195*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 195*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 196*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 196*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 197*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 197*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 198*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 198*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 199*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/* 199*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 200*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/* 200*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 201*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/* 201*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 202*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 202*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 203*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 203*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 204*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 204*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 205*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 205*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 206*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 206*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 207*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/* 207*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 208*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/* 208*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 209*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/* 209*/ nullptr,
#endif
/* 210*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 211*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 212*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 213*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 214*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 215*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 216*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 217*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 218*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 219*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 220*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 221*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 222*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 223*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 224*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 225*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 226*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 227*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 228*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 229*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 230*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 231*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 232*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 233*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
#if CUDART_VERSION >= 11000
/* 234*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 234*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 235*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 235*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 236*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 236*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 237*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 237*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 238*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 238*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 239*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 239*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 240*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 240*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 241*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 241*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 242*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 242*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 243*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 243*/ nullptr,
#endif
/* 244*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 245*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 246*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 247*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 248*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 249*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 250*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 251*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 252*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 253*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 254*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 255*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 256*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 257*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 258*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 259*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 260*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 261*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 262*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 263*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 264*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 265*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 266*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 267*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 268*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 269*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 270*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 271*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/* 272*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/* 273*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
#if CUDART_VERSION >= 11080
/* 274*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 274*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 275*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 275*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 276*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 276*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 277*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 277*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 278*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_RING_LL,
#else
/* 278*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 279*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/* 279*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 280*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/* 280*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 281*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e4m3_TREE_LL,
#else
/* 281*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 282*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 282*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 283*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 283*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 284*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 284*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 285*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 285*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 286*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_RING_LL,
#else
/* 286*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 287*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/* 287*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 288*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/* 288*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 289*/ (void*)ncclDevKernel_AllReduce_Sum_fp8_e5m2_TREE_LL,
#else
/* 289*/ nullptr,
#endif
/* 290*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 291*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 292*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 293*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 294*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 295*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 296*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 297*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 298*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 299*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 300*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 301*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 302*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 303*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 304*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 305*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 306*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 307*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 308*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 309*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 310*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 311*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 312*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 313*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 314*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 315*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 316*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 317*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 318*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 319*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 320*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 321*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 322*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 323*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 324*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 325*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 326*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 327*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 328*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 329*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 330*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 331*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 332*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 333*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 334*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 335*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 336*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 337*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 338*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 339*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 340*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 341*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 342*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 343*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 344*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 345*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 346*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 347*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 348*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 349*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 350*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 351*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 352*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 353*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 354*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 355*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 356*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 357*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 358*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 359*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 360*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 361*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 362*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 363*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 364*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 365*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 366*/ (void*)ncclDevKernel_Broadcast_RING_LL,
/* 367*/ (void*)ncclDevKernel_Broadcast_RING_LL,
/* 368*/ (void*)ncclDevKernel_Broadcast_RING_LL,
#if CUDART_VERSION >= 11000
/* 369*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 369*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 370*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 370*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 371*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 371*/ nullptr,
#endif
/* 372*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 373*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 374*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 375*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 376*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 377*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 378*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 379*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 380*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 381*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/* 381*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 382*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/* 382*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 383*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/* 383*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 384*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/* 384*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 385*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/* 385*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 386*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/* 386*/ nullptr,
#endif
/* 387*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 388*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 389*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 390*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 391*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 392*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 393*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 394*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 395*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 396*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 396*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 397*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 397*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 398*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 398*/ nullptr,
#endif
/* 399*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 400*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 401*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 402*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 403*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 404*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 405*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 406*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 407*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 408*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/* 408*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 409*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/* 409*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 410*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/* 410*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 411*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/* 411*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 412*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/* 412*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 413*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/* 413*/ nullptr,
#endif
/* 414*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 415*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 416*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 417*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 418*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 419*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 420*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 421*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 422*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 423*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 423*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 424*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 424*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 425*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 425*/ nullptr,
#endif
/* 426*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 427*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 428*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 429*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 430*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 431*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 432*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 433*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 434*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 435*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/* 435*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 436*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/* 436*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 437*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/* 437*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 438*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/* 438*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 439*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/* 439*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 440*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/* 440*/ nullptr,
#endif
/* 441*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 442*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 443*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 444*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 445*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 446*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 447*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 448*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 449*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 450*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 450*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 451*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 451*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 452*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 452*/ nullptr,
#endif
/* 453*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 454*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 455*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 456*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 457*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 458*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 459*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 460*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 461*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 462*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/* 462*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 463*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/* 463*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 464*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e4m3_RING_LL,
#else
/* 464*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 465*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/* 465*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 466*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/* 466*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 467*/ (void*)ncclDevKernel_Reduce_Sum_fp8_e5m2_RING_LL,
#else
/* 467*/ nullptr,
#endif
/* 468*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 469*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 470*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 471*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 472*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 473*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 474*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 475*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 476*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 477*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 478*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 479*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 480*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 481*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 482*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 483*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 484*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 485*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 486*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 487*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 488*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 489*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 490*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 491*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 492*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 493*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 494*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 495*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 495*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 496*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 496*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 497*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 497*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 498*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 498*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 499*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 499*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 500*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 500*/ nullptr,
#endif
/* 501*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 502*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 503*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 504*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 505*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 506*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 507*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 508*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 509*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 510*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 511*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 512*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 513*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 514*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 515*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 516*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 517*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 517*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 518*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 518*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 519*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 519*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 520*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 520*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 521*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 521*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 522*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 522*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 523*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 523*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 524*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 524*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 525*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 525*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 526*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 526*/ nullptr,
#endif
/* 527*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 528*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 529*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 530*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 531*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 532*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 533*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 534*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 535*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 536*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 537*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 538*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 539*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 540*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 541*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 542*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 543*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 544*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 545*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 546*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 546*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 547*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 547*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 548*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 548*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 549*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 549*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 550*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 550*/ nullptr,
#endif
/* 551*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 552*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 553*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 554*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 555*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 556*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 557*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 558*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 559*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 560*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 561*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 562*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 563*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 564*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 565*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 566*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 566*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 567*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 567*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 568*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 568*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 569*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 569*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 570*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 570*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 571*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 571*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 572*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 572*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 573*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 573*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 574*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 574*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 575*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 575*/ nullptr,
#endif
/* 576*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 577*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 578*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 579*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 580*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 581*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 582*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 583*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 584*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 585*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 586*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 587*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 588*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 589*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 590*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 591*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 591*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 592*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 592*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 593*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 593*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 594*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 594*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 595*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 595*/ nullptr,
#endif
/* 596*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 597*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 598*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 599*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 600*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 601*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 602*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 603*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 604*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 605*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 606*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 607*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 608*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 609*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 610*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 611*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 611*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 612*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 612*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 613*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 613*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 614*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 614*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 615*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 615*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 616*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 616*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 617*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 617*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 618*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 618*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 619*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 619*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 620*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 620*/ nullptr,
#endif
/* 621*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 622*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 623*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 624*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 625*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 626*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 627*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 628*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 629*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 630*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 631*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 632*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 633*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 634*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 635*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 636*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 636*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 637*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 637*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 638*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 638*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 639*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 639*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 640*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 640*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 641*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 641*/ nullptr,
#endif
/* 642*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 643*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 644*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 645*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 646*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 647*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 648*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 649*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 650*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 651*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 652*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 653*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 654*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 655*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 656*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 657*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 658*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 659*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 660*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 660*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 661*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 661*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 662*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 662*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 663*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 663*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 664*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e4m3_RING_LL,
#else
/* 664*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 665*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 665*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 666*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 666*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 667*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 667*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 668*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 668*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 669*/ (void*)ncclDevKernel_ReduceScatter_Sum_fp8_e5m2_RING_LL,
#else
/* 669*/ nullptr,
#endif
/* 670*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 671*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 672*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 673*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 674*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 675*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 676*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 677*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 678*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 679*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 680*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 681*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 682*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 683*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 684*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 685*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 686*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 687*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 688*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 689*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 690*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 691*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 692*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 693*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 694*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 695*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 696*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 697*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 698*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 699*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 700*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 701*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 702*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 703*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 704*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 705*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 706*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 707*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 708*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 709*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 710*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 711*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 712*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 713*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 714*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 715*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 716*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 717*/ (void*)ncclDevKernel_SendRecv,
nullptr};

extern bool const ncclDevKernelForFuncIsSpecialized[] = {
/*   0*/ 0,
/*   1*/ 0,
/*   2*/ 0,
/*   3*/ 1,
/*   4*/ 0,
/*   5*/ 0,
/*   6*/ 0,
/*   7*/ 0,
/*   8*/ 0,
/*   9*/ 0,
/*  10*/ 0,
/*  11*/ 0,
/*  12*/ 0,
/*  13*/ 0,
/*  14*/ 0,
/*  15*/ 0,
/*  16*/ 0,
/*  17*/ 0,
/*  18*/ 0,
/*  19*/ 0,
/*  20*/ 0,
/*  21*/ 0,
/*  22*/ 0,
/*  23*/ 0,
/*  24*/ 0,
/*  25*/ 0,
/*  26*/ 0,
/*  27*/ 0,
/*  28*/ 0,
/*  29*/ 0,
/*  30*/ 0,
/*  31*/ 0,
/*  32*/ 0,
/*  33*/ 0,
/*  34*/ 0,
/*  35*/ 0,
/*  36*/ 0,
/*  37*/ 0,
/*  38*/ 0,
/*  39*/ 0,
/*  40*/ 0,
/*  41*/ 0,
/*  42*/ 0,
/*  43*/ 0,
/*  44*/ 0,
/*  45*/ 0,
/*  46*/ 0,
/*  47*/ 0,
/*  48*/ 0,
/*  49*/ 0,
/*  50*/ 0,
/*  51*/ 0,
/*  52*/ 0,
/*  53*/ 0,
/*  54*/ 0,
/*  55*/ 0,
/*  56*/ 0,
/*  57*/ 0,
/*  58*/ 0,
/*  59*/ 0,
/*  60*/ 0,
/*  61*/ 0,
/*  62*/ 0,
/*  63*/ 0,
/*  64*/ 0,
/*  65*/ 0,
/*  66*/ 0,
/*  67*/ 0,
/*  68*/ 0,
/*  69*/ 0,
/*  70*/ 0,
/*  71*/ 0,
/*  72*/ 0,
/*  73*/ 0,
/*  74*/ 0,
/*  75*/ 0,
/*  76*/ 0,
/*  77*/ 0,
/*  78*/ 0,
/*  79*/ 0,
/*  80*/ 0,
/*  81*/ 0,
/*  82*/ 0,
/*  83*/ 0,
/*  84*/ 0,
/*  85*/ 0,
/*  86*/ 0,
/*  87*/ 0,
/*  88*/ 0,
/*  89*/ 0,
/*  90*/ 0,
/*  91*/ 0,
/*  92*/ 0,
/*  93*/ 0,
/*  94*/ 0,
/*  95*/ 0,
/*  96*/ 0,
/*  97*/ 0,
/*  98*/ 0,
/*  99*/ 0,
/* 100*/ 0,
/* 101*/ 0,
/* 102*/ 0,
/* 103*/ 0,
/* 104*/ 0,
/* 105*/ 0,
/* 106*/ 0,
/* 107*/ 0,
/* 108*/ 0,
/* 109*/ 0,
/* 110*/ 0,
/* 111*/ 0,
/* 112*/ 0,
/* 113*/ 0,
/* 114*/ 0,
/* 115*/ 0,
/* 116*/ 0,
/* 117*/ 0,
/* 118*/ 0,
/* 119*/ 0,
/* 120*/ 0,
/* 121*/ 0,
/* 122*/ 0,
/* 123*/ 0,
/* 124*/ 0,
/* 125*/ 0,
/* 126*/ 0,
/* 127*/ 0,
/* 128*/ 0,
/* 129*/ 0,
/* 130*/ 0,
/* 131*/ 0,
/* 132*/ 0,
/* 133*/ 0,
/* 134*/ 0,
/* 135*/ 0,
/* 136*/ 0,
/* 137*/ 0,
/* 138*/ 0,
/* 139*/ 0,
/* 140*/ 0,
/* 141*/ 0,
/* 142*/ 0,
/* 143*/ 0,
/* 144*/ 0,
/* 145*/ 0,
/* 146*/ 0,
/* 147*/ 0,
/* 148*/ 0,
/* 149*/ 0,
/* 150*/ 0,
/* 151*/ 0,
/* 152*/ 0,
/* 153*/ 0,
/* 154*/ 0,
/* 155*/ 0,
/* 156*/ 0,
/* 157*/ 0,
/* 158*/ 0,
/* 159*/ 0,
/* 160*/ 0,
/* 161*/ 0,
/* 162*/ 0,
/* 163*/ 0,
/* 164*/ 0,
/* 165*/ 0,
/* 166*/ 0,
/* 167*/ 0,
/* 168*/ 0,
/* 169*/ 0,
/* 170*/ 0,
/* 171*/ 0,
/* 172*/ 0,
/* 173*/ 0,
/* 174*/ 0,
/* 175*/ 0,
/* 176*/ 0,
/* 177*/ 0,
/* 178*/ 0,
/* 179*/ 0,
/* 180*/ 0,
/* 181*/ 0,
/* 182*/ 0,
/* 183*/ 0,
/* 184*/ 0,
/* 185*/ 0,
/* 186*/ 0,
/* 187*/ 0,
/* 188*/ 0,
/* 189*/ 0,
/* 190*/ 0,
/* 191*/ 0,
/* 192*/ 0,
/* 193*/ 0,
/* 194*/ 0,
/* 195*/ 0,
/* 196*/ 0,
/* 197*/ 0,
/* 198*/ 0,
/* 199*/ 0,
/* 200*/ 0,
/* 201*/ 0,
/* 202*/ 0,
/* 203*/ 0,
/* 204*/ 0,
/* 205*/ 0,
/* 206*/ 0,
/* 207*/ 0,
/* 208*/ 0,
/* 209*/ 0,
/* 210*/ 0,
/* 211*/ 0,
/* 212*/ 0,
/* 213*/ 0,
/* 214*/ 0,
/* 215*/ 0,
/* 216*/ 0,
/* 217*/ 0,
/* 218*/ 0,
/* 219*/ 0,
/* 220*/ 0,
/* 221*/ 0,
/* 222*/ 0,
/* 223*/ 0,
/* 224*/ 0,
/* 225*/ 0,
/* 226*/ 0,
/* 227*/ 0,
/* 228*/ 0,
/* 229*/ 0,
/* 230*/ 0,
/* 231*/ 0,
/* 232*/ 0,
/* 233*/ 0,
/* 234*/ 0,
/* 235*/ 0,
/* 236*/ 0,
/* 237*/ 0,
/* 238*/ 1,
/* 239*/ 0,
/* 240*/ 0,
/* 241*/ 1,
/* 242*/ 0,
/* 243*/ 0,
/* 244*/ 0,
/* 245*/ 0,
/* 246*/ 0,
/* 247*/ 0,
/* 248*/ 1,
/* 249*/ 0,
/* 250*/ 0,
/* 251*/ 1,
/* 252*/ 0,
/* 253*/ 0,
/* 254*/ 0,
/* 255*/ 0,
/* 256*/ 0,
/* 257*/ 0,
/* 258*/ 1,
/* 259*/ 0,
/* 260*/ 0,
/* 261*/ 1,
/* 262*/ 0,
/* 263*/ 0,
/* 264*/ 0,
/* 265*/ 0,
/* 266*/ 0,
/* 267*/ 0,
/* 268*/ 1,
/* 269*/ 0,
/* 270*/ 0,
/* 271*/ 1,
/* 272*/ 0,
/* 273*/ 0,
/* 274*/ 0,
/* 275*/ 0,
/* 276*/ 1,
/* 277*/ 0,
/* 278*/ 0,
/* 279*/ 1,
/* 280*/ 0,
/* 281*/ 0,
/* 282*/ 0,
/* 283*/ 0,
/* 284*/ 1,
/* 285*/ 0,
/* 286*/ 0,
/* 287*/ 1,
/* 288*/ 0,
/* 289*/ 0,
/* 290*/ 0,
/* 291*/ 0,
/* 292*/ 0,
/* 293*/ 0,
/* 294*/ 1,
/* 295*/ 0,
/* 296*/ 0,
/* 297*/ 1,
/* 298*/ 0,
/* 299*/ 0,
/* 300*/ 0,
/* 301*/ 0,
/* 302*/ 0,
/* 303*/ 0,
/* 304*/ 1,
/* 305*/ 0,
/* 306*/ 0,
/* 307*/ 1,
/* 308*/ 0,
/* 309*/ 0,
/* 310*/ 0,
/* 311*/ 0,
/* 312*/ 1,
/* 313*/ 0,
/* 314*/ 0,
/* 315*/ 1,
/* 316*/ 0,
/* 317*/ 0,
/* 318*/ 0,
/* 319*/ 0,
/* 320*/ 0,
/* 321*/ 0,
/* 322*/ 0,
/* 323*/ 0,
/* 324*/ 0,
/* 325*/ 0,
/* 326*/ 0,
/* 327*/ 0,
/* 328*/ 0,
/* 329*/ 0,
/* 330*/ 0,
/* 331*/ 0,
/* 332*/ 0,
/* 333*/ 0,
/* 334*/ 0,
/* 335*/ 0,
/* 336*/ 0,
/* 337*/ 0,
/* 338*/ 0,
/* 339*/ 0,
/* 340*/ 0,
/* 341*/ 0,
/* 342*/ 0,
/* 343*/ 0,
/* 344*/ 0,
/* 345*/ 0,
/* 346*/ 0,
/* 347*/ 0,
/* 348*/ 0,
/* 349*/ 0,
/* 350*/ 0,
/* 351*/ 0,
/* 352*/ 0,
/* 353*/ 0,
/* 354*/ 0,
/* 355*/ 0,
/* 356*/ 0,
/* 357*/ 0,
/* 358*/ 0,
/* 359*/ 0,
/* 360*/ 0,
/* 361*/ 0,
/* 362*/ 0,
/* 363*/ 0,
/* 364*/ 0,
/* 365*/ 0,
/* 366*/ 1,
/* 367*/ 0,
/* 368*/ 0,
/* 369*/ 0,
/* 370*/ 0,
/* 371*/ 0,
/* 372*/ 0,
/* 373*/ 0,
/* 374*/ 0,
/* 375*/ 0,
/* 376*/ 0,
/* 377*/ 0,
/* 378*/ 0,
/* 379*/ 0,
/* 380*/ 0,
/* 381*/ 0,
/* 382*/ 0,
/* 383*/ 0,
/* 384*/ 0,
/* 385*/ 0,
/* 386*/ 0,
/* 387*/ 0,
/* 388*/ 0,
/* 389*/ 0,
/* 390*/ 0,
/* 391*/ 0,
/* 392*/ 0,
/* 393*/ 0,
/* 394*/ 0,
/* 395*/ 0,
/* 396*/ 0,
/* 397*/ 0,
/* 398*/ 0,
/* 399*/ 0,
/* 400*/ 0,
/* 401*/ 0,
/* 402*/ 0,
/* 403*/ 0,
/* 404*/ 0,
/* 405*/ 0,
/* 406*/ 0,
/* 407*/ 0,
/* 408*/ 0,
/* 409*/ 0,
/* 410*/ 0,
/* 411*/ 0,
/* 412*/ 0,
/* 413*/ 0,
/* 414*/ 0,
/* 415*/ 0,
/* 416*/ 0,
/* 417*/ 0,
/* 418*/ 0,
/* 419*/ 0,
/* 420*/ 0,
/* 421*/ 0,
/* 422*/ 0,
/* 423*/ 0,
/* 424*/ 0,
/* 425*/ 0,
/* 426*/ 0,
/* 427*/ 0,
/* 428*/ 0,
/* 429*/ 0,
/* 430*/ 0,
/* 431*/ 0,
/* 432*/ 0,
/* 433*/ 0,
/* 434*/ 0,
/* 435*/ 0,
/* 436*/ 0,
/* 437*/ 0,
/* 438*/ 0,
/* 439*/ 0,
/* 440*/ 0,
/* 441*/ 0,
/* 442*/ 0,
/* 443*/ 0,
/* 444*/ 0,
/* 445*/ 0,
/* 446*/ 0,
/* 447*/ 0,
/* 448*/ 0,
/* 449*/ 0,
/* 450*/ 1,
/* 451*/ 0,
/* 452*/ 0,
/* 453*/ 1,
/* 454*/ 0,
/* 455*/ 0,
/* 456*/ 1,
/* 457*/ 0,
/* 458*/ 0,
/* 459*/ 1,
/* 460*/ 0,
/* 461*/ 0,
/* 462*/ 1,
/* 463*/ 0,
/* 464*/ 0,
/* 465*/ 1,
/* 466*/ 0,
/* 467*/ 0,
/* 468*/ 1,
/* 469*/ 0,
/* 470*/ 0,
/* 471*/ 1,
/* 472*/ 0,
/* 473*/ 0,
/* 474*/ 1,
/* 475*/ 0,
/* 476*/ 0,
/* 477*/ 0,
/* 478*/ 0,
/* 479*/ 0,
/* 480*/ 0,
/* 481*/ 0,
/* 482*/ 0,
/* 483*/ 0,
/* 484*/ 0,
/* 485*/ 0,
/* 486*/ 0,
/* 487*/ 0,
/* 488*/ 0,
/* 489*/ 0,
/* 490*/ 0,
/* 491*/ 0,
/* 492*/ 0,
/* 493*/ 0,
/* 494*/ 0,
/* 495*/ 0,
/* 496*/ 0,
/* 497*/ 0,
/* 498*/ 0,
/* 499*/ 0,
/* 500*/ 0,
/* 501*/ 0,
/* 502*/ 0,
/* 503*/ 0,
/* 504*/ 0,
/* 505*/ 0,
/* 506*/ 0,
/* 507*/ 0,
/* 508*/ 0,
/* 509*/ 0,
/* 510*/ 0,
/* 511*/ 0,
/* 512*/ 0,
/* 513*/ 0,
/* 514*/ 0,
/* 515*/ 0,
/* 516*/ 0,
/* 517*/ 0,
/* 518*/ 0,
/* 519*/ 0,
/* 520*/ 0,
/* 521*/ 0,
/* 522*/ 0,
/* 523*/ 0,
/* 524*/ 0,
/* 525*/ 0,
/* 526*/ 0,
/* 527*/ 0,
/* 528*/ 0,
/* 529*/ 0,
/* 530*/ 0,
/* 531*/ 0,
/* 532*/ 0,
/* 533*/ 0,
/* 534*/ 0,
/* 535*/ 0,
/* 536*/ 0,
/* 537*/ 0,
/* 538*/ 0,
/* 539*/ 0,
/* 540*/ 0,
/* 541*/ 0,
/* 542*/ 0,
/* 543*/ 0,
/* 544*/ 0,
/* 545*/ 0,
/* 546*/ 0,
/* 547*/ 0,
/* 548*/ 0,
/* 549*/ 0,
/* 550*/ 0,
/* 551*/ 0,
/* 552*/ 0,
/* 553*/ 0,
/* 554*/ 0,
/* 555*/ 0,
/* 556*/ 0,
/* 557*/ 0,
/* 558*/ 0,
/* 559*/ 0,
/* 560*/ 0,
/* 561*/ 0,
/* 562*/ 0,
/* 563*/ 0,
/* 564*/ 0,
/* 565*/ 0,
/* 566*/ 0,
/* 567*/ 0,
/* 568*/ 0,
/* 569*/ 0,
/* 570*/ 0,
/* 571*/ 0,
/* 572*/ 0,
/* 573*/ 0,
/* 574*/ 0,
/* 575*/ 0,
/* 576*/ 0,
/* 577*/ 0,
/* 578*/ 0,
/* 579*/ 0,
/* 580*/ 0,
/* 581*/ 0,
/* 582*/ 0,
/* 583*/ 0,
/* 584*/ 0,
/* 585*/ 0,
/* 586*/ 0,
/* 587*/ 0,
/* 588*/ 0,
/* 589*/ 0,
/* 590*/ 0,
/* 591*/ 0,
/* 592*/ 0,
/* 593*/ 0,
/* 594*/ 0,
/* 595*/ 0,
/* 596*/ 0,
/* 597*/ 0,
/* 598*/ 0,
/* 599*/ 0,
/* 600*/ 0,
/* 601*/ 0,
/* 602*/ 0,
/* 603*/ 0,
/* 604*/ 0,
/* 605*/ 0,
/* 606*/ 0,
/* 607*/ 0,
/* 608*/ 0,
/* 609*/ 0,
/* 610*/ 0,
/* 611*/ 0,
/* 612*/ 0,
/* 613*/ 0,
/* 614*/ 0,
/* 615*/ 0,
/* 616*/ 0,
/* 617*/ 0,
/* 618*/ 0,
/* 619*/ 0,
/* 620*/ 0,
/* 621*/ 0,
/* 622*/ 0,
/* 623*/ 0,
/* 624*/ 0,
/* 625*/ 0,
/* 626*/ 0,
/* 627*/ 0,
/* 628*/ 0,
/* 629*/ 0,
/* 630*/ 0,
/* 631*/ 0,
/* 632*/ 0,
/* 633*/ 0,
/* 634*/ 0,
/* 635*/ 0,
/* 636*/ 0,
/* 637*/ 0,
/* 638*/ 0,
/* 639*/ 1,
/* 640*/ 0,
/* 641*/ 0,
/* 642*/ 0,
/* 643*/ 0,
/* 644*/ 0,
/* 645*/ 1,
/* 646*/ 0,
/* 647*/ 0,
/* 648*/ 0,
/* 649*/ 0,
/* 650*/ 0,
/* 651*/ 1,
/* 652*/ 0,
/* 653*/ 0,
/* 654*/ 0,
/* 655*/ 0,
/* 656*/ 0,
/* 657*/ 1,
/* 658*/ 0,
/* 659*/ 0,
/* 660*/ 0,
/* 661*/ 0,
/* 662*/ 1,
/* 663*/ 0,
/* 664*/ 0,
/* 665*/ 0,
/* 666*/ 0,
/* 667*/ 1,
/* 668*/ 0,
/* 669*/ 0,
/* 670*/ 0,
/* 671*/ 0,
/* 672*/ 0,
/* 673*/ 1,
/* 674*/ 0,
/* 675*/ 0,
/* 676*/ 0,
/* 677*/ 0,
/* 678*/ 0,
/* 679*/ 1,
/* 680*/ 0,
/* 681*/ 0,
/* 682*/ 0,
/* 683*/ 0,
/* 684*/ 1,
/* 685*/ 0,
/* 686*/ 0,
/* 687*/ 0,
/* 688*/ 0,
/* 689*/ 0,
/* 690*/ 0,
/* 691*/ 0,
/* 692*/ 0,
/* 693*/ 0,
/* 694*/ 0,
/* 695*/ 0,
/* 696*/ 0,
/* 697*/ 0,
/* 698*/ 0,
/* 699*/ 0,
/* 700*/ 0,
/* 701*/ 0,
/* 702*/ 0,
/* 703*/ 0,
/* 704*/ 0,
/* 705*/ 0,
/* 706*/ 0,
/* 707*/ 0,
/* 708*/ 0,
/* 709*/ 0,
/* 710*/ 0,
/* 711*/ 0,
/* 712*/ 0,
/* 713*/ 0,
/* 714*/ 0,
/* 715*/ 0,
/* 716*/ 0,
/* 717*/ 1,
0};
