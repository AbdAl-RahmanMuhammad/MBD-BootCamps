/*
 * File: SubsystemAtomic.c
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

#include "SubsystemAtomic.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void myfun_Update(real_T rtu_In1, DW_myfun *localDW);
static real_T myfun(DW_myfun *localDW);

/* Outputs for atomic system: '<Root>/SS1' */
static real_T myfun(DW_myfun *localDW)
{
  /* DiscreteIntegrator: '<S1>/Integrator' */
  return localDW->Integrator_DSTATE;
}

/* Update for atomic system: '<Root>/SS1' */
static void myfun_Update(real_T rtu_In1, DW_myfun *localDW)
{
  /* Update for DiscreteIntegrator: '<S1>/Integrator' */
  localDW->Integrator_DSTATE += rtu_In1;
}

/* Model step function */
void SubsystemAtomic_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/SS1' */

  /* Outport: '<Root>/Out1' */
  rtY.Out1 = myfun(&rtDW.SS1);

  /* End of Outputs for SubSystem: '<Root>/SS1' */

  /* Update for Atomic SubSystem: '<Root>/SS1' */

  /* Sum: '<Root>/Sum' incorporates:
   *  Gain: '<Root>/Gain'
   *  Inport: '<Root>/In1'
   *  Outport: '<Root>/Out1'
   */
  myfun_Update(rtU.In1 + 5.0 * rtY.Out1, &rtDW.SS1);

  /* End of Update for SubSystem: '<Root>/SS1' */
}

/* Model initialize function */
void SubsystemAtomic_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
