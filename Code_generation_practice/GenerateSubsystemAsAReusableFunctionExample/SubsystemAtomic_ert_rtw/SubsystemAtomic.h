/*
 * File: SubsystemAtomic.h
 *
 * Code generated for Simulink model 'SubsystemAtomic'.
 *
 * Model version                  : 10.0
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Jun  9 01:22:39 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef SubsystemAtomic_h_
#define SubsystemAtomic_h_
#ifndef SubsystemAtomic_COMMON_INCLUDES_
#define SubsystemAtomic_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SubsystemAtomic_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>/SS1' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S1>/Integrator' */
} DW_myfun;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  DW_myfun SS1;                        /* '<Root>/SS1' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void SubsystemAtomic_initialize(void);
extern void SubsystemAtomic_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

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
 * '<Root>' : 'SubsystemAtomic'
 * '<S1>'   : 'SubsystemAtomic/SS1'
 */
#endif                                 /* SubsystemAtomic_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
