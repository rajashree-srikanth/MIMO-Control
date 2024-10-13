/* Include files */

#include "chardonnay_simulinkR2018a_sfun.h"
#include "c2_chardonnay_simulinkR2018a.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c2_emlrtMCI = { 122,/* lineNo */
  13,                                  /* colNo */
  "rng",                               /* fName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pName */
};

static emlrtMCInfo c2_b_emlrtMCI = { 158,/* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo c2_c_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c2_d_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 18, /* lineNo */
  "Chardonnay Dynamics  (DO NOT MODIFY)/Chardonnay Dynamics",/* fcnName */
  "#chardonnay_simulinkR2018a:1"       /* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 21,/* lineNo */
  "Chardonnay Dynamics  (DO NOT MODIFY)/Chardonnay Dynamics",/* fcnName */
  "#chardonnay_simulinkR2018a:1"       /* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 65,/* lineNo */
  "Chardonnay Dynamics  (DO NOT MODIFY)/Chardonnay Dynamics",/* fcnName */
  "#chardonnay_simulinkR2018a:1"       /* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 66,/* lineNo */
  "Chardonnay Dynamics  (DO NOT MODIFY)/Chardonnay Dynamics",/* fcnName */
  "#chardonnay_simulinkR2018a:1"       /* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 71,/* lineNo */
  "Chardonnay Dynamics  (DO NOT MODIFY)/Chardonnay Dynamics",/* fcnName */
  "#chardonnay_simulinkR2018a:1"       /* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 54,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 113,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 114,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 116,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 118,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 120,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 273,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 275,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 277,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 278,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 45,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 69,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 19,/* lineNo */
  "eml_rand_mcg16807_stateful",        /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mcg16807_stateful.m"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 49,/* lineNo */
  "eml_rand_mcg16807",                 /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mcg16807.m"/* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 107,/* lineNo */
  "rand",                              /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 41,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c2_v_emlrtRSI = { 43,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c2_w_emlrtRSI = { 45,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c2_x_emlrtRSI = { 23,/* lineNo */
  "eml_rand_shr3cong_stateful",        /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_shr3cong_stateful.m"/* pathName */
};

static emlrtRSInfo c2_y_emlrtRSI = { 29,/* lineNo */
  "eml_rand_shr3cong",                 /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_shr3cong.m"/* pathName */
};

static emlrtRSInfo c2_ab_emlrtRSI = { 64,/* lineNo */
  "eml_rand_shr3cong",                 /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_shr3cong.m"/* pathName */
};

static emlrtRSInfo c2_bb_emlrtRSI = { 23,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c2_cb_emlrtRSI = { 51,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c2_db_emlrtRSI = { 151,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c2_eb_emlrtRSI = { 257,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c2_fb_emlrtRSI = { 263,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c2_gb_emlrtRSI = { 268,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c2_hb_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c2_ib_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c2_jb_emlrtRSI = { 20,/* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo c2_kb_emlrtRSI = { 42,/* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo c2_lb_emlrtRSI = { 67,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo c2_mb_emlrtRSI = { 112,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo c2_nb_emlrtRSI = { 109,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo c2_ob_emlrtRSI = { 124,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo c2_pb_emlrtRSI = { 26,/* lineNo */
  "xgetrfs",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrfs.m"/* pathName */
};

static emlrtRSInfo c2_qb_emlrtRSI = { 27,/* lineNo */
  "xgetrfs",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrfs.m"/* pathName */
};

static emlrtRSInfo c2_rb_emlrtRSI = { 30,/* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo c2_sb_emlrtRSI = { 36,/* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo c2_tb_emlrtRSI = { 50,/* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo c2_ub_emlrtRSI = { 58,/* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo c2_vb_emlrtRSI = { 23,/* lineNo */
  "ixamax",                            /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\ixamax.m"/* pathName */
};

static emlrtRSInfo c2_wb_emlrtRSI = { 24,/* lineNo */
  "ixamax",                            /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\ixamax.m"/* pathName */
};

static emlrtRSInfo c2_xb_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c2_yb_emlrtRSI = { 45,/* lineNo */
  "xgeru",                             /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru.m"/* pathName */
};

static emlrtRSInfo c2_ac_emlrtRSI = { 45,/* lineNo */
  "xger",                              /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xger.m"/* pathName */
};

static emlrtRSInfo c2_bc_emlrtRSI = { 15,/* lineNo */
  "xger",                              /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xger.m"/* pathName */
};

static emlrtRSInfo c2_cc_emlrtRSI = { 41,/* lineNo */
  "xgerx",                             /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRSInfo c2_dc_emlrtRSI = { 54,/* lineNo */
  "xgerx",                             /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRSInfo c2_ec_emlrtRSI = { 18,/* lineNo */
  "xgetrs",                            /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrs.m"/* pathName */
};

static emlrtRSInfo c2_fc_emlrtRSI = { 32,/* lineNo */
  "xzgetrs",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrs.m"/* pathName */
};

static emlrtRSInfo c2_gc_emlrtRSI = { 36,/* lineNo */
  "xzgetrs",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrs.m"/* pathName */
};

static emlrtRSInfo c2_hc_emlrtRSI = { 59,/* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo c2_ic_emlrtRSI = { 71,/* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo c2_jc_emlrtRSI = { 51,/* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo c2_kc_emlrtRSI = { 90,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo c2_lc_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Other_Files\\MATLAB2022a\\R2022a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static uint32_T c2_uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
  1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
  2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
  951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
  1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
  1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
  3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
  1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
  761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
  3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
  699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
  1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
  4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
  3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
  4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
  170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
  1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
  1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
  1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
  3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
  501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
  1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
  2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
  2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
  4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
  2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
  2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
  3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
  733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
  1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
  627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
  3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
  3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
  3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
  354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
  1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
  1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
  3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
  2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
  2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
  548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
  1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
  3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
  2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
  191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
  3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
  396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
  3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
  2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
  3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
  1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
  1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
  976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
  2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
  766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
  3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
  1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
  607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
  3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
  1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
  2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
  4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
  551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
  3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
  1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
  552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
  181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
  3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
  4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
  478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
  3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
  786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
  2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
  4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
  4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
  3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
  3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
  370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
  3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
  1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
  2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
  2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
  4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
  1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
  506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
  138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
  3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
  1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
  2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
  643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
  1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
  4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
  4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
  1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
  3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
  3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
  3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
  190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
  2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
  453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
  4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
  2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
  363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
  1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
  2844269403U, 79981964U, 624U };

/* Function Declarations */
static void initialize_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void initialize_params_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void mdl_start_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void mdl_terminate_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void enable_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void disable_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void sf_gateway_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void ext_mode_exec_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void c2_update_jit_animation_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void c2_do_animation_call_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void set_sim_state_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, const mxArray
   *c2_st);
static void initSimStructsc2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static real_T c2_now(SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static real_T c2_mod(SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance,
                     real_T c2_b_x);
static real_T c2_rand(SFc2_chardonnay_simulinkR2018aInstanceStruct
                      *chartInstance, const emlrtStack *c2_sp);
static void c2_mldivide(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_A[49], real_T c2_B[7],
  real_T c2_Y[7]);
static void c2_check_forloop_overflow_error
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, const emlrtStack
   *c2_sp, boolean_T c2_overflow);
static void c2_warning(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static void c2_emlrt_marshallIn(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const mxArray *c2_b_xdot, const char_T *c2_identifier, real_T
  c2_y[8]);
static void c2_b_emlrt_marshallIn(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[8]);
static uint32_T c2_c_emlrt_marshallIn
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, const mxArray
   *c2_b_method, const char_T *c2_identifier, boolean_T *c2_svPtr);
static uint32_T c2_d_emlrt_marshallIn
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, const mxArray
   *c2_b_u, const emlrtMsgIdentifier *c2_parentId, boolean_T *c2_svPtr);
static void c2_e_emlrt_marshallIn(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const mxArray *c2_d_state, const char_T *c2_identifier,
  boolean_T *c2_svPtr, uint32_T c2_y[625]);
static void c2_f_emlrt_marshallIn(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId,
  boolean_T *c2_svPtr, uint32_T c2_y[625]);
static void c2_g_emlrt_marshallIn(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const mxArray *c2_d_state, const char_T *c2_identifier,
  boolean_T *c2_svPtr, uint32_T c2_y[2]);
static void c2_h_emlrt_marshallIn(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId,
  boolean_T *c2_svPtr, uint32_T c2_y[2]);
static uint8_T c2_i_emlrt_marshallIn
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, const mxArray
   *c2_b_is_active_c2_chardonnay_simulinkR2018a, const char_T *c2_identifier);
static uint8_T c2_j_emlrt_marshallIn
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, const mxArray
   *c2_b_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_slStringInitializeDynamicBuffers
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);
static void c2_chart_data_browse_helper
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, int32_T
   c2_ssIdNumber, const mxArray **c2_mxData, uint8_T *c2_isValueTooBig);
static const mxArray *c2_feval(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0, const
  mxArray *c2_input1);
static void c2_b_feval(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0, const
  mxArray *c2_input1);
static void init_dsm_address_info(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance);
static void init_simulink_io_address
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_seed_not_empty = false;
  chartInstance->c2_method_not_empty = false;
  chartInstance->c2_state_not_empty = false;
  chartInstance->c2_b_state_not_empty = false;
  chartInstance->c2_c_state_not_empty = false;
  chartInstance->c2_is_active_c2_chardonnay_simulinkR2018a = 0U;
}

static void initialize_params_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c2_RuntimeVar,
    &chartInstance->c2_IsDebuggerActive,
    &chartInstance->c2_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c2_mlFcnLineNumber, &chartInstance->c2_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    18U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  1U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 102, -1, 1655);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 390, -1,
    404);
}

static void mdl_cleanup_runtime_resources_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void enable_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  static real_T c2_dv[7] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 };

  static real_T c2_dv1[7] = { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 };

  static char_T c2_cv[22] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'n', 'g',
    ':', 'b', 'a', 'd', 'S', 'e', 't', 't', 'i', 'n', 'g', 's' };

  time_t c2_b_eTime;
  time_t c2_eTime;
  c2_s6fJwCgMg2zEkgjsloeWfJE c2_chardonnay;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack *c2_c_r;
  emlrtStack *c2_r1;
  emlrtStack *c2_r2;
  emlrtStack *c2_r3;
  emlrtStack *c2_r4;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_Pi[49];
  real_T c2_b_x[8];
  real_T c2_fp[7];
  real_T c2_h[7];
  real_T c2_f[6];
  real_T c2_uc[5];
  real_T c2_b_u[2];
  real_T c2_b_w[2];
  real_T c2_C_D;
  real_T c2_J;
  real_T c2_a;
  real_T c2_ab_x;
  real_T c2_b_a;
  real_T c2_b_c;
  real_T c2_b_mti;
  real_T c2_bb_x;
  real_T c2_c;
  real_T c2_c_a;
  real_T c2_c_x;
  real_T c2_cb_x;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_d6;
  real_T c2_d_a;
  real_T c2_d_x;
  real_T c2_db_x;
  real_T c2_e_a;
  real_T c2_e_x;
  real_T c2_eb_x;
  real_T c2_f_a;
  real_T c2_f_x;
  real_T c2_g;
  real_T c2_g_a;
  real_T c2_g_x;
  real_T c2_h_a;
  real_T c2_h_x;
  real_T c2_i_a;
  real_T c2_i_x;
  real_T c2_j_a;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_l;
  real_T c2_l_d;
  real_T c2_l_x;
  real_T c2_m_c;
  real_T c2_m_d;
  real_T c2_m_x;
  real_T c2_n_x;
  real_T c2_o_x;
  real_T c2_p_x;
  real_T c2_q_x;
  real_T c2_r_x;
  real_T c2_s;
  real_T c2_s0;
  real_T c2_s_x;
  real_T c2_t_x;
  real_T c2_u_1;
  real_T c2_u_2;
  real_T c2_u_x;
  real_T c2_v_x;
  real_T c2_w_1;
  real_T c2_w_2;
  real_T c2_w_x;
  real_T c2_x_1;
  real_T c2_x_2;
  real_T c2_x_3;
  real_T c2_x_4;
  real_T c2_x_5;
  real_T c2_x_6;
  real_T c2_x_x;
  real_T c2_y_x;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_mti;
  int32_T c2_prevEpochTime;
  int32_T c2_t;
  uint32_T c2_arg3;
  uint32_T c2_b_arg3;
  uint32_T c2_b_r;
  uint32_T c2_b_s;
  uint32_T c2_b_seed;
  uint32_T c2_b_t;
  uint32_T c2_b_varargin_1;
  uint32_T c2_c_arg3;
  uint32_T c2_c_seed;
  uint32_T c2_c_u;
  uint32_T c2_c_varargin_1;
  uint32_T c2_d_state;
  uint32_T c2_method2;
  uint32_T c2_r;
  uint32_T c2_u1;
  uint32_T c2_varargin_1;
  boolean_T c2_covSaturation;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c2_i = 0; c2_i < 2; c2_i++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U, (*chartInstance->c2_w)
                      [c2_i]);
  }

  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U, (*chartInstance->c2_u)
                      [c2_i1]);
  }

  for (c2_i2 = 0; c2_i2 < 8; c2_i2++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U, (*chartInstance->c2_x)
                      [c2_i2]);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  for (c2_i3 = 0; c2_i3 < 8; c2_i3++) {
    c2_b_x[c2_i3] = (*chartInstance->c2_x)[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
    c2_b_u[c2_i4] = (*chartInstance->c2_u)[c2_i4];
  }

  for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
    c2_b_w[c2_i5] = (*chartInstance->c2_w)[c2_i5];
  }

  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  c2_chardonnay.m_d = 1.0;
  c2_chardonnay.m_c = 1.0;
  c2_chardonnay.l = 1.0;
  c2_chardonnay.l_d = 1.0;
  c2_chardonnay.J = 0.1;
  c2_b_st.site = &c2_emlrtRSI;
  if (!chartInstance->c2_seed_not_empty) {
    chartInstance->c2_seed = 0U;
    chartInstance->c2_seed_not_empty = true;
  }

  c2_c_st.site = &c2_f_emlrtRSI;
  if (!chartInstance->c2_method_not_empty) {
    chartInstance->c2_method = 7U;
    chartInstance->c2_method_not_empty = true;
  }

  c2_c_st.site = &c2_g_emlrtRSI;
  c2_d_st.site = &c2_l_emlrtRSI;
  c2_c_x = c2_now(chartInstance) * 8.64E+6;
  c2_d_x = c2_c_x;
  c2_d_x = muDoubleScalarFloor(c2_d_x);
  c2_s = c2_mod(chartInstance, c2_d_x);
  c2_d_st.site = &c2_m_emlrtRSI;
  c2_eTime = time(NULL);
  c2_prevEpochTime = (int32_T)c2_eTime + 1;
  do {
    c2_exitg1 = 0;
    c2_d_st.site = &c2_n_emlrtRSI;
    c2_b_eTime = time(NULL);
    c2_t = (int32_T)c2_b_eTime;
    if (c2_t <= c2_prevEpochTime) {
      c2_d_st.site = &c2_o_emlrtRSI;
      c2_e_x = c2_now(chartInstance) * 8.64E+6;
      c2_f_x = c2_e_x;
      c2_f_x = muDoubleScalarFloor(c2_f_x);
      c2_s0 = c2_mod(chartInstance, c2_f_x);
      if (c2_s != c2_s0) {
        c2_exitg1 = 1;
      }
    } else {
      c2_exitg1 = 1;
    }
  } while (c2_exitg1 == 0);

  c2_d = muDoubleScalarRound(c2_s);
  c2_covSaturation = false;
  if (c2_d < 4.294967296E+9) {
    if (c2_d >= 0.0) {
      c2_c_u = (uint32_T)c2_d;
    } else {
      c2_covSaturation = true;
      c2_c_u = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 390, 14);
    }
  } else if (c2_d >= 4.294967296E+9) {
    c2_covSaturation = true;
    c2_c_u = MAX_uint32_T;
    sf_data_saturate_error(chartInstance->S, 1U, 390, 14);
  } else {
    c2_c_u = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 0, 0,
    c2_covSaturation);
  chartInstance->c2_seed = c2_c_u;
  c2_c_st.site = &c2_h_emlrtRSI;
  if (!chartInstance->c2_method_not_empty) {
    chartInstance->c2_method = 7U;
    chartInstance->c2_method_not_empty = true;
  }

  c2_method2 = chartInstance->c2_method;
  if (c2_method2 == 7U) {
    c2_c_st.site = &c2_i_emlrtRSI;
    c2_varargin_1 = chartInstance->c2_seed;
    if (!chartInstance->c2_state_not_empty) {
      for (c2_i6 = 0; c2_i6 < 625; c2_i6++) {
        chartInstance->c2_state[c2_i6] = c2_uv[c2_i6];
      }

      chartInstance->c2_state_not_empty = true;
    }

    c2_d_st.site = &c2_p_emlrtRSI;
    c2_b_arg3 = c2_varargin_1;
    c2_e_st.site = &c2_q_emlrtRSI;
    c2_b_seed = c2_b_arg3;
    c2_r = c2_b_seed;
    chartInstance->c2_state[0] = c2_b_seed;
    for (c2_mti = 0; c2_mti < 623; c2_mti++) {
      c2_b_mti = 2.0 + (real_T)c2_mti;
      c2_d2 = muDoubleScalarRound(c2_b_mti - 1.0);
      if (c2_d2 < 4.294967296E+9) {
        if (c2_d2 >= 0.0) {
          c2_u1 = (uint32_T)c2_d2;
        } else {
          c2_u1 = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 390, 14);
        }
      } else if (c2_d2 >= 4.294967296E+9) {
        c2_u1 = MAX_uint32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 390, 14);
      } else {
        c2_u1 = 0U;
      }

      c2_r = (c2_r ^ c2_r >> 30U) * 1812433253U + c2_u1;
      chartInstance->c2_state[(int32_T)c2_b_mti - 1] = c2_r;
    }

    chartInstance->c2_state[624] = 624U;
  } else if (c2_method2 == 5U) {
    c2_c_st.site = &c2_j_emlrtRSI;
    c2_b_varargin_1 = chartInstance->c2_seed;
    if (!chartInstance->c2_b_state_not_empty) {
      for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
        chartInstance->c2_b_state[c2_i7] = 362436069U + 158852560U * (uint32_T)
          c2_i7;
      }

      chartInstance->c2_b_state_not_empty = true;
    }

    c2_arg3 = c2_b_varargin_1;
    c2_b_s = c2_arg3;
    chartInstance->c2_b_state[0] = 362436069U;
    chartInstance->c2_b_state[1] = c2_b_s;
    if ((real_T)chartInstance->c2_b_state[1] == 0.0) {
      chartInstance->c2_b_state[1] = 521288629U;
    }
  } else if (c2_method2 == 4U) {
    c2_c_st.site = &c2_k_emlrtRSI;
    c2_c_varargin_1 = chartInstance->c2_seed;
    if (!chartInstance->c2_c_state_not_empty) {
      chartInstance->c2_c_state = 1144108930U;
      chartInstance->c2_c_state_not_empty = true;
    }

    c2_d_st.site = &c2_r_emlrtRSI;
    c2_c_arg3 = c2_c_varargin_1;
    c2_e_st.site = &c2_s_emlrtRSI;
    c2_c_seed = c2_c_arg3;
    c2_b_r = c2_c_seed >> 16U;
    c2_b_t = c2_c_seed & 32768U;
    c2_d_state = c2_b_r << 16U;
    c2_d_state = c2_c_seed - c2_d_state;
    c2_d_state -= c2_b_t;
    c2_d_state <<= 16U;
    c2_d_state += c2_b_t;
    c2_d_state += c2_b_r;
    if ((real_T)c2_d_state < 1.0) {
      c2_d_state = 1144108930U;
    } else if (c2_d_state > 2147483646U) {
      c2_d_state = 2147483646U;
    }

    chartInstance->c2_c_state = c2_d_state;
  } else {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 22),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 22),
                  false);
    sf_mex_call(&c2_b_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_b_y)));
  }

  c2_b_st.site = &c2_b_emlrtRSI;
  c2_c_r = &c2_b_st;
  c2_d1 = c2_rand(chartInstance, c2_c_r);
  c2_c_st.site = &c2_b_emlrtRSI;
  c2_r1 = &c2_c_st;
  c2_d3 = c2_rand(chartInstance, c2_r1);
  c2_d_st.site = &c2_b_emlrtRSI;
  c2_r2 = &c2_d_st;
  c2_d4 = c2_rand(chartInstance, c2_r2);
  c2_e_st.site = &c2_b_emlrtRSI;
  c2_r3 = &c2_e_st;
  c2_d5 = c2_rand(chartInstance, c2_r3);
  c2_f_st.site = &c2_b_emlrtRSI;
  c2_r4 = &c2_f_st;
  c2_d6 = c2_rand(chartInstance, c2_r4);
  c2_uc[0] = c2_d1 * 0.1 + -0.05;
  c2_uc[1] = c2_d3 * 0.1 + -0.05;
  c2_uc[2] = c2_d4 * 0.1 + -0.05;
  c2_uc[3] = c2_d5 * 0.1 + -0.05;
  c2_uc[4] = c2_d6 * 0.1 + -0.05;
  sf_mex_printf("%s =\\n", "uc");
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_uc, 0, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(&c2_f_st, NULL, "disp", 0U, 1U, 14, c2_c_y);
  for (c2_i8 = 0; c2_i8 < 5; c2_i8++) {
    c2_uc[c2_i8]++;
  }

  c2_chardonnay.m_d *= c2_uc[0];
  c2_chardonnay.m_c *= c2_uc[1];
  c2_chardonnay.l *= c2_uc[2];
  c2_chardonnay.l_d *= c2_uc[3];
  c2_chardonnay.J *= c2_uc[4];
  c2_chardonnay.C_D = 0.1;
  c2_chardonnay.g = 10.0;
  c2_m_d = c2_chardonnay.m_d;
  c2_m_c = c2_chardonnay.m_c;
  c2_l = c2_chardonnay.l;
  c2_l_d = c2_chardonnay.l_d;
  c2_J = c2_chardonnay.J;
  c2_C_D = c2_chardonnay.C_D;
  c2_g = c2_chardonnay.g;
  c2_x_1 = c2_b_x[2];
  c2_x_2 = c2_b_x[3];
  c2_x_3 = c2_b_x[4];
  c2_x_4 = c2_b_x[5];
  c2_x_5 = c2_b_x[6];
  c2_x_6 = c2_b_x[7];
  c2_u_1 = c2_b_u[0];
  c2_u_2 = c2_b_u[1];
  c2_w_1 = c2_b_w[0];
  c2_w_2 = c2_b_w[1];
  c2_g_x = c2_x_3 + c2_x_5;
  c2_h_x = c2_g_x;
  c2_h_x = muDoubleScalarSin(c2_h_x);
  c2_i_x = c2_x_3 + c2_x_5;
  c2_j_x = c2_i_x;
  c2_j_x = muDoubleScalarCos(c2_j_x);
  c2_k_x = c2_x_3 + c2_x_5;
  c2_l_x = c2_k_x;
  c2_l_x = muDoubleScalarCos(c2_l_x);
  c2_m_x = c2_x_3 + c2_x_5;
  c2_n_x = c2_m_x;
  c2_n_x = muDoubleScalarCos(c2_n_x);
  c2_o_x = c2_x_3 + c2_x_5;
  c2_p_x = c2_o_x;
  c2_p_x = muDoubleScalarSin(c2_p_x);
  c2_q_x = c2_x_3 + c2_x_5;
  c2_r_x = c2_q_x;
  c2_r_x = muDoubleScalarSin(c2_r_x);
  c2_s_x = c2_x_3 + c2_x_5;
  c2_t_x = c2_s_x;
  c2_t_x = muDoubleScalarSin(c2_t_x);
  c2_u_x = c2_x_3 + c2_x_5;
  c2_v_x = c2_u_x;
  c2_v_x = muDoubleScalarCos(c2_v_x);
  c2_Pi[0] = c2_m_d;
  c2_Pi[7] = 0.0;
  c2_Pi[14] = 0.0;
  c2_Pi[21] = 0.0;
  c2_Pi[28] = 0.0;
  c2_Pi[35] = 0.0;
  c2_Pi[42] = c2_h_x;
  c2_Pi[1] = 0.0;
  c2_Pi[8] = c2_m_d;
  c2_Pi[15] = 0.0;
  c2_Pi[22] = 0.0;
  c2_Pi[29] = 0.0;
  c2_Pi[36] = 0.0;
  c2_Pi[43] = c2_j_x;
  c2_Pi[2] = c2_m_c;
  c2_Pi[9] = 0.0;
  c2_Pi[16] = 0.0;
  c2_Pi[23] = -c2_m_c * c2_l * c2_l_x;
  c2_Pi[30] = 0.0;
  c2_Pi[37] = -c2_m_c * c2_l * c2_n_x;
  c2_Pi[44] = -c2_p_x;
  c2_Pi[3] = 0.0;
  c2_Pi[10] = c2_m_c;
  c2_Pi[17] = 0.0;
  c2_Pi[24] = c2_m_c * c2_l * c2_r_x;
  c2_Pi[31] = 0.0;
  c2_Pi[38] = c2_m_c * c2_l * c2_t_x;
  c2_Pi[45] = -c2_v_x;
  c2_Pi[4] = 0.0;
  c2_Pi[11] = 0.0;
  c2_Pi[18] = 0.0;
  c2_Pi[25] = c2_J;
  c2_Pi[32] = 0.0;
  c2_Pi[39] = 0.0;
  c2_Pi[46] = 0.0;
  c2_i9 = 0;
  for (c2_i10 = 0; c2_i10 < 7; c2_i10++) {
    c2_Pi[c2_i9 + 5] = c2_dv[c2_i10];
    c2_i9 += 7;
  }

  c2_i11 = 0;
  for (c2_i12 = 0; c2_i12 < 7; c2_i12++) {
    c2_Pi[c2_i11 + 6] = c2_dv1[c2_i12];
    c2_i11 += 7;
  }

  c2_g_st.site = &c2_c_emlrtRSI;
  c2_a = c2_x_4 + c2_x_6;
  c2_b_a = c2_a;
  c2_c_a = c2_b_a;
  c2_d_a = c2_c_a;
  c2_e_a = c2_d_a;
  c2_c = c2_e_a * c2_e_a;
  c2_g_st.site = &c2_d_emlrtRSI;
  c2_f_a = c2_x_4 + c2_x_6;
  c2_g_a = c2_f_a;
  c2_h_a = c2_g_a;
  c2_i_a = c2_h_a;
  c2_j_a = c2_i_a;
  c2_b_c = c2_j_a * c2_j_a;
  c2_w_x = c2_x_3;
  c2_x_x = c2_w_x;
  c2_x_x = muDoubleScalarSin(c2_x_x);
  c2_y_x = c2_x_3;
  c2_ab_x = c2_y_x;
  c2_ab_x = muDoubleScalarCos(c2_ab_x);
  c2_bb_x = c2_x_3 + c2_x_5;
  c2_cb_x = c2_bb_x;
  c2_cb_x = muDoubleScalarSin(c2_cb_x);
  c2_db_x = c2_x_3 + c2_x_5;
  c2_eb_x = c2_db_x;
  c2_eb_x = muDoubleScalarCos(c2_eb_x);
  c2_h[0] = -(c2_u_1 + c2_u_2) * c2_x_x - c2_C_D * (c2_x_1 - c2_w_1);
  c2_h[1] = (c2_m_d * c2_g - (c2_u_1 + c2_u_2) * c2_ab_x) - c2_C_D * (c2_x_2 -
    c2_w_2);
  c2_h[2] = -c2_m_c * c2_l * c2_c * c2_cb_x;
  c2_h[3] = c2_m_c * c2_g - c2_m_c * c2_l * c2_b_c * c2_eb_x;
  c2_h[4] = (c2_u_2 - c2_u_1) * c2_l_d;
  c2_h[5] = c2_x_4;
  c2_h[6] = c2_x_6;
  c2_g_st.site = &c2_e_emlrtRSI;
  c2_mldivide(chartInstance, &c2_g_st, c2_Pi, c2_h, c2_fp);
  for (c2_i13 = 0; c2_i13 < 6; c2_i13++) {
    c2_f[c2_i13] = c2_fp[c2_i13];
  }

  (*chartInstance->c2_xdot)[0] = c2_x_1;
  (*chartInstance->c2_xdot)[1] = c2_x_2;
  for (c2_i14 = 0; c2_i14 < 6; c2_i14++) {
    (*chartInstance->c2_xdot)[c2_i14 + 2] = c2_f[c2_i14];
  }

  c2_do_animation_call_c2_chardonnay_simulinkR2018a(chartInstance);
  for (c2_i15 = 0; c2_i15 < 8; c2_i15++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U,
                      (*chartInstance->c2_xdot)[c2_i15]);
  }
}

static void ext_mode_exec_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_update_jit_animation_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(7, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", *chartInstance->c2_xdot, 0, 0U, 1U,
    0U, 1, 8), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_c_y = NULL;
  if (!chartInstance->c2_method_not_empty) {
    sf_mex_assign(&c2_c_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_c_y, sf_mex_create("y", &chartInstance->c2_method, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_d_y = NULL;
  if (!chartInstance->c2_method_not_empty) {
    sf_mex_assign(&c2_d_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_d_y, sf_mex_create("y", &chartInstance->c2_seed, 7, 0U, 0U,
      0U, 0), false);
  }

  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_e_y = NULL;
  if (!chartInstance->c2_method_not_empty) {
    sf_mex_assign(&c2_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_e_y, sf_mex_create("y", &chartInstance->c2_c_state, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_f_y = NULL;
  if (!chartInstance->c2_state_not_empty) {
    sf_mex_assign(&c2_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_f_y, sf_mex_create("y", chartInstance->c2_state, 7, 0U, 1U,
      0U, 1, 625), false);
  }

  sf_mex_setcell(c2_y, 4, c2_f_y);
  c2_g_y = NULL;
  if (!chartInstance->c2_b_state_not_empty) {
    sf_mex_assign(&c2_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_g_y, sf_mex_create("y", chartInstance->c2_b_state, 7, 0U,
      1U, 0U, 1, 2), false);
  }

  sf_mex_setcell(c2_y, 5, c2_g_y);
  c2_h_y = NULL;
  sf_mex_assign(&c2_h_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_chardonnay_simulinkR2018a, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c2_y, 6, c2_h_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, const mxArray
   *c2_st)
{
  const mxArray *c2_b_u;
  real_T c2_dv[8];
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  uint32_T c2_b_uv[625];
  uint32_T c2_uv1[2];
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_b_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_b_u, 0)),
                      "xdot", c2_dv);
  for (c2_i = 0; c2_i < 8; c2_i++) {
    (*chartInstance->c2_xdot)[c2_i] = c2_dv[c2_i];
  }

  chartInstance->c2_method = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_b_u, 1)), "method", &chartInstance->c2_method_not_empty);
  chartInstance->c2_seed = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_b_u, 2)), "seed", &chartInstance->c2_seed_not_empty);
  chartInstance->c2_c_state = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_b_u, 3)), "state", &chartInstance->c2_c_state_not_empty);
  c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_b_u, 4)),
                        "state", &chartInstance->c2_state_not_empty, c2_b_uv);
  for (c2_i1 = 0; c2_i1 < 625; c2_i1++) {
    chartInstance->c2_state[c2_i1] = c2_b_uv[c2_i1];
  }

  c2_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_b_u, 5)),
                        "state", &chartInstance->c2_b_state_not_empty, c2_uv1);
  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    chartInstance->c2_b_state[c2_i2] = c2_uv1[c2_i2];
  }

  chartInstance->c2_is_active_c2_chardonnay_simulinkR2018a =
    c2_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_b_u, 6)),
    "is_active_c2_chardonnay_simulinkR2018a");
  sf_mex_destroy(&c2_b_u);
  sf_mex_destroy(&c2_st);
}

static void initSimStructsc2_chardonnay_simulinkR2018a
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c2_chardonnay_simulinkR2018a_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static real_T c2_now(SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  time_t c2_rawtime;
  c2_sxaDueAh1f53T9ESYg9Uc4E c2_timeinfoDouble;
  struct tm c2_timeinfo;
  real_T c2_cDaysMonthWise[12];
  real_T c2_a;
  real_T c2_b_a;
  real_T c2_b_r;
  real_T c2_b_x;
  real_T c2_c_a;
  real_T c2_c_r;
  real_T c2_c_x;
  real_T c2_dDateNum;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_l_x;
  real_T c2_m_x;
  real_T c2_n_x;
  real_T c2_o_x;
  real_T c2_p_x;
  real_T c2_q_x;
  real_T c2_r;
  real_T c2_r_x;
  real_T c2_s_x;
  real_T c2_t_x;
  real_T c2_u_x;
  real_T c2_v_x;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_b_rEQ0;
  boolean_T c2_c_b;
  boolean_T c2_c_rEQ0;
  boolean_T c2_d_b;
  boolean_T c2_e_b;
  boolean_T c2_f_b;
  boolean_T c2_guard1 = false;
  boolean_T c2_rEQ0;
  (void)chartInstance;
  c2_cDaysMonthWise[0] = 0.0;
  c2_cDaysMonthWise[1] = 31.0;
  c2_cDaysMonthWise[2] = 59.0;
  c2_cDaysMonthWise[3] = 90.0;
  c2_cDaysMonthWise[4] = 120.0;
  c2_cDaysMonthWise[5] = 151.0;
  c2_cDaysMonthWise[6] = 181.0;
  c2_cDaysMonthWise[7] = 212.0;
  c2_cDaysMonthWise[8] = 243.0;
  c2_cDaysMonthWise[9] = 273.0;
  c2_cDaysMonthWise[10] = 304.0;
  c2_cDaysMonthWise[11] = 334.0;
  time(&c2_rawtime);
  c2_timeinfo = *localtime(&c2_rawtime);
  c2_timeinfo.tm_year += 1900;
  c2_timeinfo.tm_mon++;
  c2_timeinfoDouble.tm_min = (real_T)c2_timeinfo.tm_min;
  c2_timeinfoDouble.tm_sec = (real_T)c2_timeinfo.tm_sec;
  c2_timeinfoDouble.tm_hour = (real_T)c2_timeinfo.tm_hour;
  c2_timeinfoDouble.tm_mday = (real_T)c2_timeinfo.tm_mday;
  c2_timeinfoDouble.tm_mon = (real_T)c2_timeinfo.tm_mon;
  c2_timeinfoDouble.tm_year = (real_T)c2_timeinfo.tm_year;
  c2_b_x = c2_timeinfoDouble.tm_year / 4.0;
  c2_c_x = c2_b_x;
  c2_c_x = muDoubleScalarCeil(c2_c_x);
  c2_d_x = c2_timeinfoDouble.tm_year / 100.0;
  c2_e_x = c2_d_x;
  c2_e_x = muDoubleScalarCeil(c2_e_x);
  c2_f_x = c2_timeinfoDouble.tm_year / 400.0;
  c2_g_x = c2_f_x;
  c2_g_x = muDoubleScalarCeil(c2_g_x);
  c2_dDateNum = ((((365.0 * c2_timeinfoDouble.tm_year + c2_c_x) - c2_e_x) +
                  c2_g_x) + c2_cDaysMonthWise[(int32_T)c2_timeinfoDouble.tm_mon
                 - 1]) + c2_timeinfoDouble.tm_mday;
  if (c2_timeinfoDouble.tm_mon > 2.0) {
    c2_h_x = c2_timeinfoDouble.tm_year;
    c2_a = c2_h_x;
    c2_i_x = c2_a;
    c2_j_x = c2_i_x;
    c2_k_x = c2_j_x;
    c2_b = muDoubleScalarIsNaN(c2_k_x);
    if (c2_b) {
      c2_r = rtNaN;
    } else {
      c2_l_x = c2_j_x;
      c2_b_b = muDoubleScalarIsInf(c2_l_x);
      if (c2_b_b) {
        c2_r = rtNaN;
      } else if (c2_j_x == 0.0) {
        c2_r = 0.0;
      } else {
        c2_r = muDoubleScalarRem(c2_j_x, 4.0);
        c2_rEQ0 = (c2_r == 0.0);
        if (c2_rEQ0) {
          c2_r = 0.0;
        } else if (c2_j_x < 0.0) {
          c2_r += 4.0;
        }
      }
    }

    c2_guard1 = false;
    if (c2_r == 0.0) {
      c2_m_x = c2_timeinfoDouble.tm_year;
      c2_b_a = c2_m_x;
      c2_n_x = c2_b_a;
      c2_p_x = c2_n_x;
      c2_q_x = c2_p_x;
      c2_c_b = muDoubleScalarIsNaN(c2_q_x);
      if (c2_c_b) {
        c2_b_r = rtNaN;
      } else {
        c2_u_x = c2_p_x;
        c2_e_b = muDoubleScalarIsInf(c2_u_x);
        if (c2_e_b) {
          c2_b_r = rtNaN;
        } else if (c2_p_x == 0.0) {
          c2_b_r = 0.0;
        } else {
          c2_b_r = muDoubleScalarRem(c2_p_x, 100.0);
          c2_b_rEQ0 = (c2_b_r == 0.0);
          if (c2_b_rEQ0) {
            c2_b_r = 0.0;
          } else if (c2_p_x < 0.0) {
            c2_b_r += 100.0;
          }
        }
      }

      if (c2_b_r != 0.0) {
        c2_dDateNum++;
      } else {
        c2_guard1 = true;
      }
    } else {
      c2_guard1 = true;
    }

    if (c2_guard1) {
      c2_o_x = c2_timeinfoDouble.tm_year;
      c2_c_a = c2_o_x;
      c2_r_x = c2_c_a;
      c2_s_x = c2_r_x;
      c2_t_x = c2_s_x;
      c2_d_b = muDoubleScalarIsNaN(c2_t_x);
      if (c2_d_b) {
        c2_c_r = rtNaN;
      } else {
        c2_v_x = c2_s_x;
        c2_f_b = muDoubleScalarIsInf(c2_v_x);
        if (c2_f_b) {
          c2_c_r = rtNaN;
        } else if (c2_s_x == 0.0) {
          c2_c_r = 0.0;
        } else {
          c2_c_r = muDoubleScalarRem(c2_s_x, 400.0);
          c2_c_rEQ0 = (c2_c_r == 0.0);
          if (c2_c_rEQ0) {
            c2_c_r = 0.0;
          } else if (c2_s_x < 0.0) {
            c2_c_r += 400.0;
          }
        }
      }

      if (c2_c_r == 0.0) {
        c2_dDateNum++;
      }
    }
  }

  c2_dDateNum += ((c2_timeinfoDouble.tm_hour * 3600.0 + c2_timeinfoDouble.tm_min
                   * 60.0) + c2_timeinfoDouble.tm_sec) / 86400.0;
  return c2_dDateNum;
}

static real_T c2_mod(SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance,
                     real_T c2_b_x)
{
  real_T c2_a;
  real_T c2_c_x;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_r;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_rEQ0;
  (void)chartInstance;
  c2_a = c2_b_x;
  c2_c_x = c2_a;
  c2_d_x = c2_c_x;
  c2_e_x = c2_d_x;
  c2_b = muDoubleScalarIsNaN(c2_e_x);
  if (c2_b) {
    c2_r = rtNaN;
  } else {
    c2_f_x = c2_d_x;
    c2_b_b = muDoubleScalarIsInf(c2_f_x);
    if (c2_b_b) {
      c2_r = rtNaN;
    } else if (c2_d_x == 0.0) {
      c2_r = 0.0;
    } else {
      c2_r = muDoubleScalarRem(c2_d_x, 2.147483647E+9);
      c2_rEQ0 = (c2_r == 0.0);
      if (c2_rEQ0) {
        c2_r = 0.0;
      } else if (c2_d_x < 0.0) {
        c2_r += 2.147483647E+9;
      }
    }
  }

  return c2_r;
}

static real_T c2_rand(SFc2_chardonnay_simulinkR2018aInstanceStruct
                      *chartInstance, const emlrtStack *c2_sp)
{
  static char_T c2_cv[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  real_T c2_b_j;
  real_T c2_b_r;
  real_T c2_c_kk;
  real_T c2_c_r;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d_r;
  real_T c2_e_r;
  real_T c2_r;
  int32_T c2_b_a;
  int32_T c2_b_kk;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_j;
  int32_T c2_k;
  int32_T c2_kk;
  uint32_T c2_c_u[2];
  uint32_T c2_a;
  uint32_T c2_b;
  uint32_T c2_b_u;
  uint32_T c2_b_y;
  uint32_T c2_c_y;
  uint32_T c2_d_state;
  uint32_T c2_d_y;
  uint32_T c2_e_state;
  uint32_T c2_e_y;
  uint32_T c2_f_state;
  uint32_T c2_f_y;
  uint32_T c2_g_state;
  uint32_T c2_g_y;
  uint32_T c2_h_state;
  uint32_T c2_hi;
  uint32_T c2_icng;
  uint32_T c2_jsr;
  uint32_T c2_lo;
  uint32_T c2_mti;
  uint32_T c2_s;
  uint32_T c2_test1;
  uint32_T c2_test2;
  uint32_T c2_u1;
  uint32_T c2_ui;
  uint32_T c2_y;
  boolean_T c2_b_isvalid;
  boolean_T c2_exitg2;
  boolean_T c2_isvalid;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_st.site = &c2_t_emlrtRSI;
  if (!chartInstance->c2_method_not_empty) {
    chartInstance->c2_method = 7U;
    chartInstance->c2_method_not_empty = true;
  }

  if (chartInstance->c2_method == 4U) {
    c2_b_st.site = &c2_u_emlrtRSI;
    if (!chartInstance->c2_c_state_not_empty) {
      chartInstance->c2_c_state = 1144108930U;
      chartInstance->c2_c_state_not_empty = true;
    }

    c2_d_state = chartInstance->c2_c_state;
    c2_e_state = c2_d_state;
    c2_f_state = c2_e_state;
    c2_g_state = c2_f_state;
    c2_s = c2_g_state;
    c2_hi = c2_s / 127773U;
    c2_lo = c2_s - c2_hi * 127773U;
    c2_test1 = 16807U * c2_lo;
    c2_test2 = 2836U * c2_hi;
    c2_a = c2_test1;
    c2_b = c2_test2;
    if (c2_a < c2_b) {
      c2_h_state = c2_b - c2_a;
      c2_h_state = ~c2_h_state;
      c2_h_state &= 2147483647U;
    } else {
      c2_h_state = c2_a - c2_b;
    }

    c2_c_r = (real_T)c2_h_state * 4.6566128752457969E-10;
    c2_g_state = c2_h_state;
    c2_d1 = c2_c_r;
    c2_e_state = c2_g_state;
    c2_d_r = c2_d1;
    c2_r = c2_d_r;
    chartInstance->c2_c_state = c2_e_state;
  } else if (chartInstance->c2_method == 5U) {
    c2_b_st.site = &c2_v_emlrtRSI;
    if (!chartInstance->c2_b_state_not_empty) {
      for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
        chartInstance->c2_b_state[c2_i1] = 362436069U + 158852560U * (uint32_T)
          c2_i1;
      }

      chartInstance->c2_b_state_not_empty = true;
    }

    c2_c_st.site = &c2_x_emlrtRSI;
    c2_d_st.site = &c2_y_emlrtRSI;
    c2_icng = chartInstance->c2_b_state[0];
    c2_jsr = chartInstance->c2_b_state[1];
    c2_b_u = c2_jsr;
    c2_u1 = c2_icng;
    c2_u1 = 69069U * c2_u1 + 1234567U;
    c2_b_u ^= c2_b_u << 13;
    c2_b_u ^= c2_b_u >> 17;
    c2_b_u ^= c2_b_u << 5;
    c2_ui = c2_u1 + c2_b_u;
    chartInstance->c2_b_state[0] = c2_u1;
    chartInstance->c2_b_state[1] = c2_b_u;
    c2_b_r = (real_T)c2_ui * 2.328306436538696E-10;
    c2_d = c2_b_r;
    c2_r = c2_d;
  } else {
    c2_b_st.site = &c2_w_emlrtRSI;
    if (!chartInstance->c2_state_not_empty) {
      for (c2_i = 0; c2_i < 625; c2_i++) {
        chartInstance->c2_state[c2_i] = c2_uv[c2_i];
      }

      chartInstance->c2_state_not_empty = true;
    }

    c2_c_st.site = &c2_bb_emlrtRSI;
    c2_d_st.site = &c2_cb_emlrtRSI;

    /* ========================= COPYRIGHT NOTICE ============================ */
    /*  This is a uniform (0,1) pseudorandom number generator based on:        */
    /*                                                                         */
    /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
    /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
    /*                                                                         */
    /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
    /*  All rights reserved.                                                   */
    /*                                                                         */
    /*  Redistribution and use in source and binary forms, with or without     */
    /*  modification, are permitted provided that the following conditions     */
    /*  are met:                                                               */
    /*                                                                         */
    /*    1. Redistributions of source code must retain the above copyright    */
    /*       notice, this list of conditions and the following disclaimer.     */
    /*                                                                         */
    /*    2. Redistributions in binary form must reproduce the above copyright */
    /*       notice, this list of conditions and the following disclaimer      */
    /*       in the documentation and/or other materials provided with the     */
    /*       distribution.                                                     */
    /*                                                                         */
    /*    3. The names of its contributors may not be used to endorse or       */
    /*       promote products derived from this software without specific      */
    /*       prior written permission.                                         */
    /*                                                                         */
    /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
    /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
    /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
    /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
    /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
    /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
    /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
    /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
    /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
    /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
    /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
    /*                                                                         */
    /* =============================   END   ================================= */
    do {
      c2_exitg1 = 0;
      for (c2_j = 0; c2_j < 2; c2_j++) {
        c2_b_j = 1.0 + (real_T)c2_j;
        c2_mti = chartInstance->c2_state[624] + 1U;
        if ((real_T)c2_mti >= 625.0) {
          for (c2_kk = 0; c2_kk < 227; c2_kk++) {
            c2_c_kk = 1.0 + (real_T)c2_kk;
            c2_y = (chartInstance->c2_state[(int32_T)c2_c_kk - 1] & 2147483648U)
              | (chartInstance->c2_state[(int32_T)(c2_c_kk + 1.0) - 1] &
                 2147483647U);
            c2_b_y = c2_y;
            c2_d_y = c2_b_y;
            if ((c2_d_y & 1U) == 0U) {
              c2_d_y >>= 1U;
            } else {
              c2_d_y = c2_d_y >> 1U ^ 2567483615U;
            }

            chartInstance->c2_state[(int32_T)c2_c_kk - 1] =
              chartInstance->c2_state[(int32_T)(c2_c_kk + 397.0) - 1] ^ c2_d_y;
          }

          for (c2_b_kk = 0; c2_b_kk < 396; c2_b_kk++) {
            c2_c_kk = 228.0 + (real_T)c2_b_kk;
            c2_y = (chartInstance->c2_state[(int32_T)c2_c_kk - 1] & 2147483648U)
              | (chartInstance->c2_state[(int32_T)(c2_c_kk + 1.0) - 1] &
                 2147483647U);
            c2_f_y = c2_y;
            c2_g_y = c2_f_y;
            if ((c2_g_y & 1U) == 0U) {
              c2_g_y >>= 1U;
            } else {
              c2_g_y = c2_g_y >> 1U ^ 2567483615U;
            }

            chartInstance->c2_state[(int32_T)c2_c_kk - 1] =
              chartInstance->c2_state[(int32_T)((c2_c_kk + 1.0) - 228.0) - 1] ^
              c2_g_y;
          }

          c2_y = (chartInstance->c2_state[623] & 2147483648U) |
            (chartInstance->c2_state[0] & 2147483647U);
          c2_c_y = c2_y;
          c2_e_y = c2_c_y;
          if ((c2_e_y & 1U) == 0U) {
            c2_e_y >>= 1U;
          } else {
            c2_e_y = c2_e_y >> 1U ^ 2567483615U;
          }

          chartInstance->c2_state[623] = chartInstance->c2_state[396] ^ c2_e_y;
          c2_mti = 1U;
        }

        c2_y = chartInstance->c2_state[(int32_T)c2_mti - 1];
        chartInstance->c2_state[624] = c2_mti;
        c2_y ^= c2_y >> 11U;
        c2_y ^= c2_y << 7U & 2636928640U;
        c2_y ^= c2_y << 15U & 4022730752U;
        c2_y ^= c2_y >> 18U;
        c2_c_u[(int32_T)c2_b_j - 1] = c2_y;
      }

      c2_c_u[0] >>= 5U;
      c2_c_u[1] >>= 6U;
      c2_e_r = 1.1102230246251565E-16 * ((real_T)c2_c_u[0] * 6.7108864E+7 +
        (real_T)c2_c_u[1]);
      if (c2_e_r == 0.0) {
        if (((real_T)chartInstance->c2_state[624] >= 1.0) && ((real_T)
             chartInstance->c2_state[624] < 625.0)) {
          c2_isvalid = true;
        } else {
          c2_isvalid = false;
        }

        c2_b_isvalid = c2_isvalid;
        if (c2_isvalid) {
          c2_b_isvalid = false;
          c2_k = 0;
          c2_exitg2 = false;
          while ((!c2_exitg2) && (c2_k + 1 < 625)) {
            if ((real_T)chartInstance->c2_state[c2_k] == 0.0) {
              c2_b_a = c2_k + 1;
              c2_k = c2_b_a;
            } else {
              c2_b_isvalid = true;
              c2_exitg2 = true;
            }
          }
        }

        if (!c2_b_isvalid) {
          c2_h_y = NULL;
          sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1,
            37), false);
          c2_i_y = NULL;
          sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1,
            37), false);
          sf_mex_call(&c2_d_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_h_y, 14,
                      sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_d_st, NULL, "message", 1U, 1U, 14, c2_i_y)));
        }
      } else {
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);

    c2_d2 = c2_e_r;
    c2_r = c2_d2;
  }

  return c2_r;
}

static void c2_mldivide(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_A[49], real_T c2_B[7],
  real_T c2_Y[7])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_h_st;
  emlrtStack c2_i_st;
  emlrtStack c2_j_st;
  emlrtStack c2_k_st;
  emlrtStack c2_l_st;
  emlrtStack c2_m_st;
  emlrtStack c2_st;
  real_T c2_b_A[49];
  real_T c2_b_temp;
  real_T c2_b_x;
  real_T c2_b_y;
  real_T c2_c_temp;
  real_T c2_c_x;
  real_T c2_c_y;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_s;
  real_T c2_smax;
  real_T c2_temp;
  real_T c2_y;
  real_T c2_yjy;
  real_T c2_z;
  int32_T c2_ipiv[7];
  int32_T c2_a;
  int32_T c2_b;
  int32_T c2_b_a;
  int32_T c2_b_b;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_ia0;
  int32_T c2_b_info;
  int32_T c2_b_ix;
  int32_T c2_b_ix0;
  int32_T c2_b_iy0;
  int32_T c2_b_j;
  int32_T c2_b_k;
  int32_T c2_b_kAcol;
  int32_T c2_b_m;
  int32_T c2_b_n;
  int32_T c2_c;
  int32_T c2_c_a;
  int32_T c2_c_b;
  int32_T c2_c_c;
  int32_T c2_c_i;
  int32_T c2_c_ia0;
  int32_T c2_c_info;
  int32_T c2_c_ix;
  int32_T c2_c_ix0;
  int32_T c2_c_iy0;
  int32_T c2_c_j;
  int32_T c2_c_k;
  int32_T c2_c_m;
  int32_T c2_c_n;
  int32_T c2_d_a;
  int32_T c2_d_b;
  int32_T c2_d_c;
  int32_T c2_d_i;
  int32_T c2_d_ia0;
  int32_T c2_d_info;
  int32_T c2_d_ix0;
  int32_T c2_d_iy0;
  int32_T c2_d_k;
  int32_T c2_d_m;
  int32_T c2_d_n;
  int32_T c2_e_a;
  int32_T c2_e_b;
  int32_T c2_e_c;
  int32_T c2_e_i;
  int32_T c2_e_ix0;
  int32_T c2_e_iy0;
  int32_T c2_e_k;
  int32_T c2_e_n;
  int32_T c2_f_a;
  int32_T c2_f_b;
  int32_T c2_f_c;
  int32_T c2_f_i;
  int32_T c2_f_ix0;
  int32_T c2_f_iy0;
  int32_T c2_f_n;
  int32_T c2_g_a;
  int32_T c2_g_b;
  int32_T c2_g_c;
  int32_T c2_g_i;
  int32_T c2_g_ix0;
  int32_T c2_h_a;
  int32_T c2_h_b;
  int32_T c2_h_ix0;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i_a;
  int32_T c2_i_b;
  int32_T c2_ia0;
  int32_T c2_ijA;
  int32_T c2_info;
  int32_T c2_ip;
  int32_T c2_ix;
  int32_T c2_ix0;
  int32_T c2_iy;
  int32_T c2_iy0;
  int32_T c2_j;
  int32_T c2_jA;
  int32_T c2_j_a;
  int32_T c2_j_b;
  int32_T c2_jj;
  int32_T c2_jm1;
  int32_T c2_jp1j;
  int32_T c2_jpiv;
  int32_T c2_jpiv_offset;
  int32_T c2_jprow;
  int32_T c2_jrow;
  int32_T c2_jy;
  int32_T c2_k;
  int32_T c2_kAcol;
  int32_T c2_k_a;
  int32_T c2_k_b;
  int32_T c2_l_a;
  int32_T c2_l_b;
  int32_T c2_m;
  int32_T c2_m_a;
  int32_T c2_m_b;
  int32_T c2_mmj;
  int32_T c2_n;
  int32_T c2_n_a;
  int32_T c2_n_b;
  int32_T c2_o_a;
  int32_T c2_o_b;
  int32_T c2_p_a;
  int32_T c2_p_b;
  int32_T c2_q_a;
  int32_T c2_q_b;
  int32_T c2_r_a;
  int32_T c2_r_b;
  int32_T c2_s_a;
  int32_T c2_s_b;
  int32_T c2_t_a;
  int32_T c2_t_b;
  int32_T c2_u_a;
  int32_T c2_v_a;
  int32_T c2_w_a;
  int32_T c2_x_a;
  boolean_T c2_b_overflow;
  boolean_T c2_c_overflow;
  boolean_T c2_d_overflow;
  boolean_T c2_e_overflow;
  boolean_T c2_f_overflow;
  boolean_T c2_overflow;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_jb_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_h_st.prev = &c2_g_st;
  c2_h_st.tls = c2_g_st.tls;
  c2_i_st.prev = &c2_h_st;
  c2_i_st.tls = c2_h_st.tls;
  c2_j_st.prev = &c2_i_st;
  c2_j_st.tls = c2_i_st.tls;
  c2_k_st.prev = &c2_j_st;
  c2_k_st.tls = c2_j_st.tls;
  c2_l_st.prev = &c2_k_st;
  c2_l_st.tls = c2_k_st.tls;
  c2_m_st.prev = &c2_l_st;
  c2_m_st.tls = c2_l_st.tls;
  c2_b_st.site = &c2_kb_emlrtRSI;
  c2_c_st.site = &c2_lb_emlrtRSI;
  for (c2_i = 0; c2_i < 7; c2_i++) {
    c2_Y[c2_i] = c2_B[c2_i];
  }

  c2_d_st.site = &c2_nb_emlrtRSI;
  c2_e_st.site = &c2_ob_emlrtRSI;
  c2_f_st.site = &c2_pb_emlrtRSI;
  for (c2_i1 = 0; c2_i1 < 49; c2_i1++) {
    c2_b_A[c2_i1] = c2_A[c2_i1];
  }

  c2_g_st.site = &c2_rb_emlrtRSI;
  for (c2_i2 = 0; c2_i2 < 7; c2_i2++) {
    c2_ipiv[c2_i2] = 1 + c2_i2;
  }

  c2_info = 0;
  for (c2_j = 0; c2_j < 6; c2_j++) {
    c2_b_j = 1 + c2_j;
    c2_a = c2_b_j - 1;
    c2_jm1 = c2_a;
    c2_b = c2_b_j;
    c2_mmj = 7 - c2_b;
    c2_b_a = c2_jm1;
    c2_c = c2_b_a << 3;
    c2_b_b = c2_c + 1;
    c2_jj = c2_b_b;
    c2_c_a = c2_jj + 1;
    c2_jp1j = c2_c_a;
    c2_d_a = c2_mmj + 1;
    c2_b_c = c2_d_a;
    c2_h_st.site = &c2_sb_emlrtRSI;
    c2_n = c2_b_c;
    c2_ix0 = c2_jj;
    c2_i_st.site = &c2_vb_emlrtRSI;
    c2_b_n = c2_n;
    c2_b_ix0 = c2_ix0;
    if (c2_b_n < 1) {
      c2_e_a = -1;
    } else {
      c2_e_a = 0;
      if (c2_b_n > 1) {
        c2_ix = c2_b_ix0 - 1;
        c2_b_x = c2_b_A[c2_b_ix0 - 1];
        c2_c_x = c2_b_x;
        c2_d_x = c2_c_x;
        c2_e_x = c2_d_x;
        c2_y = muDoubleScalarAbs(c2_e_x);
        c2_smax = c2_y;
        c2_j_st.site = &c2_wb_emlrtRSI;
        c2_h_b = c2_b_n;
        c2_i_b = c2_h_b;
        if (c2_i_b < 2) {
          c2_c_overflow = false;
        } else {
          c2_c_overflow = (c2_i_b > 2147483646);
        }

        if (c2_c_overflow) {
          c2_k_st.site = &c2_xb_emlrtRSI;
          c2_check_forloop_overflow_error(chartInstance, &c2_k_st, c2_c_overflow);
        }

        for (c2_d_k = 2; c2_d_k <= c2_b_n; c2_d_k++) {
          c2_o_a = c2_ix + 1;
          c2_ix = c2_o_a;
          c2_f_x = c2_b_A[c2_ix];
          c2_g_x = c2_f_x;
          c2_h_x = c2_g_x;
          c2_i_x = c2_h_x;
          c2_b_y = muDoubleScalarAbs(c2_i_x);
          c2_s = c2_b_y;
          if (c2_s > c2_smax) {
            c2_e_a = c2_d_k - 1;
            c2_smax = c2_s;
          }
        }
      }
    }

    c2_jpiv_offset = c2_e_a;
    c2_f_a = c2_jj;
    c2_e_b = c2_jpiv_offset;
    c2_jpiv = (c2_f_a + c2_e_b) - 1;
    if (c2_b_A[c2_jpiv] != 0.0) {
      if (c2_jpiv_offset != 0) {
        c2_g_a = c2_b_j;
        c2_g_b = c2_jpiv_offset;
        c2_e_c = c2_g_a + c2_g_b;
        c2_ipiv[c2_b_j - 1] = c2_e_c;
        c2_k_b = c2_jm1 + 1;
        c2_jrow = c2_k_b;
        c2_l_a = c2_jrow;
        c2_l_b = c2_jpiv_offset;
        c2_jprow = c2_l_a + c2_l_b;
        c2_c_ix0 = c2_jrow;
        c2_iy0 = c2_jprow;
        c2_e_ix0 = c2_c_ix0;
        c2_c_iy0 = c2_iy0;
        c2_b_ix = c2_e_ix0 - 1;
        c2_iy = c2_c_iy0 - 1;
        for (c2_e_k = 0; c2_e_k < 7; c2_e_k++) {
          c2_b_temp = c2_b_A[c2_b_ix];
          c2_b_A[c2_b_ix] = c2_b_A[c2_iy];
          c2_b_A[c2_iy] = c2_b_temp;
          c2_p_a = c2_b_ix + 7;
          c2_b_ix = c2_p_a;
          c2_q_a = c2_iy + 7;
          c2_iy = c2_q_a;
        }
      }

      c2_h_a = c2_mmj - 1;
      c2_d_c = c2_h_a;
      c2_j_a = c2_jp1j;
      c2_j_b = c2_d_c;
      c2_i5 = c2_j_a + c2_j_b;
      c2_h_st.site = &c2_tb_emlrtRSI;
      c2_m_a = c2_jp1j;
      c2_m_b = c2_i5;
      c2_n_a = c2_m_a;
      c2_n_b = c2_m_b;
      if (c2_n_a > c2_n_b) {
        c2_d_overflow = false;
      } else {
        c2_d_overflow = (c2_n_b > 2147483646);
      }

      if (c2_d_overflow) {
        c2_i_st.site = &c2_xb_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_i_st, c2_d_overflow);
      }

      for (c2_g_i = c2_jp1j - 1; c2_g_i < c2_i5; c2_g_i++) {
        c2_j_x = c2_b_A[c2_g_i];
        c2_c_y = c2_b_A[c2_jj - 1];
        c2_z = c2_j_x / c2_c_y;
        c2_b_A[c2_g_i] = c2_z;
      }
    } else {
      c2_info = c2_b_j;
    }

    c2_f_b = c2_b_j;
    c2_c_c = 7 - c2_f_b;
    c2_i_a = c2_jj + 7;
    c2_f_c = c2_i_a;
    c2_k_a = c2_jj + 8;
    c2_g_c = c2_k_a;
    c2_h_st.site = &c2_ub_emlrtRSI;
    c2_m = c2_mmj;
    c2_c_n = c2_c_c;
    c2_d_ix0 = c2_jp1j;
    c2_b_iy0 = c2_f_c;
    c2_ia0 = c2_g_c;
    c2_i_st.site = &c2_yb_emlrtRSI;
    c2_b_m = c2_m;
    c2_d_n = c2_c_n;
    c2_f_ix0 = c2_d_ix0;
    c2_d_iy0 = c2_b_iy0;
    c2_b_ia0 = c2_ia0;
    c2_j_st.site = &c2_ac_emlrtRSI;
    c2_c_m = c2_b_m;
    c2_e_n = c2_d_n;
    c2_g_ix0 = c2_f_ix0;
    c2_e_iy0 = c2_d_iy0;
    c2_c_ia0 = c2_b_ia0;
    c2_k_st.site = &c2_bc_emlrtRSI;
    c2_d_m = c2_c_m;
    c2_f_n = c2_e_n;
    c2_h_ix0 = c2_g_ix0;
    c2_f_iy0 = c2_e_iy0;
    c2_d_ia0 = c2_c_ia0;
    c2_r_a = c2_d_ia0 - 1;
    c2_jA = c2_r_a;
    c2_jy = c2_f_iy0;
    c2_l_st.site = &c2_cc_emlrtRSI;
    c2_o_b = c2_f_n;
    c2_p_b = c2_o_b;
    if (c2_p_b < 1) {
      c2_e_overflow = false;
    } else {
      c2_e_overflow = (c2_p_b > 2147483646);
    }

    if (c2_e_overflow) {
      c2_m_st.site = &c2_xb_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_m_st, c2_e_overflow);
    }

    for (c2_c_j = 0; c2_c_j < c2_f_n; c2_c_j++) {
      c2_yjy = c2_b_A[c2_jy - 1];
      if (c2_yjy != 0.0) {
        c2_c_temp = -c2_yjy;
        c2_c_ix = c2_h_ix0 - 1;
        c2_q_b = c2_jA + 1;
        c2_i6 = c2_q_b;
        c2_u_a = c2_d_m;
        c2_r_b = c2_jA;
        c2_i7 = c2_u_a + c2_r_b;
        c2_l_st.site = &c2_dc_emlrtRSI;
        c2_v_a = c2_i6;
        c2_s_b = c2_i7;
        c2_w_a = c2_v_a;
        c2_t_b = c2_s_b;
        if (c2_w_a > c2_t_b) {
          c2_f_overflow = false;
        } else {
          c2_f_overflow = (c2_t_b > 2147483646);
        }

        if (c2_f_overflow) {
          c2_m_st.site = &c2_xb_emlrtRSI;
          c2_check_forloop_overflow_error(chartInstance, &c2_m_st, c2_f_overflow);
        }

        for (c2_ijA = c2_i6 - 1; c2_ijA < c2_i7; c2_ijA++) {
          c2_b_A[c2_ijA] += c2_b_A[c2_c_ix] * c2_c_temp;
          c2_x_a = c2_c_ix + 1;
          c2_c_ix = c2_x_a;
        }
      }

      c2_s_a = c2_jy + 7;
      c2_jy = c2_s_a;
      c2_t_a = c2_jA + 7;
      c2_jA = c2_t_a;
    }
  }

  if (((real_T)c2_info == 0.0) && (!(c2_b_A[48] != 0.0))) {
    c2_info = 7;
  }

  c2_b_info = c2_info;
  c2_c_info = c2_b_info;
  c2_f_st.site = &c2_qb_emlrtRSI;
  c2_g_st.site = &c2_ec_emlrtRSI;
  for (c2_b_i = 0; c2_b_i < 6; c2_b_i++) {
    c2_c_i = c2_b_i;
    if (c2_ipiv[c2_c_i] != c2_c_i + 1) {
      c2_ip = c2_ipiv[c2_c_i] - 1;
      c2_temp = c2_Y[c2_c_i];
      c2_Y[c2_c_i] = c2_Y[c2_ip];
      c2_Y[c2_ip] = c2_temp;
    }
  }

  c2_h_st.site = &c2_fc_emlrtRSI;
  c2_i_st.site = &c2_hc_emlrtRSI;
  for (c2_k = 0; c2_k < 7; c2_k++) {
    c2_b_k = c2_k;
    c2_kAcol = 7 * c2_b_k - 1;
    if (c2_Y[c2_b_k] != 0.0) {
      c2_i3 = c2_b_k;
      c2_j_st.site = &c2_ic_emlrtRSI;
      c2_overflow = false;
      if (c2_overflow) {
        c2_k_st.site = &c2_xb_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_k_st, c2_overflow);
      }

      for (c2_d_i = c2_i3 + 2; c2_d_i < 8; c2_d_i++) {
        c2_Y[c2_d_i - 1] -= c2_Y[c2_b_k] * c2_b_A[c2_d_i + c2_kAcol];
      }
    }
  }

  c2_h_st.site = &c2_gc_emlrtRSI;
  c2_i_st.site = &c2_hc_emlrtRSI;
  for (c2_c_k = 6; c2_c_k >= 0; c2_c_k--) {
    c2_b_kAcol = 7 * c2_c_k;
    if (c2_Y[c2_c_k] != 0.0) {
      c2_Y[c2_c_k] /= c2_b_A[c2_c_k + c2_b_kAcol];
      c2_i4 = c2_c_k;
      c2_j_st.site = &c2_jc_emlrtRSI;
      c2_c_b = c2_i4;
      c2_d_b = c2_c_b;
      if (c2_d_b < 1) {
        c2_b_overflow = false;
      } else {
        c2_b_overflow = (c2_d_b > 2147483646);
      }

      if (c2_b_overflow) {
        c2_k_st.site = &c2_xb_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_k_st, c2_b_overflow);
      }

      for (c2_e_i = 1; c2_e_i - 1 < c2_i4; c2_e_i++) {
        c2_f_i = c2_e_i - 1;
        c2_Y[c2_f_i] -= c2_Y[c2_c_k] * c2_b_A[c2_f_i + c2_b_kAcol];
      }
    }
  }

  c2_d_info = c2_c_info;
  if ((real_T)c2_d_info > 0.0) {
    c2_d_st.site = &c2_mb_emlrtRSI;
    c2_e_st.site = &c2_kc_emlrtRSI;
    c2_warning(chartInstance, &c2_e_st);
  }
}

static void c2_check_forloop_overflow_error
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, const emlrtStack
   *c2_sp, boolean_T c2_overflow)
{
  static char_T c2_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c2_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  if (c2_overflow) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(c2_sp, &c2_d_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
  }
}

static void c2_warning(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const emlrtStack *c2_sp)
{
  static char_T c2_msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i',
    'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c2_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c2_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 7), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_msgID, 10, 0U, 1U, 0U, 2, 1, 21),
                false);
  c2_st.site = &c2_lc_emlrtRSI;
  c2_b_feval(chartInstance, &c2_st, c2_y, c2_feval(chartInstance, &c2_st, c2_b_y,
              c2_c_y));
}

static void c2_emlrt_marshallIn(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const mxArray *c2_b_xdot, const char_T *c2_identifier, real_T
  c2_y[8])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_xdot), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_b_xdot);
}

static void c2_b_emlrt_marshallIn(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[8])
{
  real_T c2_dv[8];
  int32_T c2_i;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_b_u), c2_dv, 1, 0, 0U, 1, 0U, 1, 8);
  for (c2_i = 0; c2_i < 8; c2_i++) {
    c2_y[c2_i] = c2_dv[c2_i];
  }

  sf_mex_destroy(&c2_b_u);
}

static uint32_T c2_c_emlrt_marshallIn
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, const mxArray
   *c2_b_method, const char_T *c2_identifier, boolean_T *c2_svPtr)
{
  emlrtMsgIdentifier c2_thisId;
  uint32_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_method),
    &c2_thisId, c2_svPtr);
  sf_mex_destroy(&c2_b_method);
  return c2_y;
}

static uint32_T c2_d_emlrt_marshallIn
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, const mxArray
   *c2_b_u, const emlrtMsgIdentifier *c2_parentId, boolean_T *c2_svPtr)
{
  uint32_T c2_c_u;
  uint32_T c2_y;
  (void)chartInstance;
  if (mxIsEmpty(c2_b_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_b_u), &c2_c_u, 1, 7, 0U, 0, 0U, 0);
    c2_y = c2_c_u;
  }

  sf_mex_destroy(&c2_b_u);
  return c2_y;
}

static void c2_e_emlrt_marshallIn(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const mxArray *c2_d_state, const char_T *c2_identifier,
  boolean_T *c2_svPtr, uint32_T c2_y[625])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_d_state), &c2_thisId,
                        c2_svPtr, c2_y);
  sf_mex_destroy(&c2_d_state);
}

static void c2_f_emlrt_marshallIn(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId,
  boolean_T *c2_svPtr, uint32_T c2_y[625])
{
  int32_T c2_i;
  uint32_T c2_b_uv[625];
  (void)chartInstance;
  if (mxIsEmpty(c2_b_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_b_u), c2_b_uv, 1, 7, 0U, 1, 0U, 1,
                  625);
    for (c2_i = 0; c2_i < 625; c2_i++) {
      c2_y[c2_i] = c2_b_uv[c2_i];
    }
  }

  sf_mex_destroy(&c2_b_u);
}

static void c2_g_emlrt_marshallIn(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const mxArray *c2_d_state, const char_T *c2_identifier,
  boolean_T *c2_svPtr, uint32_T c2_y[2])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_d_state), &c2_thisId,
                        c2_svPtr, c2_y);
  sf_mex_destroy(&c2_d_state);
}

static void c2_h_emlrt_marshallIn(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId,
  boolean_T *c2_svPtr, uint32_T c2_y[2])
{
  int32_T c2_i;
  uint32_T c2_b_uv[2];
  (void)chartInstance;
  if (mxIsEmpty(c2_b_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_b_u), c2_b_uv, 1, 7, 0U, 1, 0U, 1,
                  2);
    for (c2_i = 0; c2_i < 2; c2_i++) {
      c2_y[c2_i] = c2_b_uv[c2_i];
    }
  }

  sf_mex_destroy(&c2_b_u);
}

static uint8_T c2_i_emlrt_marshallIn
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, const mxArray
   *c2_b_is_active_c2_chardonnay_simulinkR2018a, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_chardonnay_simulinkR2018a), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_chardonnay_simulinkR2018a);
  return c2_y;
}

static uint8_T c2_j_emlrt_marshallIn
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, const mxArray
   *c2_b_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_c_u;
  uint8_T c2_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_b_u), &c2_c_u, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_c_u;
  sf_mex_destroy(&c2_b_u);
  return c2_y;
}

static void c2_slStringInitializeDynamicBuffers
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_chart_data_browse_helper
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance, int32_T
   c2_ssIdNumber, const mxArray **c2_mxData, uint8_T *c2_isValueTooBig)
{
  *c2_mxData = NULL;
  *c2_mxData = NULL;
  *c2_isValueTooBig = 0U;
  switch (c2_ssIdNumber) {
   case 6U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_x, 0, 0U,
      1U, 0U, 1, 8), false);
    break;

   case 4U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_u, 0, 0U,
      1U, 0U, 1, 2), false);
    break;

   case 8U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_w, 0, 0U,
      1U, 0U, 1, 2), false);
    break;

   case 5U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_xdot, 0,
      0U, 1U, 0U, 1, 8), false);
    break;
  }
}

static const mxArray *c2_feval(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0, const
  mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static void c2_b_feval(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0, const
  mxArray *c2_input1)
{
  (void)chartInstance;
  sf_mex_call(c2_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c2_input0), 14,
              sf_mex_dup(c2_input1));
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
}

static void init_dsm_address_info(SFc2_chardonnay_simulinkR2018aInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_x = (real_T (*)[8])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_u = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_w = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_xdot = (real_T (*)[8])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_chardonnay_simulinkR2018a_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3907376075U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1641279158U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4033561809U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1031486363U);
}

mxArray *sf_c2_chardonnay_simulinkR2018a_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c2_chardonnay_simulinkR2018a_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("time");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_chardonnay_simulinkR2018a_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_chardonnay_simulinkR2018a(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrtlDFPwkAUx1sCqIkhDH4AJkcDJRFwsWhCJJGYqANDk3q0V9rYXsn1IGVjZGR09GM4+nEcHR2"
    "961UtldgYiqjhksvLe83/3d2/vzxBbHcEugp0P+wKQp7GbbozAl+5MBfp3gojr2ff6yW6yXgAWd"
    "3DWlunEQEnyMHQbyPDDfrXhY/++QX9xUj/nbDO1/Pxcvo9menLEX12gT4b0Rdp5usuKYT5cucX5"
    "eX0n89fdP/83P157kBiujrXd8Wv/68Y+7+ZSF9bsIRBeA854R2Z2DuKb4/oTuQgTidyGjxME/y4"
    "ivnB8tMj5YKYEKsty4ae0mlenzdPpLIkAeWSB+K6ds/1FejYim31FAcQG/QUDJBuDJEywNYIEMg"
    "+q6x24PwaPr7LtwehznRn6+biaca5eJmlwoWf4EMrxkUrDS4w6jMU/sKcyMXez3KPUKhDvbluHi"
    "Y656EEU+HhLsEPGPMDrmJOqI7WrxzWyzU1sNoY2sHk2PCSAi+PIS83P8OLEfPDWA0vpNJoVGsAz"
    "wGz4SUFXu5DXuT/NF88E1c1F/XTnC+lVHjpJvizH/OH5ZanAo1YI6hqkqqZAOsuQmCsepYztC10"
    "S02q1AHvz9YrRgwCuw=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_chardonnay_simulinkR2018a_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sbI1NnDKRoypNBB4PiZalXF";
}

static void sf_opaque_initialize_c2_chardonnay_simulinkR2018a(void
  *chartInstanceVar)
{
  initialize_params_c2_chardonnay_simulinkR2018a
    ((SFc2_chardonnay_simulinkR2018aInstanceStruct*) chartInstanceVar);
  initialize_c2_chardonnay_simulinkR2018a
    ((SFc2_chardonnay_simulinkR2018aInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_chardonnay_simulinkR2018a(void *chartInstanceVar)
{
  enable_c2_chardonnay_simulinkR2018a
    ((SFc2_chardonnay_simulinkR2018aInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_chardonnay_simulinkR2018a(void
  *chartInstanceVar)
{
  disable_c2_chardonnay_simulinkR2018a
    ((SFc2_chardonnay_simulinkR2018aInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_chardonnay_simulinkR2018a(void
  *chartInstanceVar)
{
  sf_gateway_c2_chardonnay_simulinkR2018a
    ((SFc2_chardonnay_simulinkR2018aInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_chardonnay_simulinkR2018a
  (SimStruct* S)
{
  return get_sim_state_c2_chardonnay_simulinkR2018a
    ((SFc2_chardonnay_simulinkR2018aInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_chardonnay_simulinkR2018a(SimStruct* S,
  const mxArray *st)
{
  set_sim_state_c2_chardonnay_simulinkR2018a
    ((SFc2_chardonnay_simulinkR2018aInstanceStruct*)sf_get_chart_instance_ptr(S),
     st);
}

static void sf_opaque_cleanup_runtime_resources_c2_chardonnay_simulinkR2018a
  (void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_chardonnay_simulinkR2018aInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_chardonnay_simulinkR2018a_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_chardonnay_simulinkR2018a
      ((SFc2_chardonnay_simulinkR2018aInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_chardonnay_simulinkR2018a(void
  *chartInstanceVar)
{
  mdl_start_c2_chardonnay_simulinkR2018a
    ((SFc2_chardonnay_simulinkR2018aInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c2_chardonnay_simulinkR2018a(void
  *chartInstanceVar)
{
  mdl_terminate_c2_chardonnay_simulinkR2018a
    ((SFc2_chardonnay_simulinkR2018aInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_chardonnay_simulinkR2018a
    ((SFc2_chardonnay_simulinkR2018aInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_chardonnay_simulinkR2018a(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_chardonnay_simulinkR2018a
      ((SFc2_chardonnay_simulinkR2018aInstanceStruct*)sf_get_chart_instance_ptr
       (S));
    initSimStructsc2_chardonnay_simulinkR2018a
      ((SFc2_chardonnay_simulinkR2018aInstanceStruct*)sf_get_chart_instance_ptr
       (S));
  }
}

const char* sf_c2_chardonnay_simulinkR2018a_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [27] = {
    "eNrtWs9vG0UUXqdpoaKtckDAAUEkpIoL0KSFphUCx7/AImmi2g1RZcmMd5+9o8zObGdmnRhxqMS",
    "lxx458mdwrPgLOMJ/wLHHHjjwZnftOhsT7zhum5Za2m5md79587793ps3s3UK9U0Hf5fwePSR45",
    "zD85t4LDjJ72zaLowdyfVF58u0XXzLcXgUbBNJAuXY/zgJ4DYowSJNBa/zrsiPpbwLEriLHYRCa",
    "iu7igYRo3yvFnHXWFbf+9T1G76ImFfCDom3xdngv+yGkd5GixUqwdU1AE/7UkQ9v8ZI73gWpN4v",
    "++DuqSiw5kqBbkShcVVtRkzTkEH1ANw6V5ogC2qKvw1NNJT1gR3Jxl/VGKJFEDJKeH6ufaIaEKI",
    "6NNwJPfx3K9LIXi6s6xOpS+CTPqgNuhdbFxxyWacKn+5QTrSQlLBqwMqmt5z+bjP0cVN4wGzfEf",
    "pbkkD2QkG5tgyIRg15rnLSYVCBTtSztNuAe5GJhh0K+yDt3m+3LPogSQ+2uN2Y43dUPYhFOYqln",
    "FhNA9ghct1F7Srw7PIGBp1qEJQjNLEbKyzEFNdVU9I+asPObhTUTfjPlOuiIFG/mgkb2632wVpX",
    "I7s1l5cJY8oO2xThBvSBxfYrRJMZsIl9C7BS1GsKVIfJNpYZK+IUIyHFlgX3aH5V9jOoeGK7hZN",
    "UDjgNTBiAhzSPhj7qaFocRUqLoIwpp7KxkdPeUWyda5Bd4kLuOUYSqgAHHOvK0q5HlQkkRCNLOv",
    "Yydw9JDM4EdVQ34pV9IfeQY9vJ7ClXJhLs0OD1MDFriJNcFdW9Q1iUc8yB6mH8oDzuKMyydnYRa",
    "+JnJrBLXB88M3NSBpuYZ7GDvK9YmSl/Hb3tUz2ogHIlDfNGUoQJHSddw1JzEMIdvsfFPq9JETTS",
    "yusYXQFg1iCSU94r4RQuBzUcfL5RS7jXjLO7bZFjeCaakY7RxjfAcTY0vpqqgbgYVVXuCg8HdBJ",
    "sg/6IRQxXVGmcqAfJVO/F9fcV52n9fSFH/T2s24/DOUdwzgg3PH88hi9MsOuMnbP2zi8cfv5Mxt",
    "4CXikUCjGuOIa7mLGzmMGZ55bw+OC9n/96eM19/NPNdz67/s8fv0+zXzhivxD/bXD+Rbv1zaW0/",
    "f6wxhll1P6RpGOe/XZsXIsT+n93rP+ltK069ZVbvPLdbTEIb5VK17bpXcJ2a3F/v104frxvZMY7",
    "vL5s6ioMuDh+pVv30jWWaZMoqf1N/2tj4z03hY/zY3pynMdfnwz/djH7HifxtXiIr0XnwBN6XLe",
    "z218qngx/1P6k8Z/LvG/TDkD7wkvwuwU7PS6M9csc6oTpOIpT/FjI+LE0dGL3fjE+P7hfnIceHk",
    "zho5Hhw7TLN1tb2gfZjtN7a3O9ubFeWr2yukpat5OTFoJ1xEELAtZitNNKsmxLEu5hDdAKsYDHK",
    "crcbptrnwanRh+2+la4nonzyIvWxd8PE108eTgXXRxM4aGW0UVtHrqQvGek8DLkibMZ/88O667h",
    "vPWi9XDfS/SwDHPRwy9T+IAMH/As8kQ7cHsrX6xdud6Oqe5GLM4cr/UyB708SvXyw/PRSzfDR/f",
    "Z6EWv3Lhx9TqRhwTzWi9z0MuvqV6Kr1J+Ub686grem2d+WZ6LXnan8HM5w8/leH+4TcwuALTd1b",
    "ZZDHmCczJoD7+hIEkra+TwunLWdZotznmNOxW4wv/Qvzz7NGdmxM1qz3nOuJP6Z7v/9LI/f9y60",
    "Mk8v3SK/cieZ92HPG1+/enY1UMfpu2vRt+syj5l3oRd8/T2BpDupLuviL6fWPI33BetGv7S/9xw",
    "9+o6J2ygaLLlP7y8Lc036tEtCURN/hbxIuYTZ0IdPKm+upCJb9Pep9wT++qTldXPV08yP/0Lgn3",
    "1SA==",
    ""
  };

  static char newstr [1881] = "";
  newstr[0] = '\0';
  for (i = 0; i < 27; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_chardonnay_simulinkR2018a(SimStruct *S)
{
  const char* newstr = sf_c2_chardonnay_simulinkR2018a_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3649247262U));
  ssSetChecksum1(S,(4033033360U));
  ssSetChecksum2(S,(789985916U));
  ssSetChecksum3(S,(3268475959U));
}

static void mdlRTW_c2_chardonnay_simulinkR2018a(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_chardonnay_simulinkR2018a(SimStruct *S)
{
  SFc2_chardonnay_simulinkR2018aInstanceStruct *chartInstance;
  chartInstance = (SFc2_chardonnay_simulinkR2018aInstanceStruct *)utMalloc
    (sizeof(SFc2_chardonnay_simulinkR2018aInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_chardonnay_simulinkR2018aInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && ssGetNumContStates(ssGetRootSS(S)) > 0 &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_chardonnay_simulinkR2018a;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_chardonnay_simulinkR2018a;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c2_chardonnay_simulinkR2018a;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c2_chardonnay_simulinkR2018a;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_chardonnay_simulinkR2018a;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c2_chardonnay_simulinkR2018a;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c2_chardonnay_simulinkR2018a;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_chardonnay_simulinkR2018a;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_chardonnay_simulinkR2018a;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_chardonnay_simulinkR2018a;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_chardonnay_simulinkR2018a;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_chardonnay_simulinkR2018a;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_chardonnay_simulinkR2018a(chartInstance);
}

void c2_chardonnay_simulinkR2018a_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_chardonnay_simulinkR2018a(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_chardonnay_simulinkR2018a(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_chardonnay_simulinkR2018a(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_chardonnay_simulinkR2018a_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
