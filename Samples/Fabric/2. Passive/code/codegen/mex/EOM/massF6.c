/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * massF6.c
 *
 * Code generation for function 'massF6'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "massF6.h"
#include "error.h"
#include "sqrt.h"
#include "EOM_data.h"

/* Variable Definitions */
static emlrtRSInfo ai_emlrtRSI = { 16, /* lineNo */
  "massF6",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF6.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 17, /* lineNo */
  "massF6",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF6.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 18, /* lineNo */
  "massF6",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF6.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 20, /* lineNo */
  "massF6",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF6.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 23, /* lineNo */
  "massF6",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF6.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 31, /* lineNo */
  "massF6",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF6.m"/* pathName */
};

/* Function Definitions */
void massF6(const emlrtStack *sp, const real_T in2[206], real_T out2[546],
            real_T out3[546], real_T out4[6])
{
  int32_T i;
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t9;
  real_T t6;
  real_T t7;
  real_T t28;
  real_T t8;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t30;
  real_T t31;
  real_T t32;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (i = 0; i < 6; i++) {
    out4[i] = dv0[i];
  }

  /* MASSF6 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF6(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     09-Jan-2019 03:09:29 */
  st.site = &ai_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t2 = in2[27] * in2[27];
  st.site = &bi_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t3 = in2[28] * in2[28];
  st.site = &ci_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t4 = in2[29] * in2[29];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t9 = t5;
  st.site = &di_emlrtRSI;
  b_sqrt(&st, &t9);
  t6 = 1.0 / t9;
  t7 = in2[29] * 2.0;
  t28 = in2[27] * in2[28];
  t8 = t28 * t6 * 2.0;
  t9 = t5;
  st.site = &ei_emlrtRSI;
  b_sqrt(&st, &t9);
  t9 *= 2.0;
  t11 = in2[27] * in2[29] * t6 * 2.0;
  t12 = in2[27] * 2.0;
  t13 = in2[28] * in2[29] * t6 * 2.0;
  memset(&out2[0], 0, 144U * sizeof(real_T));
  out2[144] = 1.0;
  out2[145] = 0.0;
  out2[146] = 0.0;
  out2[147] = 0.0;
  out2[148] = 0.0;
  out2[149] = 0.0;
  out2[150] = 0.0;
  out2[151] = 1.0;
  out2[152] = 0.0;
  out2[153] = 0.0;
  out2[154] = 0.0;
  out2[155] = 0.0;
  out2[156] = 0.0;
  out2[157] = 0.0;
  out2[158] = 1.0;
  out2[159] = 0.0;
  out2[160] = 0.0;
  out2[161] = 0.0;
  out2[162] = 0.0;
  out2[163] = 0.0;
  out2[164] = 0.0;
  out2[165] = t9 + t2 * t6 * 2.0;
  out2[166] = -t7 + t8;
  out2[167] = in2[28] * 2.0 + t11;
  out2[168] = 0.0;
  out2[169] = 0.0;
  out2[170] = 0.0;
  out2[171] = t7 + t8;
  out2[172] = t9 + t3 * t6 * 2.0;
  out2[173] = -t12 + t13;
  out2[174] = 0.0;
  out2[175] = 0.0;
  out2[176] = 0.0;
  out2[177] = in2[28] * -2.0 + t11;
  out2[178] = t12 + t13;
  out2[179] = t9 + t4 * t6 * 2.0;
  memset(&out2[180], 0, 366U * sizeof(real_T));
  st.site = &fi_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  if (t5 < 0.0) {
    c_st.site = &ug_emlrtRSI;
    error(&c_st);
  }

  t14 = 1.0 / muDoubleScalarPower(t5, 1.5);
  t15 = in2[28] * t6 * 2.0;
  t16 = in2[28] * t2 * t14 * 2.0;
  t17 = in2[27] * t6 * 2.0;
  t18 = t28 * in2[29] * t14 * 2.0;
  t9 = in2[29] * t6 * 2.0;
  t11 = in2[29] * t2 * t14 * 2.0;
  t12 = t15 + t16;
  t13 = in2[27] * t3 * t14 * 2.0;
  t7 = t17 + t13;
  t8 = in2[29] * t3 * t14 * 2.0;
  t5 = t9 + t11;
  t28 = in2[27] * t4 * t14 * 2.0;
  t6 = t9 + t8;
  t30 = in2[28] * t4 * t14 * 2.0;
  t31 = t17 + t28;
  t32 = t15 + t30;
  memset(&out3[0], 0, 165U * sizeof(real_T));
  out3[165] = (t12 * in2[131] + t5 * in2[132]) + in2[130] * (t17 + in2[27] * t2 *
    t14 * 2.0);
  out3[166] = (t12 * in2[130] + (t18 + 2.0) * in2[132]) - in2[131] * (t17 - t13);
  out3[167] = ((t18 - 2.0) * in2[131] + t5 * in2[130]) - in2[132] * (t17 - t28);
  out3[168] = 0.0;
  out3[169] = 0.0;
  out3[170] = 0.0;
  out3[171] = (t7 * in2[131] + (t18 - 2.0) * in2[132]) - in2[130] * (t15 - t16);
  out3[172] = (t7 * in2[130] + t6 * in2[132]) + in2[131] * (t15 + in2[28] * t3 *
    t14 * 2.0);
  out3[173] = ((t18 + 2.0) * in2[130] + t6 * in2[131]) - in2[132] * (t15 - t30);
  out3[174] = 0.0;
  out3[175] = 0.0;
  out3[176] = 0.0;
  out3[177] = ((t18 + 2.0) * in2[131] + t31 * in2[132]) - in2[130] * (t9 - t11);
  out3[178] = ((t18 - 2.0) * in2[130] + t32 * in2[132]) - in2[131] * (t9 - t8);
  out3[179] = (t31 * in2[130] + t32 * in2[131]) + in2[132] * (t9 + in2[29] * t4 *
    t14 * 2.0);
  memset(&out3[180], 0, 366U * sizeof(real_T));
}

/* End of code generation (massF6.c) */
