/*
 * File: Reusable_NonReusable.c
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

#include "Reusable_NonReusable.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;
static real_T Reuasble(real_T rtu_In1, P_Reuasble *localP);
static void Reuasble__unitDelay_Init(DW_Reuasble__unitDelay *localDW,
  P_Reuasble__unitDelay *localP);
static real_T Reuasble__unitDelay(real_T rtu_In1, DW_Reuasble__unitDelay
  *localDW, P_Reuasble__unitDelay *localP);
static void NonReuasble(void);
static void NonReuasble_Allow_args_optimize(real_T rtu_In1);
static void NonReuasble_MatchGraph_uni_Init(void);
static void NonReuasble_MatchGraph_unitDela(real_T rtu_In1);
static void NonReuasble_NonReuasble_Allow_a(real_T rtu_Sensor2_in2);

/* Output and update for atomic system: '<Root>/NonReuasble' */
static void NonReuasble(void)
{
  /* Outport: '<Root>/Sensor2_out' incorporates:
   *  Constant: '<S2>/Constant'
   *  Gain: '<S2>/Gain'
   *  Inport: '<Root>/Sensor2_in'
   *  Sum: '<S2>/Add'
   */
  rtY.Sensor2_out = rtP.Gain_Gain_c * rtU.Sensor2_in + rtP.Constant_Value_f;
}

/* Output and update for atomic system: '<Root>/NonReuasble_Allow_args_optimized' */
static void NonReuasble_Allow_args_optimize(real_T rtu_In1)
{
  /* Outport: '<Root>/Sensor6_out' incorporates:
   *  Constant: '<S3>/Constant'
   *  Gain: '<S3>/Gain'
   *  Sum: '<S3>/Add'
   */
  rtY.Sensor6_out = rtP.Gain_Gain_o * rtu_In1 + rtP.Constant_Value_p;
}

/* System initialize for atomic system: '<Root>/NonReuasble_MatchGraph_unitDelay' */
static void NonReuasble_MatchGraph_uni_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
  rtDW.UnitDelay_DSTATE = rtP.UnitDelay_InitialCondition;
}

/* Output and update for atomic system: '<Root>/NonReuasble_MatchGraph_unitDelay' */
static void NonReuasble_MatchGraph_unitDela(real_T rtu_In1)
{
  /* Outport: '<Root>/Sensor7_out' incorporates:
   *  Gain: '<S4>/Gain'
   *  Sum: '<S4>/Add'
   *  UnitDelay: '<S4>/Unit Delay'
   */
  rtY.Sensor7_out = rtP.Gain_Gain_p * rtu_In1 + rtDW.UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S4>/Unit Delay' incorporates:
   *  Outport: '<Root>/Sensor7_out'
   */
  rtDW.UnitDelay_DSTATE = rtY.Sensor7_out;
}

/* Output and update for atomic system: '<Root>/NonReuasble_NonReuasble_Allow_args_MatchGraph' */
static void NonReuasble_NonReuasble_Allow_a(real_T rtu_Sensor2_in2)
{
  /* Outport: '<Root>/Sensor5_out' incorporates:
   *  Constant: '<S5>/Constant'
   *  Gain: '<S5>/Gain'
   *  Sum: '<S5>/Add'
   */
  rtY.Sensor5_out = rtP.Gain_Gain_n * rtu_Sensor2_in2 + rtP.Constant_Value_g;
}

/* Output and update for atomic system: '<Root>/Reuasble' */
static real_T Reuasble(real_T rtu_In1, P_Reuasble *localP)
{
  /* Sum: '<S6>/Add' incorporates:
   *  Constant: '<S6>/Constant'
   *  Gain: '<S6>/Gain'
   */
  return localP->Gain_Gain * rtu_In1 + localP->Constant_Value;
}

/* System initialize for atomic system: '<Root>/Reuasble__unitDelay' */
static void Reuasble__unitDelay_Init(DW_Reuasble__unitDelay *localDW,
  P_Reuasble__unitDelay *localP)
{
  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;
}

/* Output and update for atomic system: '<Root>/Reuasble__unitDelay' */
static real_T Reuasble__unitDelay(real_T rtu_In1, DW_Reuasble__unitDelay
  *localDW, P_Reuasble__unitDelay *localP)
{
  real_T rty_Out1_0;

  /* Sum: '<S7>/Add' incorporates:
   *  Gain: '<S7>/Gain'
   *  UnitDelay: '<S7>/Unit Delay'
   */
  rty_Out1_0 = localP->Gain_Gain * rtu_In1 + localDW->UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S7>/Unit Delay' */
  localDW->UnitDelay_DSTATE = rty_Out1_0;
  return rty_Out1_0;
}

/* Model step function */
void Reusable_NonReusable_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Reuasble' */

  /* Outport: '<Root>/Sensor1_out' incorporates:
   *  Inport: '<Root>/Sensor1_in'
   */
  rtY.Sensor1_out = Reuasble(rtU.Sensor1_in, &rtP.Reuasble_e);

  /* End of Outputs for SubSystem: '<Root>/Reuasble' */

  /* Outputs for Atomic SubSystem: '<Root>/NonReuasble' */
  NonReuasble();

  /* End of Outputs for SubSystem: '<Root>/NonReuasble' */

  /* Outputs for Atomic SubSystem: '<Root>/Inline' */
  /* Outport: '<Root>/Sensor3_out' incorporates:
   *  Constant: '<S1>/Constant'
   *  Gain: '<S1>/Gain'
   *  Inport: '<Root>/Sensor3_in'
   *  Sum: '<S1>/Add'
   */
  rtY.Sensor3_out = rtP.Gain_Gain * rtU.Sensor3_in + rtP.Constant_Value;

  /* End of Outputs for SubSystem: '<Root>/Inline' */

  /* Outport: '<Root>/Sensor4_out' incorporates:
   *  Constant: '<S8>/Constant'
   *  Gain: '<S8>/Gain'
   *  Inport: '<Root>/Sensor4_in'
   *  Sum: '<S8>/Add'
   */
  rtY.Sensor4_out = rtP.Gain_Gain_d * rtU.Sensor4_in + rtP.Constant_Value_gc;

  /* Outputs for Atomic SubSystem: '<Root>/NonReuasble_Allow_args_optimized' */

  /* Inport: '<Root>/Sensor6_in' */
  NonReuasble_Allow_args_optimize(rtU.Sensor6_in);

  /* End of Outputs for SubSystem: '<Root>/NonReuasble_Allow_args_optimized' */

  /* Outputs for Atomic SubSystem: '<Root>/NonReuasble_NonReuasble_Allow_args_MatchGraph' */

  /* Inport: '<Root>/Sensor5_in' */
  NonReuasble_NonReuasble_Allow_a(rtU.Sensor5_in);

  /* End of Outputs for SubSystem: '<Root>/NonReuasble_NonReuasble_Allow_args_MatchGraph' */

  /* Outputs for Atomic SubSystem: '<Root>/NonReuasble_MatchGraph_unitDelay' */

  /* Inport: '<Root>/Sensor7_in' */
  NonReuasble_MatchGraph_unitDela(rtU.Sensor7_in);

  /* End of Outputs for SubSystem: '<Root>/NonReuasble_MatchGraph_unitDelay' */

  /* Outputs for Atomic SubSystem: '<Root>/Reuasble__unitDelay' */

  /* Outport: '<Root>/Sensor8_out' incorporates:
   *  Inport: '<Root>/Sensor8_in'
   */
  rtY.Sensor8_out = Reuasble__unitDelay(rtU.Sensor8_in,
    &rtDW.Reuasble__unitDelay_a, &rtP.Reuasble__unitDelay_a);

  /* End of Outputs for SubSystem: '<Root>/Reuasble__unitDelay' */
}

/* Model initialize function */
void Reusable_NonReusable_initialize(void)
{
  /* SystemInitialize for Atomic SubSystem: '<Root>/NonReuasble_MatchGraph_unitDelay' */
  NonReuasble_MatchGraph_uni_Init();

  /* End of SystemInitialize for SubSystem: '<Root>/NonReuasble_MatchGraph_unitDelay' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Reuasble__unitDelay' */
  Reuasble__unitDelay_Init(&rtDW.Reuasble__unitDelay_a,
    &rtP.Reuasble__unitDelay_a);

  /* End of SystemInitialize for SubSystem: '<Root>/Reuasble__unitDelay' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
