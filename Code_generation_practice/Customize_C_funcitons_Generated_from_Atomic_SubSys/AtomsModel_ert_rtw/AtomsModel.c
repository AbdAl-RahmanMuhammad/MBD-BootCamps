/*
 * File: AtomsModel.c
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

#include "AtomsModel.h"
#include "rtwtypes.h"
#include "AtomsModel_private.h"

/* External inputs (root inport signals with default storage) */
ExternalInputs_AtomsModel__Global_struct AtomsModel_U_Global_var;

/* External outputs (root outports fed by signals with default storage) */
ExternalOutputs_AtomsModel__Global_struct AtomsModel_Y_Global_var;

/* Output and update for atomic system: '<Root>/atomicA' */
void myAtomicFuncA(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Gain: '<S1>/Gain'
   *  Inport: '<Root>/In1'
   */
  AtomsModel_Y_Global_var.Out1 = 17.02 * AtomsModel_U_Global_var.In1;

  /* Outport: '<Root>/Out2' incorporates:
   *  Gain: '<S1>/Gain1'
   *  Inport: '<Root>/In2'
   */
  AtomsModel_Y_Global_var.Out2 = 1975.0 * AtomsModel_U_Global_var.In2;
}

/* Output and update for atomic system: '<Root>/atomicB' */
void GAZA_atomicB(real_T FreePalestine_u_In1, real_T FreePalestine_u_In2)
{
  /* Outport: '<Root>/Out3' incorporates:
   *  Gain: '<S2>/Gain'
   */
  AtomsModel_Y_Global_var.Out3 = 22.02 * FreePalestine_u_In1;

  /* Outport: '<Root>/Out4' incorporates:
   *  Gain: '<S2>/Gain1'
   */
  AtomsModel_Y_Global_var.Out4 = 1976.0 * FreePalestine_u_In2;
}

/* Output and update for atomic system: '<Root>/atomicC' */
real_T GAZA_atomicC(real_T FreePalestine_u_In1)
{
  /* Gain: '<S3>/Gain' */
  return 10.02 * FreePalestine_u_In1;
}

/* Model step function */
void AtomsModel_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/atomicA' */
  myAtomicFuncA();

  /* End of Outputs for SubSystem: '<Root>/atomicA' */

  /* Outputs for Atomic SubSystem: '<Root>/atomicB' */

  /* Inport: '<Root>/In3' incorporates:
   *  Inport: '<Root>/In4'
   */
  GAZA_atomicB(AtomsModel_U_Global_var.In3, AtomsModel_U_Global_var.In4);

  /* End of Outputs for SubSystem: '<Root>/atomicB' */

  /* Outputs for Atomic SubSystem: '<Root>/atomicC' */

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In5'
   */
  AtomsModel_Y_Global_var.Out5 = GAZA_atomicC(AtomsModel_U_Global_var.In5);

  /* End of Outputs for SubSystem: '<Root>/atomicC' */
}

/* Model initialize function */
void AtomsModel_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
