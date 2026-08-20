/*
 * File: Reusable_NonReusable.h
 *
 * Code generated for Simulink model 'Reusable_NonReusable'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sun Jun 14 02:15:59 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef Reusable_NonReusable_h_
#define Reusable_NonReusable_h_
#ifndef Reusable_NonReusable_COMMON_INCLUDES_
#define Reusable_NonReusable_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                               /* Reusable_NonReusable_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for system '<Root>/Reuasble__unitDelay' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S7>/Unit Delay' */
} DW_Reuasble__unitDelay;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  DW_Reuasble__unitDelay Reuasble__unitDelay_a;/* '<Root>/Reuasble__unitDelay' */
  real_T UnitDelay_DSTATE;             /* '<S4>/Unit Delay' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Sensor1_in;                   /* '<Root>/Sensor1_in' */
  real_T Sensor2_in;                   /* '<Root>/Sensor2_in' */
  real_T Sensor3_in;                   /* '<Root>/Sensor3_in' */
  real_T Sensor4_in;                   /* '<Root>/Sensor4_in' */
  real_T Sensor6_in;                   /* '<Root>/Sensor6_in' */
  real_T Sensor5_in;                   /* '<Root>/Sensor5_in' */
  real_T Sensor7_in;                   /* '<Root>/Sensor7_in' */
  real_T Sensor8_in;                   /* '<Root>/Sensor8_in' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Sensor1_out;                  /* '<Root>/Sensor1_out' */
  real_T Sensor2_out;                  /* '<Root>/Sensor2_out' */
  real_T Sensor3_out;                  /* '<Root>/Sensor3_out' */
  real_T Sensor4_out;                  /* '<Root>/Sensor4_out' */
  real_T Sensor6_out;                  /* '<Root>/Sensor6_out' */
  real_T Sensor5_out;                  /* '<Root>/Sensor5_out' */
  real_T Sensor7_out;                  /* '<Root>/Sensor7_out' */
  real_T Sensor8_out;                  /* '<Root>/Sensor8_out' */
} ExtY;

/* Parameters for system: '<Root>/Reuasble' */
struct P_Reuasble_ {
  real_T Gain_Gain;                    /* Expression: 5
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 10
                                        * Referenced by: '<S6>/Constant'
                                        */
};

/* Parameters for system: '<Root>/Reuasble' */
typedef struct P_Reuasble_ P_Reuasble;

/* Parameters for system: '<Root>/Reuasble__unitDelay' */
struct P_Reuasble__unitDelay_ {
  real_T Gain_Gain;                    /* Expression: 10
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S7>/Unit Delay'
                                        */
};

/* Parameters for system: '<Root>/Reuasble__unitDelay' */
typedef struct P_Reuasble__unitDelay_ P_Reuasble__unitDelay;

/* Parameters (default storage) */
struct P_ {
  real_T Gain_Gain;                    /* Expression: 5
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 10
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 5
                                        * Referenced by: '<S2>/Gain'
                                        */
  real_T Constant_Value_f;             /* Expression: 10
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 5
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T Constant_Value_p;             /* Expression: 10
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 10
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S4>/Unit Delay'
                                        */
  real_T Gain_Gain_n;                  /* Expression: 5
                                        * Referenced by: '<S5>/Gain'
                                        */
  real_T Constant_Value_g;             /* Expression: 10
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 5
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T Constant_Value_gc;            /* Expression: 10
                                        * Referenced by: '<S8>/Constant'
                                        */
  P_Reuasble__unitDelay Reuasble__unitDelay_a;/* '<Root>/Reuasble__unitDelay' */
  P_Reuasble Reuasble_e;               /* '<Root>/Reuasble' */
};

/* Parameters (default storage) */
typedef struct P_ P;

/* Block parameters (default storage) */
extern P rtP;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Reusable_NonReusable_initialize(void);
extern void Reusable_NonReusable_step(void);

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
 * '<Root>' : 'Reusable_NonReusable'
 * '<S1>'   : 'Reusable_NonReusable/Inline'
 * '<S2>'   : 'Reusable_NonReusable/NonReuasble'
 * '<S3>'   : 'Reusable_NonReusable/NonReuasble_Allow_args_optimized'
 * '<S4>'   : 'Reusable_NonReusable/NonReuasble_MatchGraph_unitDelay'
 * '<S5>'   : 'Reusable_NonReusable/NonReuasble_NonReuasble_Allow_args_MatchGraph'
 * '<S6>'   : 'Reusable_NonReusable/Reuasble'
 * '<S7>'   : 'Reusable_NonReusable/Reuasble__unitDelay'
 * '<S8>'   : 'Reusable_NonReusable/Virtual'
 */
#endif                                 /* Reusable_NonReusable_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
