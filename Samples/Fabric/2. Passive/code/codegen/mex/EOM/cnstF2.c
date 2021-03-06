/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cnstF2.c
 *
 * Code generation for function 'cnstF2'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "cnstF2.h"

/* Function Definitions */
void cnstF2(const real_T in2[206], real_T out1[91], real_T out2[91], real_T
            *out3)
{
  real_T t3;
  real_T a;

  /* CNSTF2 */
  /*     [OUT1,OUT2,OUT3] = CNSTF2(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     09-Jan-2019 03:36:02 */
  t3 = in2[90] / 2.0;
  a = muDoubleScalarCos(t3);
  t3 = muDoubleScalarSin(t3);
  memset(&out1[0], 0, 73U * sizeof(real_T));
  out1[73] = a * a + t3 * t3;
  memset(&out1[74], 0, 17U * sizeof(real_T));
  memset(&out2[0], 0, 91U * sizeof(real_T));
  *out3 = 0.0;
}

/* End of code generation (cnstF2.c) */
