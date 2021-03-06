/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fj_vd_matF.c
 *
 * Code generation for function 'fj_vd_matF'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "fj_vd_matF.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 22,    /* lineNo */
  "fj_vd_matF",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/fj_vd_matF.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 49,  /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 61,  /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

/* Function Definitions */
void fj_vd_matF(const emlrtStack *sp, const real_T in1[34], const real_T in2[12],
                real_T s, real_T fj_vd_mat[36])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  (void)s;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* FJ_VD_MATF */
  /*     FJ_VD_MAT = FJ_VD_MATF(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     05-Jan-2019 21:11:29 */
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  if ((in2[6] < 0.0) && (!muDoubleScalarIsNaN(in1[11] - 1.0)) &&
      (muDoubleScalarFloor(in1[11] - 1.0) != in1[11] - 1.0)) {
    c_st.site = &c_emlrtRSI;
    error(&c_st);
  }

  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  if ((in2[7] < 0.0) && (!muDoubleScalarIsNaN(in1[11] - 1.0)) &&
      (muDoubleScalarFloor(in1[11] - 1.0) != in1[11] - 1.0)) {
    c_st.site = &c_emlrtRSI;
    error(&c_st);
  }

  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  if ((in2[8] < 0.0) && (!muDoubleScalarIsNaN(in1[11] - 1.0)) &&
      (muDoubleScalarFloor(in1[11] - 1.0) != in1[11] - 1.0)) {
    c_st.site = &c_emlrtRSI;
    error(&c_st);
  }

  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  if ((in2[9] < 0.0) && (!muDoubleScalarIsNaN(in1[11] - 1.0)) &&
      (muDoubleScalarFloor(in1[11] - 1.0) != in1[11] - 1.0)) {
    c_st.site = &c_emlrtRSI;
    error(&c_st);
  }

  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  if ((in2[10] < 0.0) && (!muDoubleScalarIsNaN(in1[11] - 1.0)) &&
      (muDoubleScalarFloor(in1[11] - 1.0) != in1[11] - 1.0)) {
    c_st.site = &c_emlrtRSI;
    error(&c_st);
  }

  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  if ((in2[11] < 0.0) && (!muDoubleScalarIsNaN(in1[11] - 1.0)) &&
      (muDoubleScalarFloor(in1[11] - 1.0) != in1[11] - 1.0)) {
    c_st.site = &c_emlrtRSI;
    error(&c_st);
  }

  fj_vd_mat[0] = -in1[5] * muDoubleScalarPower(in2[6], in1[11] - 1.0);
  fj_vd_mat[1] = 0.0;
  fj_vd_mat[2] = 0.0;
  fj_vd_mat[3] = 0.0;
  fj_vd_mat[4] = 0.0;
  fj_vd_mat[5] = 0.0;
  fj_vd_mat[6] = 0.0;
  fj_vd_mat[7] = -in1[6] * muDoubleScalarPower(in2[7], in1[11] - 1.0);
  fj_vd_mat[8] = 0.0;
  fj_vd_mat[9] = 0.0;
  fj_vd_mat[10] = 0.0;
  fj_vd_mat[11] = 0.0;
  fj_vd_mat[12] = 0.0;
  fj_vd_mat[13] = 0.0;
  fj_vd_mat[14] = -in1[7] * muDoubleScalarPower(in2[8], in1[11] - 1.0);
  fj_vd_mat[15] = 0.0;
  fj_vd_mat[16] = 0.0;
  fj_vd_mat[17] = 0.0;
  fj_vd_mat[18] = 0.0;
  fj_vd_mat[19] = 0.0;
  fj_vd_mat[20] = 0.0;
  fj_vd_mat[21] = -in1[10] * muDoubleScalarPower(in2[9], in1[11] - 1.0);
  fj_vd_mat[22] = 0.0;
  fj_vd_mat[23] = 0.0;
  fj_vd_mat[24] = 0.0;
  fj_vd_mat[25] = 0.0;
  fj_vd_mat[26] = 0.0;
  fj_vd_mat[27] = 0.0;
  fj_vd_mat[28] = -in1[8] * muDoubleScalarPower(in2[10], in1[11] - 1.0);
  fj_vd_mat[29] = 0.0;
  fj_vd_mat[30] = 0.0;
  fj_vd_mat[31] = 0.0;
  fj_vd_mat[32] = 0.0;
  fj_vd_mat[33] = 0.0;
  fj_vd_mat[34] = 0.0;
  fj_vd_mat[35] = -in1[9] * muDoubleScalarPower(in2[11], in1[11] - 1.0);
}

/* End of code generation (fj_vd_matF.c) */
