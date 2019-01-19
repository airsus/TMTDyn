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
static emlrtRSInfo emlrtRSI = { 18,    /* lineNo */
  "rjtipF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/rjtipF.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 19,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/rjtipF.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 20,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/rjtipF.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 22,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/rjtipF.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 12,  /* lineNo */
  "sqrt",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

/* Function Definitions */
void rjtipF(const emlrtStack *sp, const real_T in1[34], const real_T in2[24],
            real_T s, real_T r_jtip[18])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t6;
  real_T r_jtip_tmp;
  real_T b_r_jtip_tmp;
  emlrtStack st;
  emlrtStack b_st;
  (void)s;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* RJTIPF */
  /*     R_JTIP = RJTIPF(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jan-2019 18:37:21 */
  st.site = &emlrtRSI;
  t2 = in2[9] * in2[9];
  st.site = &b_emlrtRSI;
  t3 = in2[10] * in2[10];
  st.site = &c_emlrtRSI;
  t4 = in2[11] * in2[11];
  t6 = ((-t2 - t3) - t4) + 1.0;
  st.site = &d_emlrtRSI;
  if (t6 < 0.0) {
    b_st.site = &f_emlrtRSI;
    error(&b_st);
  }

  t6 = muDoubleScalarSqrt(t6);
  r_jtip[0] = in2[0];
  r_jtip[1] = in2[6];
  r_jtip[2] = in2[6];
  r_jtip[3] = in2[1];
  r_jtip[4] = in2[7];
  r_jtip[5] = in2[7];
  r_jtip[6] = in2[2];
  r_jtip[7] = in2[8];
  r_jtip[8] = in2[8];
  r_jtip[9] = in2[0];
  r_jtip[10] = in2[6];
  r_jtip_tmp = in1[16] * in2[10];
  b_r_jtip_tmp = in1[16] * in2[9];
  r_jtip[11] = (in2[6] + b_r_jtip_tmp * in2[11] * 2.0) + r_jtip_tmp * t6 * 2.0;
  r_jtip[12] = in2[1];
  r_jtip[13] = in2[7];
  r_jtip[14] = (in2[7] + r_jtip_tmp * in2[11] * 2.0) - b_r_jtip_tmp * t6 * 2.0;
  r_jtip[15] = in2[2];
  r_jtip[16] = in2[8];
  r_jtip[17] = (((in2[8] - in1[16] * t2) - in1[16] * t3) + in1[16] * t4) - in1
    [16] * (((t2 + t3) + t4) - 1.0);
}

/* End of code generation (rjtipF.c) */