/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF6.c
 *
 * Code generation for function 'sprdmpF6'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "sprdmpF6.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 28,    /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 29,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 30,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 32,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 33,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 38,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 39,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 40,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 42,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 43,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 44,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 47,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 48,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 49,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 53,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 59,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 71,  /* lineNo */
  "sprdmpF6",                          /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF6.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 49,  /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 61,  /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 12,  /* lineNo */
  "sqrt",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

/* Function Definitions */
void sprdmpF6(const emlrtStack *sp, const real_T in1[34], const real_T in2[12],
              real_T s, real_T out1[6], real_T *out2, real_T *out3, real_T *out4,
              real_T *out5, real_T out6[6], real_T out7[6], real_T *out8)
{
  int32_T i;
  static const int8_T iv0[6] = { 0, 0, 0, 0, 0, 1 };

  real_T a;
  real_T b_a;
  real_T t4;
  real_T t8;
  real_T t11_tmp;
  real_T t11;
  real_T t7;
  real_T t12;
  real_T t13;
  real_T t15;
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
  for (i = 0; i < 6; i++) {
    out1[i] = iv0[i];
  }

  /* SPRDMPF6 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF6(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     05-Jan-2019 21:11:21 */
  st.site = &emlrtRSI;
  b_st.site = &r_emlrtRSI;
  a = in1[2] * in1[2];
  st.site = &b_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  b_a = in1[3] * in1[3];
  st.site = &c_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  t4 = in1[18] * in1[18];
  t8 = muDoubleScalarCos(in1[20]);
  st.site = &d_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  st.site = &e_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  t11_tmp = in1[33] * in1[33];
  t11 = t11_tmp * (t8 * t8);
  t7 = 1.0 / in1[33];
  t8 = muDoubleScalarSin(in1[20]);
  st.site = &f_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  t12 = 1.0 / (t8 * t8);
  st.site = &g_emlrtRSI;
  if (in1[33] < 0.0) {
    b_st.site = &t_emlrtRSI;
    b_error(&b_st);
  }

  t13 = 1.0 / muDoubleScalarSqrt(in1[33]);
  st.site = &h_emlrtRSI;
  t15 = 1.0 / in1[4];
  st.site = &i_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  st.site = &j_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  st.site = &k_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  st.site = &l_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  st.site = &m_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  st.site = &n_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  st.site = &o_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  t8 = (1.0 / t11_tmp * (a * a - b_a * b_a) + t4 * t4 * (1.0 /
         muDoubleScalarPower(t8, 4.0)) * ((t11 - 1.0) * (t11 - 1.0)) * 6.0) *
    3.1415926535897931 / 4.0 - t4 * (t11 - 1.0) * t7 * t12 * (in1[19] * in1[19])
    * 3.1415926535897931 * 3.0;
  *out2 = in1[1] * in2[5] * t7 * t15 * t8;
  st.site = &p_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  *out3 = -in1[9] * in2[11] * muDoubleScalarPower(muDoubleScalarAbs(in2[11]),
    in1[11] - 1.0);
  *out4 = ((((in1[23] * in1[19] * t4 * (t11 - 1.0) * t12 * t13 *
              3.1415926535897931 * 0.9857871488499218 + in1[24] * in1[19] * t4 *
              (t11 - 1.0) * t12 * t13 * 3.1415926535897931 * 0.63838506170774523)
             - in1[25] * in1[19] * t4 * (t11 - 1.0) * t12 * t13 *
             3.1415926535897931 * 0.63838506170774545) - in1[26] * in1[19] * t4 *
            (t11 - 1.0) * t12 * t13 * 3.1415926535897931 * 0.9857871488499218) -
           in1[21] * in1[19] * t4 * (t11 - 1.0) * t12 * t13 * 8.3666002653407556
           * 3.1415926535897931 * 0.041522491349480967) + in1[22] * in1[19] * t4
    * (t11 - 1.0) * t12 * t13 * 8.3666002653407556 * 3.1415926535897931 *
    0.041522491349480967;
  *out5 = in2[5];
  out6[0] = 0.0;
  out6[1] = 0.0;
  out6[2] = 0.0;
  out6[3] = 0.0;
  out6[4] = 0.0;
  out6[5] = -in1[1] * t7 * t15 * t8;
  st.site = &q_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  if ((in2[11] < 0.0) && (!muDoubleScalarIsNaN(in1[11] - 1.0)) &&
      (muDoubleScalarFloor(in1[11] - 1.0) != in1[11] - 1.0)) {
    c_st.site = &s_emlrtRSI;
    error(&c_st);
  }

  out7[0] = 0.0;
  out7[1] = 0.0;
  out7[2] = 0.0;
  out7[3] = 0.0;
  out7[4] = 0.0;
  out7[5] = -in1[9] * muDoubleScalarPower(in2[11], in1[11] - 1.0);
  *out8 = 1.0;
}

/* End of code generation (sprdmpF6.c) */
