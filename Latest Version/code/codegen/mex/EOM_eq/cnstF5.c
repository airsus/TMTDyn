/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cnstF5.c
 *
 * Code generation for function 'cnstF5'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM_eq.h"
#include "cnstF5.h"
#include "error.h"
#include "sqrt.h"
#include "EOM_eq_data.h"

/* Variable Definitions */
static emlrtRSInfo fbb_emlrtRSI = { 26,/* lineNo */
  "cnstF5",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/cnstF5.m"/* pathName */
};

static emlrtRSInfo gbb_emlrtRSI = { 27,/* lineNo */
  "cnstF5",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/cnstF5.m"/* pathName */
};

static emlrtRSInfo hbb_emlrtRSI = { 28,/* lineNo */
  "cnstF5",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/cnstF5.m"/* pathName */
};

static emlrtRSInfo ibb_emlrtRSI = { 30,/* lineNo */
  "cnstF5",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/cnstF5.m"/* pathName */
};

static emlrtRSInfo jbb_emlrtRSI = { 34,/* lineNo */
  "cnstF5",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/cnstF5.m"/* pathName */
};

static emlrtRSInfo kbb_emlrtRSI = { 114,/* lineNo */
  "cnstF5",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/cnstF5.m"/* pathName */
};

/* Function Definitions */
void cnstF5(const emlrtStack *sp, const real_T in2[198], real_T out1[91], real_T
            out2[91], real_T *out3)
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9_tmp;
  real_T t214;
  real_T t10;
  real_T t11;
  real_T t14_tmp;
  real_T t15_tmp;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19_tmp;
  real_T t20;
  real_T t22_tmp;
  real_T t23;
  real_T t217;
  real_T t41_tmp;
  real_T t41;
  real_T t42_tmp;
  real_T b_t42_tmp;
  real_T t24;
  real_T t26;
  real_T t27_tmp;
  real_T t28_tmp;
  real_T t29;
  real_T t30_tmp;
  real_T t30;
  real_T t31_tmp;
  real_T t44;
  real_T t45_tmp_tmp;
  real_T t45_tmp;
  real_T t45;
  real_T t32;
  real_T t33_tmp;
  real_T t34_tmp;
  real_T t35_tmp;
  real_T t48_tmp;
  real_T t36_tmp;
  real_T t37_tmp;
  real_T t38_tmp;
  real_T t39_tmp;
  real_T t46_tmp;
  real_T t40_tmp;
  real_T t47_tmp;
  real_T t49_tmp;
  real_T t50_tmp;
  real_T t50;
  real_T t52;
  real_T t54_tmp;
  real_T t63_tmp;
  real_T t64_tmp;
  real_T t55_tmp;
  real_T t56_tmp;
  real_T t57_tmp;
  real_T t58_tmp;
  real_T t59_tmp;
  real_T t60_tmp;
  real_T t61_tmp;
  real_T t65_tmp;
  real_T t62;
  real_T t68;
  real_T t70_tmp_tmp;
  real_T t70_tmp;
  real_T t70;
  real_T t71_tmp;
  real_T b_t71_tmp;
  real_T t72_tmp;
  real_T t73;
  real_T t74;
  real_T t75_tmp;
  real_T t76;
  real_T t77;
  real_T t78;
  real_T t79_tmp;
  real_T t80;
  real_T t83_tmp;
  real_T t83;
  real_T t81_tmp;
  real_T t85;
  real_T t86;
  real_T t87;
  real_T t88;
  real_T t89;
  real_T t90;
  real_T t92;
  real_T t95;
  real_T t108;
  real_T t97_tmp;
  real_T t97;
  real_T t98;
  real_T t101_tmp;
  real_T t101;
  real_T t103;
  real_T t105;
  real_T t106;
  real_T t231;
  real_T t113;
  real_T t115;
  real_T t117;
  real_T t118;
  real_T t120;
  real_T t124_tmp;
  real_T t124;
  real_T t125;
  real_T t126;
  real_T t127;
  real_T t128;
  real_T t129;
  real_T t130;
  real_T t136;
  real_T t138;
  real_T t140;
  real_T t141;
  real_T t146;
  real_T t147;
  real_T t150;
  real_T t151;
  real_T t153;
  real_T t156;
  real_T t302;
  real_T t160;
  real_T t161;
  real_T t162;
  real_T t163;
  real_T t164;
  real_T t165;
  real_T t169;
  real_T t173;
  real_T t178_tmp;
  real_T t178;
  real_T t181;
  real_T t296;
  real_T out1_tmp;
  real_T b_out1_tmp;
  real_T c_out1_tmp;
  real_T d_out1_tmp;
  real_T t300;
  real_T t301;
  real_T e_out1_tmp;
  real_T f_out1_tmp;
  real_T g_out1_tmp;
  real_T h_out1_tmp;
  real_T i_out1_tmp;
  real_T j_out1_tmp;
  real_T k_out1_tmp;
  real_T l_out1_tmp;
  real_T m_out1_tmp;
  real_T n_out1_tmp;
  real_T o_out1_tmp;
  real_T t183;
  real_T t206;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* CNSTF5 */
  /*     [OUT1,OUT2,OUT3] = CNSTF5(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     08-Jan-2019 02:48:21 */
  st.site = &fbb_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t2 = in2[3] * in2[3];
  st.site = &gbb_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t3 = in2[4] * in2[4];
  st.site = &hbb_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t4 = in2[5] * in2[5];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t6 = t5;
  st.site = &ibb_emlrtRSI;
  b_sqrt(&st, &t6);
  t7 = in2[4] * 0.038;
  t8 = t6 * 0.03;
  t9_tmp = t7 - t8;
  t214 = t5;
  st.site = &jbb_emlrtRSI;
  b_sqrt(&st, &t214);
  t10 = 1.0 / t214;
  t11 = in2[3] * 0.038;
  t14_tmp = in2[4] * 0.03 + t6 * 0.038;
  t15_tmp = in2[3] * t9_tmp;
  t16 = in2[3] * 0.03;
  t17 = in2[5] * 0.038;
  t18 = t16 - t17;
  t19_tmp = in2[5] * t14_tmp;
  t20 = in2[5] * 0.03;
  t214 = t11 + t20;
  t22_tmp = in2[4] * t214;
  t23 = in2[5] * 0.06;
  t217 = in2[3] * in2[4];
  t41_tmp = t217 * t10;
  t41 = t41_tmp * 0.03;
  t42_tmp = in2[3] * t10;
  b_t42_tmp = t42_tmp * t14_tmp;
  t24 = ((t11 + t23) - t41) - b_t42_tmp;
  t26 = t41_tmp * 0.038;
  t27_tmp = t15_tmp * t10;
  t28_tmp = ((in2[5] * 0.076 + t26) + t27_tmp) - in2[3] * 0.09;
  t29 = in2[4] * 0.076;
  t30_tmp = t2 * t10;
  t30 = t30_tmp * 0.03;
  t31_tmp = t42_tmp * t18;
  t44 = t6 * 0.06;
  t45_tmp_tmp = in2[3] * in2[5];
  t45_tmp = t45_tmp_tmp * t10;
  t45 = t45_tmp * 0.038;
  t32 = (((t29 + t30) + t31_tmp) - t44) - t45;
  t33_tmp = t6 * t14_tmp;
  t34_tmp = in2[3] * t214;
  t35_tmp = in2[5] * t18;
  t48_tmp = in2[4] * t9_tmp;
  t36_tmp = ((((-in2[0] + in2[72]) + t33_tmp) + t34_tmp) + t35_tmp) - t48_tmp;
  t37_tmp = t6 * t9_tmp;
  t38_tmp = in2[4] * t14_tmp;
  t39_tmp = in2[3] * t18;
  t46_tmp = in2[5] * t214;
  t40_tmp = ((((in2[2] - in2[74]) + t37_tmp) + t38_tmp) + t39_tmp) - t46_tmp;
  t47_tmp = t6 * t18;
  t49_tmp = ((((-in2[1] + in2[73]) + t15_tmp) + t19_tmp) + t22_tmp) - t47_tmp;
  t50_tmp = in2[4] * t10;
  t50 = t50_tmp * 0.03;
  t52 = t50_tmp * 0.038;
  t54_tmp = t6 * (t50 + 0.038);
  t63_tmp = in2[4] * (t52 - 0.03);
  t64_tmp = t48_tmp * t10;
  t55_tmp = ((t14_tmp + t54_tmp) - t63_tmp) - t64_tmp;
  t56_tmp = t6 * (t52 - 0.03);
  t57_tmp = in2[4] * (t50 + 0.038);
  t58_tmp = t50_tmp * t14_tmp;
  t59_tmp = ((t9_tmp + t56_tmp) + t57_tmp) + t58_tmp;
  t60_tmp = in2[3] * (t50 + 0.038);
  t61_tmp = t50_tmp * t18;
  t65_tmp = in2[5] * (t52 - 0.03);
  t62 = ((t214 + t60_tmp) + t61_tmp) - t65_tmp;
  t68 = (t6 * t40_tmp + in2[3] * t49_tmp) - in2[4] * t36_tmp;
  t70_tmp_tmp = in2[4] * in2[5];
  t70_tmp = t70_tmp_tmp * t10;
  t70 = t70_tmp * 0.03;
  t71_tmp = in2[5] * t10;
  b_t71_tmp = t71_tmp * t14_tmp;
  t72_tmp = ((in2[5] * 0.114 + t70) + b_t71_tmp) - in2[3] * 0.06;
  t73 = in2[3] * 0.076;
  t74 = t70_tmp * 0.038;
  t75_tmp = in2[5] * t9_tmp * t10;
  t76 = ((t20 + t73) + t74) + t75_tmp;
  t77 = in2[4] * 0.06;
  t78 = t6 * 0.076;
  t79_tmp = t71_tmp * t18;
  t80 = t45_tmp * 0.03;
  t83_tmp = t4 * t10;
  t83 = t83_tmp * 0.038;
  t81_tmp = (((t77 + t78) + t79_tmp) + t80) - t83;
  t85 = in2[3] * t6 * 2.0;
  t86 = t2 * 2.0;
  t87 = t3 * 2.0;
  t88 = t6 * 2.0;
  t89 = in2[5] * 2.0;
  st.site = &kbb_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  if (t5 < 0.0) {
    c_st.site = &ug_emlrtRSI;
    error(&c_st);
  }

  t90 = 1.0 / muDoubleScalarPower(t5, 1.5);
  t92 = 1.0 / (((t2 + t3) + t4) - 1.0);
  t95 = t10 * t18;
  t108 = t71_tmp * 0.038;
  t97_tmp = in2[5] * t2 * t90;
  t97 = ((((t42_tmp * 0.15 + in2[3] * t2 * t90 * 0.03) + t95) + t2 * t18 * t90)
         - t108) - t97_tmp * 0.038;
  t98 = t9_tmp * t10;
  t214 = in2[4] * t2 * t90;
  t5 = t2 * t92;
  t101_tmp = t52 + t98;
  t101 = (((t101_tmp + t2 * t9_tmp * t90) + t214 * 0.038) - t5 * 0.03) - 0.09;
  t103 = t10 * t14_tmp;
  t105 = t214 * 0.03;
  t106 = ((((t50 + t5 * 0.038) + t103) + t2 * t14_tmp * t90) + t105) - 0.038;
  t231 = ((((in2[1] - in2[73]) - t15_tmp) - t19_tmp) - t22_tmp) + t47_tmp;
  t113 = (((t231 + t6 * t28_tmp) + in2[4] * t24) + t42_tmp * t40_tmp) - in2[3] *
    t32;
  t214 = t217 * in2[5] * t90;
  t115 = t214 * 0.03;
  t5 = t45_tmp_tmp * t92;
  t117 = ((t5 * 0.038 + t115) + t45_tmp_tmp * t14_tmp * t90) - 0.06;
  t118 = t214 * 0.038;
  t120 = ((t118 + t45_tmp_tmp * t9_tmp * t90) - t5 * 0.03) + 0.076;
  t124_tmp = in2[3] * t4 * t90;
  t124 = (((t71_tmp * 0.06 + t97_tmp * 0.03) + t45_tmp_tmp * t18 * t90) -
          t42_tmp * 0.076) - t124_tmp * 0.038;
  t125 = in2[3] * t24;
  t126 = in2[5] * t72_tmp;
  t127 = in2[3] * t76;
  t128 = in2[5] * t28_tmp;
  t129 = t6 * t81_tmp;
  t130 = in2[4] * t32;
  t136 = ((in2[4] * t72_tmp + in2[3] * t81_tmp) - t6 * t76) - t71_tmp * t40_tmp;
  t138 = t88 - t30_tmp * 2.0;
  t140 = in2[3] * t55_tmp;
  t141 = in2[4] * t28_tmp;
  t214 = in2[3] * t3 * t90;
  t146 = ((t42_tmp * 0.038 + t42_tmp * (t50 + 0.038)) + t214 * 0.038) + t217 *
    t9_tmp * t90;
  t147 = t42_tmp * 0.03;
  t150 = ((t147 + t214 * 0.03) + t217 * t14_tmp * t90) - t42_tmp * (t52 - 0.03);
  t151 = t50_tmp * 0.06;
  t153 = (((t105 - t118) + t151) + t217 * t18 * t90) + 0.076;
  t105 = t42_tmp * t36_tmp;
  t156 = t50_tmp * t49_tmp;
  t302 = ((((in2[0] - in2[72]) - t33_tmp) - t34_tmp) - t35_tmp) + t48_tmp;
  t160 = (((t302 + t6 * t55_tmp) + in2[4] * t59_tmp) + in2[3] * t62) - t50_tmp *
    t40_tmp;
  t161 = t41_tmp * 2.0;
  t162 = t89 - t161;
  t163 = t6 * t72_tmp;
  t164 = in2[4] * t76;
  t165 = in2[4] * t62;
  t214 = in2[5] * t3 * t90;
  t169 = ((t108 + t71_tmp * (t50 + 0.038)) + t214 * 0.038) + t70_tmp_tmp *
    t9_tmp * t90;
  t173 = ((t71_tmp * 0.03 + t214 * 0.03) + t70_tmp_tmp * t14_tmp * t90) -
    t71_tmp * (t52 - 0.03);
  t108 = t50_tmp * 0.076;
  t178_tmp = in2[4] * t4 * t90;
  t178 = t178_tmp * 0.038;
  t115 = (((t115 + t70_tmp_tmp * t18 * t90) - t108) - t178) + 0.06;
  t181 = t71_tmp * t36_tmp;
  t5 = in2[4] * t6 * 2.0;
  out1[0] = t45_tmp_tmp * -2.0 - t5;
  t97_tmp = t70_tmp_tmp * 2.0;
  out1[1] = t85 - t97_tmp;
  out1[2] = (t86 + t87) - 1.0;
  t118 = in2[5] * t32;
  t296 = t6 * t24;
  out1_tmp = in2[5] * t24;
  b_out1_tmp = in2[3] * t28_tmp;
  c_out1_tmp = t6 * t32;
  d_out1_tmp = t42_tmp * t49_tmp;
  out1[3] = ((((((-t6 * (((((-in2[1] + in2[73]) + t15_tmp) + t19_tmp) + t22_tmp)
    - t6 * t18) + in2[3] * ((((t40_tmp + out1_tmp) - b_out1_tmp) - c_out1_tmp) +
    d_out1_tmp)) + in2[5] * t36_tmp) + in2[3] * t40_tmp) + t6 * t113) - in2[4] *
              (((t141 + t105) - t118) - t296)) + in2[5] * (((t36_tmp + t125) +
    t128) + t130)) + t42_tmp * t68;
  t300 = in2[5] * t59_tmp;
  t301 = t6 * t62;
  e_out1_tmp = in2[3] * t59_tmp;
  f_out1_tmp = in2[5] * t55_tmp;
  g_out1_tmp = in2[4] * t55_tmp;
  h_out1_tmp = in2[5] * t62;
  i_out1_tmp = t6 * t59_tmp;
  j_out1_tmp = t50_tmp * t36_tmp;
  out1[4] = ((((((in2[4] * ((((t40_tmp + g_out1_tmp) + h_out1_tmp) - i_out1_tmp)
    - j_out1_tmp) + in2[4] * t40_tmp) + in2[5] * t49_tmp) + t6 * t36_tmp) - t6 *
               t160) + in2[5] * (((t49_tmp + t165) - f_out1_tmp) - e_out1_tmp))
             + in2[3] * (((t140 + t156) - t300) - t301)) + t50_tmp * t68;
  k_out1_tmp = in2[5] * t81_tmp;
  l_out1_tmp = t71_tmp * t49_tmp;
  m_out1_tmp = in2[3] * t72_tmp;
  n_out1_tmp = in2[5] * t76;
  o_out1_tmp = in2[4] * t81_tmp;
  out1[5] = ((((((-in2[4] * ((((t231 + t163) + t164) + t181) - k_out1_tmp) +
                  in2[3] * t36_tmp) - in2[5] * t40_tmp) + in2[4] * t49_tmp) - t6
               * t136) - in2[5] * (((t40_tmp + m_out1_tmp) - n_out1_tmp) -
    o_out1_tmp)) - in2[3] * ((((t302 + t126) + t127) + t129) - l_out1_tmp)) +
    t71_tmp * t68;
  memset(&out1[6], 0, 66U * sizeof(real_T));
  out1[72] = t45_tmp_tmp * 2.0 + t5;
  out1[73] = -t85 + t97_tmp;
  out1[74] = (-t86 - t87) + 1.0;
  memset(&out1[75], 0, sizeof(real_T) << 4);
  t183 = t88 - t3 * t10 * 2.0;
  t206 = (((((((((((((-t140 + t141) + t105) - t156) + t300) + t301) + t6 *
                 (((((((((((-t20 + t41) + b_t42_tmp) + t60_tmp) + t61_tmp) -
                        t65_tmp) + in2[4] * t150) + in2[3] * t153) + t50_tmp *
                     t28_tmp) - t6 * t146) - t42_tmp * t55_tmp) - t217 * t40_tmp
                  * t90)) + in2[5] * ((((((((((-t7 + t8) - t30) - t31_tmp) + t45)
    + t56_tmp) + t57_tmp) + t58_tmp) + in2[3] * t150) - in2[5] * t146) - in2[4] *
    t153)) + in2[4] * ((((((t28_tmp + t6 * t150) + in2[4] * t146) + t50_tmp *
    t24) + t217 * t36_tmp * t90) - in2[5] * t153) - t42_tmp * t59_tmp)) +
              t50_tmp * t113) - t118) - in2[3] * ((((((t55_tmp + t50_tmp * t32)
    + t42_tmp * t62) + t217 * t49_tmp * t90) - in2[3] * t146) - in2[5] * t150) -
             t6 * t153)) - t296) - t42_tmp * t160) - t217 * t68 * t90;
  t7 = t89 + t161;
  t8 = in2[2] * 2.0;
  t214 = t3 * t90;
  t5 = t10 * 0.03 + t214 * 0.03;
  t214 = t10 * 0.038 + t214 * 0.038;
  t217 = ((t95 + in2[3] * t5) + t3 * t18 * t90) - in2[5] * t214;
  t151 = (((((t103 + t151) + t6 * t214) + in2[4] * t5) + t3 * t14_tmp * t90) -
          t50_tmp * (t52 - 0.03) * 2.0) + 0.076;
  t87 = (((((t98 + t108) + in2[4] * t214) + t3 * t9_tmp * t90) + t50_tmp * (t50
           + 0.038) * 2.0) - t6 * t5) - 0.06;
  t88 = t10 * t36_tmp;
  t86 = t37_tmp * 2.0;
  t231 = t38_tmp * 2.0;
  t85 = t10 * t68;
  t146 = t39_tmp * 2.0;
  t150 = ((((((((((((((((((t163 + t164) - t165) + t181) + in2[1] * 2.0) - in2[73]
                       * 2.0) + e_out1_tmp) + f_out1_tmp) + in2[3] *
                    ((((((t59_tmp + in2[5] * t173) + in2[3] * t169) + t6 * t115)
                       - t71_tmp * t62) - t50_tmp * t81_tmp) - t70_tmp_tmp *
                     t49_tmp * t90)) + t6 * ((((((t72_tmp + in2[4] * t173) +
    in2[3] * t115) + t50_tmp * t76) - t6 * t169) - t71_tmp * t55_tmp) -
    t70_tmp_tmp * t40_tmp * t90)) + t47_tmp * 2.0) + in2[4] * (((((((((((t11 -
    t60_tmp) - t61_tmp) + t65_tmp) + t74) + t75_tmp) + t6 * t173) + in2[4] *
    t169) + t70_tmp_tmp * t36_tmp * t90) - in2[5] * t115) - t71_tmp * t59_tmp) -
    t50_tmp * t72_tmp)) - t15_tmp * 2.0) - t19_tmp * 2.0) - t22_tmp * 2.0) -
             k_out1_tmp) - in2[5] * (((((((((t14_tmp - t54_tmp) + t63_tmp) +
    t64_tmp) + t79_tmp) + t80) - t83) + in2[5] * t169) + in2[4] * t115) - in2[3]
             * t173)) - t50_tmp * t136) - t71_tmp * t160) - t70_tmp_tmp * t68 *
    t90;
  t140 = in2[3] * 2.0 - t70_tmp * 2.0;
  t141 = in2[4] * 2.0 + t45_tmp * 2.0;
  t161 = ((((t95 + t147) + t4 * t18 * t90) + t124_tmp * 0.03) - t71_tmp * 0.19)
    - in2[5] * t4 * t90 * 0.038;
  t214 = t4 * t92;
  t156 = ((((t50 + t103) + t214 * 0.038) + t4 * t14_tmp * t90) + t178_tmp * 0.03)
    + 0.114;
  t296 = (((t101_tmp + t178) + t4 * t9_tmp * t90) - t214 * 0.03) + 0.03;
  t300 = t138 * in2[102];
  t301 = in2[3] * in2[102] * 4.0;
  t302 = in2[4] * in2[103] * 4.0;
  t153 = t140 * in2[104];
  out2[0] = (-t183 * in2[103] - t153) - in2[102] * (t89 - in2[3] * in2[4] * t10 *
    2.0);
  t105 = t7 * in2[103];
  t108 = t141 * in2[104];
  out2[1] = (t300 - t105) - t108;
  out2[2] = t301 + t302;
  t115 = ((((in2[74] * -2.0 + t8) + t86) + t231) + t85) + t146;
  t97_tmp = t46_tmp * 2.0;
  t118 = t10 * t40_tmp;
  t5 = t10 * t49_tmp;
  t214 = ((((((((((((((((((t125 - t126) - t127) + t128) - t129) + t130) - in2[0]
                      * 2.0) + in2[72] * 2.0) + t33_tmp * 2.0) + t34_tmp * 2.0)
                  + t35_tmp * 2.0) + t42_tmp * t136) + l_out1_tmp) + t45_tmp_tmp
               * t68 * t90) - t48_tmp * 2.0) - in2[4] * ((((((((((-t29 - t30) -
    t31_tmp) + t44) + t45) + in2[4] * t120) + t6 * t117) + t71_tmp * t24) +
    t45_tmp_tmp * t36_tmp * t90) - in2[5] * t124) - t42_tmp * t72_tmp)) - in2[3]
            * (((((((((((t11 - t20) + t41) + b_t42_tmp) + t74) + t75_tmp) + in2
                    [5] * t117) + in2[3] * t120) + t6 * t124) - t71_tmp * t32) -
                t42_tmp * t81_tmp) - t45_tmp_tmp * t49_tmp * t90)) - in2[5] *
           ((((((((t16 + t17) - t26) - t27_tmp) + t70) + b_t71_tmp) + in2[3] *
              t117) - in2[5] * t120) - in2[4] * t124)) - t6 * ((((((t81_tmp +
    in2[4] * t117) + in2[3] * t124) + t42_tmp * t76) + t71_tmp * t28_tmp) - t6 *
            t120) - t45_tmp_tmp * t40_tmp * t90)) - t71_tmp * t113;
  out2[3] = (((((((in2[102] * (((((((((((t115 - t6 * ((((((((((in2[4] * 0.152 -
    t6 * 0.12) + in2[3] * t97) + in2[4] * t106) + t30_tmp * 0.06) - t118) - t6 *
    t101) - t45_tmp * 0.076) + t31_tmp * 2.0) + t42_tmp * t28_tmp * 2.0) - t2 *
    t40_tmp * t90)) - t97_tmp) + out1_tmp * 2.0) - b_out1_tmp * 2.0) -
    c_out1_tmp * 2.0) + in2[5] * ((((((in2[5] * 0.12 + t73) + in2[4] * t97) +
    in2[5] * t101) - in2[3] * t106) - t41_tmp * 0.06) - b_t42_tmp * 2.0)) - in2
    [3] * (((((((((in2[3] * -0.18 + in2[5] * 0.152) + in2[3] * t101) + in2[5] *
                 t106) - t5) + t6 * t97) + t41_tmp * 0.076) + t27_tmp * 2.0) -
            t42_tmp * t32 * 2.0) - t2 * t49_tmp * t90)) - in2[4] * (((((t88 -
    in2[5] * t97) + in2[4] * t101) + t6 * t106) + t42_tmp * t24 * 2.0) + t2 *
    t36_tmp * t90)) + d_out1_tmp * 2.0) - t42_tmp * t113 * 2.0) + t2 * t68 * t90)
                   + in2[104] * t214) + in2[3] * in2[101] * 4.0) - in2[3] * in2
                 [173] * 4.0) + t138 * in2[100]) - t162 * in2[99]) - t206 * in2
              [103]) - t138 * in2[172]) + t162 * in2[171];
  out2[4] = (((((((in2[4] * in2[101] * 4.0 - in2[4] * in2[173] * 4.0) - t183 *
                  in2[99]) - t7 * in2[100]) - t206 * in2[102]) + t183 * in2[171])
              - t150 * in2[104]) + t7 * in2[172]) + in2[103] * (((((((((((t115 +
    in2[5] * (((((((t23 + t73) + t60_tmp * 2.0) - t65_tmp * 2.0) + in2[4] * t217)
                - in2[3] * t151) + in2[5] * t87) + t61_tmp * 2.0)) - t97_tmp) +
    g_out1_tmp * 2.0) + h_out1_tmp * 2.0) - i_out1_tmp * 2.0) - t6 *
    ((((((((((t29 - t44) + t57_tmp * 2.0) + in2[3] * t217) + in2[4] * t151) -
          t118) + t56_tmp * 2.0) - t6 * t87) + t58_tmp * 2.0) - t50_tmp *
      t55_tmp * 2.0) - t3 * t40_tmp * t90)) - in2[3] * (((((in2[5] * t151 + in2
    [3] * t87) - t5) + t6 * t217) - t50_tmp * t62 * 2.0) - t3 * t49_tmp * t90))
    - in2[4] * ((((((((((-t77 - t78) + t88) + t63_tmp * 2.0) - in2[5] * t217) +
                     in2[4] * t87) - t54_tmp * 2.0) + t6 * t151) + t64_tmp * 2.0)
                 - t50_tmp * t59_tmp * 2.0) + t3 * t36_tmp * t90)) - j_out1_tmp *
    2.0) + t50_tmp * t160 * 2.0) + t3 * t68 * t90);
  out2[5] = (((((in2[102] * t214 + in2[104] * (((((((((((((((in2[74] * 2.0 - t8)
    - t86) - t231) + t85) - t146) + t97_tmp) - m_out1_tmp * 2.0) + n_out1_tmp *
    2.0) + o_out1_tmp * 2.0) + in2[4] * ((((((((((in2[4] * 0.12 + t6 * 0.152) -
    t88) + in2[5] * t161) - in2[4] * t296) - t83_tmp * 0.076) - t6 * t156) +
    t45_tmp * 0.06) + t79_tmp * 2.0) + t71_tmp * t72_tmp * 2.0) - t4 * t36_tmp *
    t90)) + in2[5] * ((((((in2[3] * 0.152 + t23) + in2[4] * t161) - in2[3] *
    t156) + in2[5] * t296) + t70_tmp * 0.076) + t75_tmp * 2.0)) - t6 * (((((in2
    [3] * t161 + in2[4] * t156) - t118) - t6 * t296) + t71_tmp * t76 * 2.0) - t4
    * t40_tmp * t90)) - in2[3] * (((((((((in2[3] * -0.12 + in2[5] * 0.228) +
    in2[3] * t296) + in2[5] * t156) - t5) + t6 * t161) + t70_tmp * 0.06) +
    b_t71_tmp * 2.0) - t71_tmp * t81_tmp * 2.0) - t4 * t49_tmp * t90)) + t71_tmp
    * t136 * 2.0) + t4 * t68 * t90)) - t150 * in2[103]) - t140 * in2[99]) - t141
              * in2[100]) + t140 * in2[171]) + t141 * in2[172];
  memset(&out2[6], 0, 66U * sizeof(real_T));
  out2[72] = (t162 * in2[102] + t183 * in2[103]) + t153;
  out2[73] = (-t300 + t105) + t108;
  out2[74] = -t301 - t302;
  memset(&out2[75], 0, sizeof(real_T) << 4);
  *out3 = 0.0;
}

/* End of code generation (cnstF5.c) */
