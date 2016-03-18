#ifndef __c3_test_lineestimator_simulinkV1803_h__
#define __c3_test_lineestimator_simulinkV1803_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc3_test_lineestimator_simulinkV1803InstanceStruct
#define typedef_SFc3_test_lineestimator_simulinkV1803InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c3_sfEvent;
  boolean_T c3_isStable;
  boolean_T c3_doneDoubleBufferReInit;
  uint8_T c3_is_active_c3_test_lineestimator_simulinkV1803;
  real_T *c3_H;
  real_T (*c3_CompMatrix)[20];
  real_T *c3_thetaCam;
  real_T *c3_X_in;
  real_T *c3_Y_in;
  real_T *c3_psi;
  real_T *c3_Field_length;
  real_T *c3_Field_width;
} SFc3_test_lineestimator_simulinkV1803InstanceStruct;

#endif                                 /*typedef_SFc3_test_lineestimator_simulinkV1803InstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c3_test_lineestimator_simulinkV1803_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_test_lineestimator_simulinkV1803_get_check_sum(mxArray *plhs[]);
extern void c3_test_lineestimator_simulinkV1803_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
