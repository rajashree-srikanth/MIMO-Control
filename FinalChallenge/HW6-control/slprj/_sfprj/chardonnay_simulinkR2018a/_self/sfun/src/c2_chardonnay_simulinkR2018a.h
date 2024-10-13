#ifndef __c2_chardonnay_simulinkR2018a_h__
#define __c2_chardonnay_simulinkR2018a_h__
#ifdef __has_include
#if __has_include(<time.h>)
#include <time.h>
#else
#error Cannot find header file <time.h> for imported type time_t.\
 Supply the missing header file or turn on Simulation Target -> Generate typedefs\
 for imported bus and enumeration types.
#endif

#else
#include <time.h>
#endif

/* Forward Declarations */
#ifndef typedef_c2_sxaDueAh1f53T9ESYg9Uc4E
#define typedef_c2_sxaDueAh1f53T9ESYg9Uc4E

typedef struct c2_tag_sxaDueAh1f53T9ESYg9Uc4E c2_sxaDueAh1f53T9ESYg9Uc4E;

#endif                                 /* typedef_c2_sxaDueAh1f53T9ESYg9Uc4E */

#ifndef typedef_c2_s6fJwCgMg2zEkgjsloeWfJE
#define typedef_c2_s6fJwCgMg2zEkgjsloeWfJE

typedef struct c2_tag_s6fJwCgMg2zEkgjsloeWfJE c2_s6fJwCgMg2zEkgjsloeWfJE;

#endif                                 /* typedef_c2_s6fJwCgMg2zEkgjsloeWfJE */

#ifndef typedef_c2_cell_0
#define typedef_c2_cell_0

typedef struct c2_tag_n3SDPft8LycMqfcEsfJVBB c2_cell_0;

#endif                                 /* typedef_c2_cell_0 */

#ifndef typedef_c2_s_wvzWMLKjXp7EJVnnMvwbTC
#define typedef_c2_s_wvzWMLKjXp7EJVnnMvwbTC

typedef struct c2_tag_wvzWMLKjXp7EJVnnMvwbTC c2_s_wvzWMLKjXp7EJVnnMvwbTC;

#endif                                 /* typedef_c2_s_wvzWMLKjXp7EJVnnMvwbTC */

/* Type Definitions */
#ifndef struct_c2_tag_sxaDueAh1f53T9ESYg9Uc4E
#define struct_c2_tag_sxaDueAh1f53T9ESYg9Uc4E

struct c2_tag_sxaDueAh1f53T9ESYg9Uc4E
{
  real_T tm_min;
  real_T tm_sec;
  real_T tm_hour;
  real_T tm_mday;
  real_T tm_mon;
  real_T tm_year;
};

#endif                                 /* struct_c2_tag_sxaDueAh1f53T9ESYg9Uc4E */

#ifndef typedef_c2_sxaDueAh1f53T9ESYg9Uc4E
#define typedef_c2_sxaDueAh1f53T9ESYg9Uc4E

typedef struct c2_tag_sxaDueAh1f53T9ESYg9Uc4E c2_sxaDueAh1f53T9ESYg9Uc4E;

#endif                                 /* typedef_c2_sxaDueAh1f53T9ESYg9Uc4E */

#ifndef struct_c2_tag_s6fJwCgMg2zEkgjsloeWfJE
#define struct_c2_tag_s6fJwCgMg2zEkgjsloeWfJE

struct c2_tag_s6fJwCgMg2zEkgjsloeWfJE
{
  real_T m_d;
  real_T m_c;
  real_T l;
  real_T l_d;
  real_T J;
  real_T C_D;
  real_T g;
};

#endif                                 /* struct_c2_tag_s6fJwCgMg2zEkgjsloeWfJE */

#ifndef typedef_c2_s6fJwCgMg2zEkgjsloeWfJE
#define typedef_c2_s6fJwCgMg2zEkgjsloeWfJE

typedef struct c2_tag_s6fJwCgMg2zEkgjsloeWfJE c2_s6fJwCgMg2zEkgjsloeWfJE;

#endif                                 /* typedef_c2_s6fJwCgMg2zEkgjsloeWfJE */

#ifndef struct_c2_tag_n3SDPft8LycMqfcEsfJVBB
#define struct_c2_tag_n3SDPft8LycMqfcEsfJVBB

struct c2_tag_n3SDPft8LycMqfcEsfJVBB
{
  char_T f1[6];
  char_T f2[6];
  char_T f3[7];
  char_T f4[7];
  char_T f5[6];
  char_T f6[7];
};

#endif                                 /* struct_c2_tag_n3SDPft8LycMqfcEsfJVBB */

#ifndef typedef_c2_cell_0
#define typedef_c2_cell_0

typedef struct c2_tag_n3SDPft8LycMqfcEsfJVBB c2_cell_0;

#endif                                 /* typedef_c2_cell_0 */

#ifndef struct_c2_tag_wvzWMLKjXp7EJVnnMvwbTC
#define struct_c2_tag_wvzWMLKjXp7EJVnnMvwbTC

struct c2_tag_wvzWMLKjXp7EJVnnMvwbTC
{
  c2_cell_0 _data;
};

#endif                                 /* struct_c2_tag_wvzWMLKjXp7EJVnnMvwbTC */

#ifndef typedef_c2_s_wvzWMLKjXp7EJVnnMvwbTC
#define typedef_c2_s_wvzWMLKjXp7EJVnnMvwbTC

typedef struct c2_tag_wvzWMLKjXp7EJVnnMvwbTC c2_s_wvzWMLKjXp7EJVnnMvwbTC;

#endif                                 /* typedef_c2_s_wvzWMLKjXp7EJVnnMvwbTC */

#ifndef typedef_SFc2_chardonnay_simulinkR2018aInstanceStruct
#define typedef_SFc2_chardonnay_simulinkR2018aInstanceStruct

typedef struct {
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_chardonnay_simulinkR2018a;
  uint8_T c2_JITStateAnimation[1];
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c2_JITTransitionAnimation[1];
  int32_T c2_sfEvent;
  int32_T c2_IsDebuggerActive;
  int32_T c2_IsSequenceViewerPresent;
  int32_T c2_SequenceViewerOptimization;
  int32_T c2_IsHeatMapPresent;
  void *c2_RuntimeVar;
  uint32_T c2_seed;
  boolean_T c2_seed_not_empty;
  uint32_T c2_method;
  boolean_T c2_method_not_empty;
  uint32_T c2_state[625];
  boolean_T c2_state_not_empty;
  uint32_T c2_b_state[2];
  boolean_T c2_b_state_not_empty;
  uint32_T c2_c_state;
  boolean_T c2_c_state_not_empty;
  uint32_T c2_mlFcnLineNumber;
  void *c2_fcnDataPtrs[29];
  char_T *c2_dataNames[29];
  uint32_T c2_numFcnVars;
  uint32_T c2_ssIds[29];
  uint32_T c2_statuses[29];
  void *c2_outMexFcns[29];
  void *c2_inMexFcns[29];
  CovrtStateflowInstance *c2_covrtInstance;
  void *c2_fEmlrtCtx;
  real_T (*c2_x)[8];
  real_T (*c2_u)[2];
  real_T (*c2_w)[2];
  real_T (*c2_xdot)[8];
} SFc2_chardonnay_simulinkR2018aInstanceStruct;

#endif                                 /* typedef_SFc2_chardonnay_simulinkR2018aInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c2_chardonnay_simulinkR2018a_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_chardonnay_simulinkR2018a_get_check_sum(mxArray *plhs[]);
extern void c2_chardonnay_simulinkR2018a_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
