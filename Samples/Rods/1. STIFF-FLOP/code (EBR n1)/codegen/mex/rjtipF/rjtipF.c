/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rjtipF.c
 *
 * Code generation for function 'rjtipF'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rjtipF.h"

/* Function Definitions */
void rjtipF(const emlrtStack *sp, const real_T in1[34], const real_T in2[12],
            real_T s, real_T r_jtip[12])
{
  real_T t2;
  real_T r_jtip_tmp;
  real_T b_r_jtip_tmp;
  (void)sp;
  (void)s;

  /* RJTIPF */
  /*     R_JTIP = RJTIPF(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     05-Jan-2019 22:48:53 */
  t2 = in1[4] + in2[2];
  r_jtip[0] = in2[0];
  r_jtip[1] = in2[0];
  r_jtip[2] = in2[1];
  r_jtip[3] = in2[1];
  r_jtip[4] = t2;
  r_jtip[5] = t2;
  r_jtip[6] = in2[0];
  r_jtip_tmp = in1[16] * in2[3];
  b_r_jtip_tmp = in1[16] * in2[4];
  r_jtip[7] = (in2[0] + b_r_jtip_tmp) + r_jtip_tmp * in2[5] / 2.0;
  r_jtip[8] = in2[1];
  r_jtip[9] = (in2[1] - r_jtip_tmp) + b_r_jtip_tmp * in2[5] / 2.0;
  r_jtip[10] = t2;
  r_jtip[11] = ((((in1[16] + in1[4]) + in2[2]) - in1[16] * (in2[3] * in2[3]) /
                 4.0) - in1[16] * (in2[4] * in2[4]) / 4.0) + in1[16] * (in2[5] *
    in2[5]) / 4.0;
}

/* End of code generation (rjtipF.c) */