/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * massF15.c
 *
 * Code generation for function 'massF15'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "massF15.h"
#include "error.h"
#include "sqrt.h"
#include "EOM_data.h"

/* Variable Definitions */
static emlrtRSInfo ek_emlrtRSI = { 16, /* lineNo */
  "massF15",                           /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF15.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 17, /* lineNo */
  "massF15",                           /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF15.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 18, /* lineNo */
  "massF15",                           /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF15.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 20, /* lineNo */
  "massF15",                           /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF15.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 23, /* lineNo */
  "massF15",                           /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF15.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 31, /* lineNo */
  "massF15",                           /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF15.m"/* pathName */
};

/* Function Definitions */
void massF15(const emlrtStack *sp, const real_T in2[206], real_T out2[546],
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

  /* MASSF15 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF15(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     09-Jan-2019 03:09:41 */
  st.site = &ek_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t2 = in2[81] * in2[81];
  st.site = &fk_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t3 = in2[82] * in2[82];
  st.site = &gk_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t4 = in2[83] * in2[83];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t9 = t5;
  st.site = &hk_emlrtRSI;
  b_sqrt(&st, &t9);
  t6 = 1.0 / t9;
  t7 = in2[83] * 2.0;
  t28 = in2[81] * in2[82];
  t8 = t28 * t6 * 2.0;
  t9 = t5;
  st.site = &ik_emlrtRSI;
  b_sqrt(&st, &t9);
  t9 *= 2.0;
  t11 = in2[81] * in2[83] * t6 * 2.0;
  t12 = in2[81] * 2.0;
  t13 = in2[82] * in2[83] * t6 * 2.0;
  memset(&out2[0], 0, 468U * sizeof(real_T));
  out2[468] = 1.0;
  out2[469] = 0.0;
  out2[470] = 0.0;
  out2[471] = 0.0;
  out2[472] = 0.0;
  out2[473] = 0.0;
  out2[474] = 0.0;
  out2[475] = 1.0;
  out2[476] = 0.0;
  out2[477] = 0.0;
  out2[478] = 0.0;
  out2[479] = 0.0;
  out2[480] = 0.0;
  out2[481] = 0.0;
  out2[482] = 1.0;
  out2[483] = 0.0;
  out2[484] = 0.0;
  out2[485] = 0.0;
  out2[486] = 0.0;
  out2[487] = 0.0;
  out2[488] = 0.0;
  out2[489] = t9 + t2 * t6 * 2.0;
  out2[490] = -t7 + t8;
  out2[491] = in2[82] * 2.0 + t11;
  out2[492] = 0.0;
  out2[493] = 0.0;
  out2[494] = 0.0;
  out2[495] = t7 + t8;
  out2[496] = t9 + t3 * t6 * 2.0;
  out2[497] = -t12 + t13;
  out2[498] = 0.0;
  out2[499] = 0.0;
  out2[500] = 0.0;
  out2[501] = in2[82] * -2.0 + t11;
  out2[502] = t12 + t13;
  out2[503] = t9 + t4 * t6 * 2.0;
  memset(&out2[504], 0, 42U * sizeof(real_T));
  st.site = &jk_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  if (t5 < 0.0) {
    c_st.site = &ug_emlrtRSI;
    error(&c_st);
  }

  t14 = 1.0 / muDoubleScalarPower(t5, 1.5);
  t15 = in2[82] * t6 * 2.0;
  t16 = in2[82] * t2 * t14 * 2.0;
  t17 = in2[81] * t6 * 2.0;
  t18 = t28 * in2[83] * t14 * 2.0;
  t9 = in2[83] * t6 * 2.0;
  t11 = in2[83] * t2 * t14 * 2.0;
  t12 = t15 + t16;
  t13 = in2[81] * t3 * t14 * 2.0;
  t7 = t17 + t13;
  t8 = in2[83] * t3 * t14 * 2.0;
  t5 = t9 + t11;
  t28 = in2[81] * t4 * t14 * 2.0;
  t6 = t9 + t8;
  t30 = in2[82] * t4 * t14 * 2.0;
  t31 = t17 + t28;
  t32 = t15 + t30;
  memset(&out3[0], 0, 489U * sizeof(real_T));
  out3[489] = (t12 * in2[185] + t5 * in2[186]) + in2[184] * (t17 + in2[81] * t2 *
    t14 * 2.0);
  out3[490] = (t12 * in2[184] + (t18 + 2.0) * in2[186]) - in2[185] * (t17 - t13);
  out3[491] = ((t18 - 2.0) * in2[185] + t5 * in2[184]) - in2[186] * (t17 - t28);
  out3[492] = 0.0;
  out3[493] = 0.0;
  out3[494] = 0.0;
  out3[495] = (t7 * in2[185] + (t18 - 2.0) * in2[186]) - in2[184] * (t15 - t16);
  out3[496] = (t7 * in2[184] + t6 * in2[186]) + in2[185] * (t15 + in2[82] * t3 *
    t14 * 2.0);
  out3[497] = ((t18 + 2.0) * in2[184] + t6 * in2[185]) - in2[186] * (t15 - t30);
  out3[498] = 0.0;
  out3[499] = 0.0;
  out3[500] = 0.0;
  out3[501] = ((t18 + 2.0) * in2[185] + t31 * in2[186]) - in2[184] * (t9 - t11);
  out3[502] = ((t18 - 2.0) * in2[184] + t32 * in2[186]) - in2[185] * (t9 - t8);
  out3[503] = (t31 * in2[184] + t32 * in2[185]) + in2[186] * (t9 + in2[83] * t4 *
    t14 * 2.0);
  memset(&out3[504], 0, 42U * sizeof(real_T));
}

/* End of code generation (massF15.c) */
