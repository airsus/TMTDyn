/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cnstF8.c
 *
 * Code generation for function 'cnstF8'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "cnstF8.h"

/* Function Definitions */
void cnstF8(const real_T in2[206], real_T out1[91], real_T out2[91], real_T
            *out3)
{
  real_T t3;
  real_T a;

  /* CNSTF8 */
  /*     [OUT1,OUT2,OUT3] = CNSTF8(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     09-Jan-2019 03:36:08 */
  t3 = in2[90] / 2.0;
  a = muDoubleScalarCos(t3);
  t3 = muDoubleScalarSin(t3);
  memset(&out1[0], 0, 85U * sizeof(real_T));
  out1[85] = a * a + t3 * t3;
  out1[86] = 0.0;
  out1[87] = 0.0;
  out1[88] = 0.0;
  out1[89] = 0.0;
  out1[90] = 0.0;
  memset(&out2[0], 0, 91U * sizeof(real_T));
  *out3 = 0.0;
}

/* End of code generation (cnstF8.c) */
