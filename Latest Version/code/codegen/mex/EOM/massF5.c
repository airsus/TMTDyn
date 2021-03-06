/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * massF5.c
 *
 * Code generation for function 'massF5'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "massF5.h"
#include "error.h"
#include "sqrt.h"
#include "EOM_data.h"

/* Variable Definitions */
static emlrtRSInfo th_emlrtRSI = { 16, /* lineNo */
  "massF5",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF5.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 17, /* lineNo */
  "massF5",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF5.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 18, /* lineNo */
  "massF5",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF5.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 20, /* lineNo */
  "massF5",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF5.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 23, /* lineNo */
  "massF5",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF5.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 31, /* lineNo */
  "massF5",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF5.m"/* pathName */
};

/* Function Definitions */
void massF5(const emlrtStack *sp, const real_T in2[206], real_T out2[546],
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

  /* MASSF5 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF5(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     09-Jan-2019 03:09:32 */
  st.site = &th_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t2 = in2[21] * in2[21];
  st.site = &uh_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t3 = in2[22] * in2[22];
  st.site = &vh_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t4 = in2[23] * in2[23];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t9 = t5;
  st.site = &wh_emlrtRSI;
  b_sqrt(&st, &t9);
  t6 = 1.0 / t9;
  t7 = in2[23] * 2.0;
  t28 = in2[21] * in2[22];
  t8 = t28 * t6 * 2.0;
  t9 = t5;
  st.site = &xh_emlrtRSI;
  b_sqrt(&st, &t9);
  t9 *= 2.0;
  t11 = in2[21] * in2[23] * t6 * 2.0;
  t12 = in2[21] * 2.0;
  t13 = in2[22] * in2[23] * t6 * 2.0;
  memset(&out2[0], 0, 108U * sizeof(real_T));
  out2[108] = 1.0;
  out2[109] = 0.0;
  out2[110] = 0.0;
  out2[111] = 0.0;
  out2[112] = 0.0;
  out2[113] = 0.0;
  out2[114] = 0.0;
  out2[115] = 1.0;
  out2[116] = 0.0;
  out2[117] = 0.0;
  out2[118] = 0.0;
  out2[119] = 0.0;
  out2[120] = 0.0;
  out2[121] = 0.0;
  out2[122] = 1.0;
  out2[123] = 0.0;
  out2[124] = 0.0;
  out2[125] = 0.0;
  out2[126] = 0.0;
  out2[127] = 0.0;
  out2[128] = 0.0;
  out2[129] = t9 + t2 * t6 * 2.0;
  out2[130] = -t7 + t8;
  out2[131] = in2[22] * 2.0 + t11;
  out2[132] = 0.0;
  out2[133] = 0.0;
  out2[134] = 0.0;
  out2[135] = t7 + t8;
  out2[136] = t9 + t3 * t6 * 2.0;
  out2[137] = -t12 + t13;
  out2[138] = 0.0;
  out2[139] = 0.0;
  out2[140] = 0.0;
  out2[141] = in2[22] * -2.0 + t11;
  out2[142] = t12 + t13;
  out2[143] = t9 + t4 * t6 * 2.0;
  memset(&out2[144], 0, 402U * sizeof(real_T));
  st.site = &yh_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  if (t5 < 0.0) {
    c_st.site = &ug_emlrtRSI;
    error(&c_st);
  }

  t14 = 1.0 / muDoubleScalarPower(t5, 1.5);
  t15 = in2[22] * t6 * 2.0;
  t16 = in2[22] * t2 * t14 * 2.0;
  t17 = in2[21] * t6 * 2.0;
  t18 = t28 * in2[23] * t14 * 2.0;
  t9 = in2[23] * t6 * 2.0;
  t11 = in2[23] * t2 * t14 * 2.0;
  t12 = t15 + t16;
  t13 = in2[21] * t3 * t14 * 2.0;
  t7 = t17 + t13;
  t8 = in2[23] * t3 * t14 * 2.0;
  t5 = t9 + t11;
  t28 = in2[21] * t4 * t14 * 2.0;
  t6 = t9 + t8;
  t30 = in2[22] * t4 * t14 * 2.0;
  t31 = t17 + t28;
  t32 = t15 + t30;
  memset(&out3[0], 0, 129U * sizeof(real_T));
  out3[129] = (t12 * in2[125] + t5 * in2[126]) + in2[124] * (t17 + in2[21] * t2 *
    t14 * 2.0);
  out3[130] = (t12 * in2[124] + (t18 + 2.0) * in2[126]) - in2[125] * (t17 - t13);
  out3[131] = ((t18 - 2.0) * in2[125] + t5 * in2[124]) - in2[126] * (t17 - t28);
  out3[132] = 0.0;
  out3[133] = 0.0;
  out3[134] = 0.0;
  out3[135] = (t7 * in2[125] + (t18 - 2.0) * in2[126]) - in2[124] * (t15 - t16);
  out3[136] = (t7 * in2[124] + t6 * in2[126]) + in2[125] * (t15 + in2[22] * t3 *
    t14 * 2.0);
  out3[137] = ((t18 + 2.0) * in2[124] + t6 * in2[125]) - in2[126] * (t15 - t30);
  out3[138] = 0.0;
  out3[139] = 0.0;
  out3[140] = 0.0;
  out3[141] = ((t18 + 2.0) * in2[125] + t31 * in2[126]) - in2[124] * (t9 - t11);
  out3[142] = ((t18 - 2.0) * in2[124] + t32 * in2[126]) - in2[125] * (t9 - t8);
  out3[143] = (t31 * in2[124] + t32 * in2[125]) + in2[126] * (t9 + in2[23] * t4 *
    t14 * 2.0);
  memset(&out3[144], 0, 402U * sizeof(real_T));
}

/* End of code generation (massF5.c) */
