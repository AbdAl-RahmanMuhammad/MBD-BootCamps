/*
 * File: AtomsModel.h
 *
 * Code generated for Simulink model 'AtomsModel'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sun Jun 14 03:13:04 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef AtomsModel_h_
#define AtomsModel_h_
#ifndef AtomsModel_COMMON_INCLUDES_
#define AtomsModel_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* AtomsModel_COMMON_INCLUDES_ */

#include "AtomsModel_types.h"

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
  real_T In3;                          /* '<Root>/In3' */
  real_T In4;                          /* '<Root>/In4' */
  real_T In5;                          /* '<Root>/In5' */
} ExternalInputs_AtomsModel__Global_struct;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
  real_T Out5;                         /* '<Root>/Out5' */
} ExternalOutputs_AtomsModel__Global_struct;

/* External inputs (root inport signals with default storage) */
extern ExternalInputs_AtomsModel__Global_struct AtomsModel_U_Global_var;

/* External outputs (root outports fed by signals with default storage) */
extern ExternalOutputs_AtomsModel__Global_struct AtomsModel_Y_Global_var;

/* Model entry point functions */
extern void AtomsModel_initialize(void);
extern void AtomsModel_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'AtomsModel'
 * '<S1>'   : 'AtomsModel/atomicA'
 * '<S2>'   : 'AtomsModel/atomicB'
 * '<S3>'   : 'AtomsModel/atomicC'
 */
#endif                                 /* AtomsModel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
