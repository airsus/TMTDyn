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
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "rjtipF.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 34,    /* lineNo */
  "rjtipF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/rjtipF.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 35,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/rjtipF.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 36,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/rjtipF.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 37,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/rjtipF.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 61,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/rjtipF.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 62,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/rjtipF.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 63,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/rjtipF.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 65,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/rjtipF.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 12,  /* lineNo */
  "sqrt",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

/* Function Definitions */
void rjtipF(const emlrtStack *sp, const real_T in1[34], const real_T in2[48],
            real_T s, real_T r_jtip[12])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6_tmp;
  real_T t7_tmp;
  real_T t8_tmp;
  real_T t9_tmp;
  real_T t10;
  real_T t15;
  real_T t16;
  real_T t25_tmp;
  real_T t26_tmp;
  real_T t27_tmp;
  real_T t28_tmp;
  real_T t29;
  real_T t30;
  real_T t31;
  real_T t33;
  real_T t34_tmp;
  real_T t35_tmp;
  real_T t36_tmp;
  real_T t37_tmp;
  real_T r_jtip_tmp;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* RJTIPF */
  /*     R_JTIP = RJTIPF(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     05-Jan-2019 04:40:38 */
  st.site = &emlrtRSI;
  t2 = in1[4] * in1[4];
  st.site = &b_emlrtRSI;
  t3 = s * s;
  st.site = &c_emlrtRSI;
  t4 = t2 * t2;
  st.site = &d_emlrtRSI;
  t5 = t3 * t3;
  t6_tmp = in2[0] * t2;
  t7_tmp = in1[4] * in2[1];
  t8_tmp = in2[2] * t4;
  t9_tmp = in1[4] * in2[3];
  t10 = ((in1[4] * in2[12] + in2[13] * t2) + in1[4] * in2[14] * t2) + in2[15] *
    t4;
  t15 = ((in1[4] * in2[16] + in2[17] * t2) + in1[4] * in2[18] * t2) + in2[19] *
    t4;
  t16 = ((in1[4] * in2[20] + in2[21] * t2) + in1[4] * in2[22] * t2) + in2[23] *
    t4;
  t25_tmp = in2[4] * t2;
  t26_tmp = in1[4] * in2[5];
  t27_tmp = in2[6] * t4;
  t28_tmp = in1[4] * in2[7];
  st.site = &e_emlrtRSI;
  t29 = t10 * t10;
  st.site = &f_emlrtRSI;
  t30 = t15 * t15;
  st.site = &g_emlrtRSI;
  t31 = t16 * t16;
  t33 = ((-t29 - t30) - t31) + 1.0;
  st.site = &h_emlrtRSI;
  if (t33 < 0.0) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  t33 = muDoubleScalarSqrt(t33);
  t34_tmp = in2[8] * t2;
  t35_tmp = in1[4] * in2[9];
  t36_tmp = in2[10] * t4;
  t37_tmp = in1[4] * in2[11];
  r_jtip[0] = ((t6_tmp * t3 + t8_tmp * t5) + t7_tmp * s * t2 * t3) + t9_tmp * s *
    t4 * t5;
  r_jtip_tmp = ((t6_tmp + t7_tmp * t2) + t8_tmp) + t9_tmp * t4;
  r_jtip[1] = r_jtip_tmp;
  r_jtip[2] = ((t25_tmp * t3 + t27_tmp * t5) + t26_tmp * s * t2 * t3) + t28_tmp *
    s * t4 * t5;
  t9_tmp = ((t25_tmp + t26_tmp * t2) + t27_tmp) + t28_tmp * t4;
  r_jtip[3] = t9_tmp;
  r_jtip[4] = (((in1[4] * s + t34_tmp * t3) + t36_tmp * t5) + t35_tmp * s * t2 *
               t3) + t37_tmp * s * t4 * t5;
  t8_tmp = (((in1[4] + t34_tmp) + t35_tmp * t2) + t36_tmp) + t37_tmp * t4;
  r_jtip[5] = t8_tmp;
  r_jtip[6] = rtNaN;
  t7_tmp = in1[16] * t15;
  t6_tmp = in1[16] * t10;
  r_jtip[7] = (r_jtip_tmp + t6_tmp * t16 * 2.0) + t7_tmp * t33 * 2.0;
  r_jtip[8] = rtNaN;
  r_jtip[9] = (t9_tmp + t7_tmp * t16 * 2.0) - t6_tmp * t33 * 2.0;
  r_jtip[10] = rtNaN;
  r_jtip[11] = (((t8_tmp - in1[16] * t29) - in1[16] * t30) + in1[16] * t31) -
    in1[16] * (((t29 + t30) + t31) - 1.0);
}

/* End of code generation (rjtipF.c) */
