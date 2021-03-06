/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cnstF6.c
 *
 * Code generation for function 'cnstF6'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM_eq.h"
#include "cnstF6.h"
#include "error.h"
#include "sqrt.h"
#include "EOM_eq_data.h"

/* Variable Definitions */
static emlrtRSInfo lbb_emlrtRSI = { 26,/* lineNo */
  "cnstF6",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/cnstF6.m"/* pathName */
};

static emlrtRSInfo mbb_emlrtRSI = { 27,/* lineNo */
  "cnstF6",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/cnstF6.m"/* pathName */
};

static emlrtRSInfo nbb_emlrtRSI = { 28,/* lineNo */
  "cnstF6",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/cnstF6.m"/* pathName */
};

static emlrtRSInfo obb_emlrtRSI = { 30,/* lineNo */
  "cnstF6",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/cnstF6.m"/* pathName */
};

static emlrtRSInfo pbb_emlrtRSI = { 31,/* lineNo */
  "cnstF6",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/cnstF6.m"/* pathName */
};

static emlrtRSInfo qbb_emlrtRSI = { 115,/* lineNo */
  "cnstF6",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/cnstF6.m"/* pathName */
};

/* Function Definitions */
void cnstF6(const emlrtStack *sp, const real_T in2[198], real_T out1[91], real_T
            out2[91], real_T *out3)
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t21;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10_tmp;
  real_T t13_tmp;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18_tmp;
  real_T t19_tmp;
  real_T t20;
  real_T t22_tmp;
  real_T t48_tmp;
  real_T t23_tmp;
  real_T t208;
  real_T t26_tmp;
  real_T t26;
  real_T t27_tmp;
  real_T b_t27_tmp;
  real_T t28_tmp;
  real_T t29;
  real_T t30_tmp;
  real_T t43;
  real_T t31;
  real_T t206;
  real_T t198;
  real_T t197;
  real_T t35_tmp;
  real_T t35;
  real_T t36_tmp;
  real_T t37_tmp_tmp;
  real_T t37_tmp;
  real_T t37;
  real_T t45;
  real_T t46;
  real_T t38_tmp;
  real_T t39_tmp;
  real_T t40_tmp;
  real_T t41_tmp;
  real_T t44_tmp;
  real_T t42_tmp;
  real_T t239;
  real_T t236;
  real_T t47_tmp;
  real_T t50_tmp;
  real_T t50;
  real_T t52;
  real_T t54_tmp;
  real_T t64_tmp;
  real_T t65_tmp;
  real_T t55_tmp;
  real_T t56_tmp;
  real_T t57_tmp;
  real_T t58_tmp;
  real_T t59_tmp;
  real_T t60_tmp;
  real_T t61_tmp;
  real_T t62_tmp;
  real_T t63;
  real_T t68;
  real_T t69;
  real_T t70_tmp_tmp;
  real_T t70_tmp;
  real_T t70;
  real_T t71_tmp;
  real_T b_t71_tmp;
  real_T t72;
  real_T t81;
  real_T t82_tmp;
  real_T t75_tmp;
  real_T t76;
  real_T t77_tmp;
  real_T t77;
  real_T t78_tmp;
  real_T t79;
  real_T t83;
  real_T t80_tmp;
  real_T t85;
  real_T t86;
  real_T t87;
  real_T t88;
  real_T t89;
  real_T t90;
  real_T t91;
  real_T t92;
  real_T t96;
  real_T t100;
  real_T t101;
  real_T t102_tmp;
  real_T t102;
  real_T t105;
  real_T t109;
  real_T t113;
  real_T t114;
  real_T t116;
  real_T t130;
  real_T t118;
  real_T t121;
  real_T t127_tmp;
  real_T t127;
  real_T t128;
  real_T t129;
  real_T t135;
  real_T t137;
  real_T t140;
  real_T t145;
  real_T t148;
  real_T t150;
  real_T t153;
  real_T t154;
  real_T t156;
  real_T t183_tmp;
  real_T b_t183_tmp;
  real_T t242;
  real_T t183;
  real_T t184;
  real_T t188;
  real_T t193;
  real_T t196;
  real_T t200;
  real_T t202;
  real_T out1_tmp;
  real_T b_out1_tmp;
  real_T c_out1_tmp;
  real_T d_out1_tmp;
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
  real_T t207;
  real_T t218;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* CNSTF6 */
  /*     [OUT1,OUT2,OUT3] = CNSTF6(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     08-Jan-2019 02:52:58 */
  st.site = &lbb_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t2 = in2[4] * in2[4];
  st.site = &mbb_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t3 = in2[5] * in2[5];
  st.site = &nbb_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t4 = in2[3] * in2[3];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t6 = t5;
  st.site = &obb_emlrtRSI;
  b_sqrt(&st, &t6);
  t21 = t5;
  st.site = &pbb_emlrtRSI;
  b_sqrt(&st, &t21);
  t7 = 1.0 / t21;
  t8 = in2[4] * 0.03;
  t9 = t6 * 0.038;
  t10_tmp = t8 - t9;
  t13_tmp = in2[4] * 0.038 + t6 * 0.03;
  t14 = in2[3] * 0.038;
  t15 = in2[3] * 0.03;
  t16 = in2[5] * 0.038;
  t17 = t15 + t16;
  t18_tmp = t6 * t10_tmp;
  t19_tmp = in2[4] * t13_tmp;
  t20 = in2[5] * 0.03;
  t21 = t14 - t20;
  t22_tmp = in2[5] * t17;
  t48_tmp = in2[3] * t21;
  t23_tmp = ((((-in2[0] + in2[84]) + t18_tmp) + t19_tmp) + t22_tmp) - t48_tmp;
  t208 = in2[3] * in2[4];
  t26_tmp = t208 * t7;
  t26 = t26_tmp * 0.038;
  t27_tmp = in2[3] * t7;
  b_t27_tmp = t27_tmp * t13_tmp;
  t28_tmp = ((in2[3] * 0.09 + in2[5] * 0.076) + t26) + b_t27_tmp;
  t29 = t26_tmp * 0.03;
  t30_tmp = t27_tmp * t10_tmp;
  t43 = in2[5] * 0.06;
  t31 = ((t14 + t29) + t30_tmp) - t43;
  t206 = in2[3] * t13_tmp;
  t198 = t6 * t17;
  t197 = in2[4] * t21;
  t35_tmp = t4 * t7;
  t35 = t35_tmp * 0.03;
  t36_tmp = t27_tmp * t17;
  t37_tmp_tmp = in2[3] * in2[5];
  t37_tmp = t37_tmp_tmp * t7;
  t37 = t37_tmp * 0.038;
  t45 = in2[4] * 0.076;
  t46 = t6 * 0.06;
  t38_tmp = (((t35 + t36_tmp) + t37) - t45) - t46;
  t39_tmp = in2[4] * t10_tmp;
  t40_tmp = in2[3] * t17;
  t41_tmp = in2[5] * t21;
  t44_tmp = t6 * t13_tmp;
  t42_tmp = ((((in2[2] - in2[86]) + t39_tmp) + t40_tmp) + t41_tmp) - t44_tmp;
  t239 = in2[5] * t10_tmp;
  t236 = (((in2[1] - in2[85]) + t206) + t198) + t197;
  t47_tmp = t236 - t239;
  t50_tmp = in2[4] * t7;
  t50 = t50_tmp * 0.03;
  t52 = t50_tmp * 0.038;
  t54_tmp = t6 * (t52 + 0.03);
  t64_tmp = in2[4] * (t50 - 0.038);
  t65_tmp = t50_tmp * t10_tmp;
  t55_tmp = ((t13_tmp + t54_tmp) - t64_tmp) - t65_tmp;
  t56_tmp = t6 * (t50 - 0.038);
  t57_tmp = in2[4] * (t52 + 0.03);
  t58_tmp = t50_tmp * t13_tmp;
  t59_tmp = ((t10_tmp + t56_tmp) + t57_tmp) + t58_tmp;
  t60_tmp = in2[3] * (t50 - 0.038);
  t61_tmp = in2[5] * (t52 + 0.03);
  t62_tmp = t50_tmp * t17;
  t63 = (((-t14 + t20) + t60_tmp) + t61_tmp) + t62_tmp;
  t68 = (t6 * t23_tmp + in2[4] * t42_tmp) - in2[5] * t47_tmp;
  t69 = in2[3] * 0.076;
  t70_tmp_tmp = in2[4] * in2[5];
  t70_tmp = t70_tmp_tmp * t7;
  t70 = t70_tmp * 0.038;
  t71_tmp = in2[5] * t7;
  b_t71_tmp = t71_tmp * t13_tmp;
  t72 = ((-t20 + t69) + t70) + b_t71_tmp;
  t81 = t70_tmp * 0.03;
  t82_tmp = t71_tmp * t10_tmp;
  t75_tmp = ((in2[3] * 0.06 + in2[5] * 0.114) - t81) - t82_tmp;
  t76 = in2[4] * 0.06;
  t77_tmp = t3 * t7;
  t77 = t77_tmp * 0.038;
  t78_tmp = t71_tmp * t17;
  t79 = t37_tmp * 0.03;
  t83 = t6 * 0.076;
  t80_tmp = (((t76 + t77) + t78_tmp) + t79) - t83;
  t85 = t2 * 2.0;
  t86 = t3 * 2.0;
  t87 = in2[4] * t6 * 2.0;
  t88 = t6 * 2.0;
  t89 = in2[3] * 2.0;
  t90 = in2[5] * t59_tmp;
  st.site = &qbb_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  if (t5 < 0.0) {
    c_st.site = &ug_emlrtRSI;
    error(&c_st);
  }

  t91 = 1.0 / muDoubleScalarPower(t5, 1.5);
  t92 = t27_tmp * 0.03;
  t21 = in2[3] * t2 * t91;
  t96 = ((t92 + t27_tmp * (t52 + 0.03)) + t21 * 0.03) + t208 * t10_tmp * t91;
  t100 = ((t27_tmp * 0.038 + t21 * 0.038) + t208 * t13_tmp * t91) - t27_tmp *
    (t50 - 0.038);
  t101 = t50_tmp * 0.06;
  t102_tmp = in2[4] * t4 * t91;
  t102 = t102_tmp * 0.03;
  t21 = t208 * in2[5] * t91;
  t5 = t21 * 0.038;
  t105 = (((t101 + t102) + t5) + t208 * t17 * t91) - 0.076;
  t109 = t27_tmp * t42_tmp;
  t113 = (((t42_tmp + t6 * t55_tmp) + in2[4] * t59_tmp) + in2[5] * t63) -
    t50_tmp * t23_tmp;
  t114 = ((in2[4] * t28_tmp + in2[5] * t38_tmp) - t6 * t31) - t27_tmp * t23_tmp;
  t116 = 1.0 / (((t2 + t3) + t4) - 1.0);
  t130 = t21 * 0.03;
  t21 = t37_tmp_tmp * t116;
  t118 = ((t21 * 0.038 - t130) - t37_tmp_tmp * t10_tmp * t91) + 0.06;
  t121 = ((t5 + t21 * 0.03) + t37_tmp_tmp * t13_tmp * t91) + 0.076;
  t21 = in2[5] * t4 * t91;
  t127_tmp = in2[3] * t3 * t91;
  t127 = (((t27_tmp * 0.076 + t71_tmp * 0.06) + t127_tmp * 0.038) + t21 * 0.03)
    + t37_tmp_tmp * t17 * t91;
  t128 = in2[3] * t28_tmp;
  t129 = in2[5] * t72;
  t135 = (((t47_tmp + t71_tmp * t23_tmp) - t6 * t75_tmp) - in2[4] * t72) - in2[5]
    * t80_tmp;
  t137 = in2[4] * 2.0 - t37_tmp * 2.0;
  t140 = in2[5] * 2.0 + t26_tmp * 2.0;
  t5 = t71_tmp * 0.038;
  t145 = t7 * t17;
  t148 = ((((t27_tmp * 0.15 + t5) + in2[3] * t4 * t91 * 0.03) + t145) + t4 * t17
          * t91) + t21 * 0.038;
  t150 = t7 * t13_tmp;
  t21 = t4 * t116;
  t153 = ((((t52 + t21 * 0.03) + t150) + t4 * t13_tmp * t91) + t102_tmp * 0.038)
    + 0.09;
  t154 = t7 * t10_tmp;
  t156 = ((((t50 + t102) + t154) + t4 * t10_tmp * t91) - t21 * 0.038) + 0.038;
  t102_tmp = in2[4] * t31;
  t102 = in2[3] * t38_tmp;
  t183_tmp = t6 * t28_tmp;
  b_t183_tmp = in2[3] * t55_tmp;
  t242 = in2[4] * t63;
  t183 = ((((((((((((((((((in2[85] * -2.0 + t90) + t109) + in2[1] * 2.0) + in2[5]
                        * ((((((t59_tmp + in2[3] * t100) + t50_tmp * t38_tmp) +
    t27_tmp * t63) - in2[5] * t96) - t6 * t105) - t208 * t47_tmp * t91)) + t206 *
                       2.0) + t198 * 2.0) + in2[3] * (((((((((t13_tmp - t35) -
    t36_tmp) - t37) - t54_tmp) + t64_tmp) + t65_tmp) + in2[3] * t96) + in2[5] *
    t100) - in2[4] * t105)) + t197 * 2.0) + t27_tmp * t113) + t208 * t68 * t91)
                 + t50_tmp * t114) - t239 * 2.0) - t102_tmp) - t102) -
             b_t183_tmp) - t242) - in2[4] * (((((((((((-t20 + t29) + t30_tmp) +
    t60_tmp) + t61_tmp) + t62_tmp) + t6 * t100) + in2[4] * t96) + in2[3] * t105)
              - t50_tmp * t28_tmp) - t27_tmp * t59_tmp) - t208 * t42_tmp * t91))
          - t183_tmp) - t6 * ((((((t28_tmp + in2[4] * t100) + in2[5] * t105) +
    t50_tmp * t31) - t6 * t96) - t27_tmp * t55_tmp) - t208 * t23_tmp * t91);
  t184 = t88 - t2 * t7 * 2.0;
  t188 = in2[4] * t75_tmp;
  t21 = in2[5] * t2 * t91;
  t193 = ((t71_tmp * 0.03 + t71_tmp * (t52 + 0.03)) + t21 * 0.03) + t70_tmp_tmp *
    t10_tmp * t91;
  t196 = ((t5 + t21 * 0.038) + t70_tmp_tmp * t13_tmp * t91) - t71_tmp * (t50 -
    0.038);
  t197 = t50_tmp * 0.076;
  t96 = in2[4] * t3 * t91;
  t198 = t96 * 0.038;
  t200 = (((t130 + t197) + t198) + t70_tmp_tmp * t17 * t91) + 0.06;
  t202 = t71_tmp * t42_tmp;
  out1[0] = (t85 + t86) - 1.0;
  t21 = in2[5] * t6 * 2.0;
  out1[1] = t208 * -2.0 - t21;
  t5 = t37_tmp_tmp * 2.0;
  out1[2] = t87 - t5;
  t35 = in2[5] * t31;
  t37 = t6 * t38_tmp;
  out1_tmp = t27_tmp * t47_tmp;
  b_out1_tmp = in2[5] * t28_tmp;
  c_out1_tmp = in2[3] * t31;
  d_out1_tmp = in2[4] * t38_tmp;
  out1[3] = ((((((in2[3] * t23_tmp - in2[5] * t42_tmp) - in2[4] * t47_tmp) + t6 *
                t114) - in2[4] * (((((t236 + t109) - t239) - t102_tmp) - t102) -
    t183_tmp)) - in2[5] * ((((t42_tmp + t128) - t35) - t37) - out1_tmp)) + in2[3]
             * (((t23_tmp - b_out1_tmp) - c_out1_tmp) + d_out1_tmp)) - t27_tmp *
    t68;
  e_out1_tmp = in2[3] * t59_tmp + in2[5] * t55_tmp;
  f_out1_tmp = t6 * t63;
  g_out1_tmp = t50_tmp * t47_tmp;
  h_out1_tmp = in2[4] * t55_tmp;
  i_out1_tmp = in2[3] * t63;
  j_out1_tmp = t6 * t59_tmp;
  k_out1_tmp = t50_tmp * t42_tmp;
  out1[4] = ((((((-in2[5] * ((e_out1_tmp - f_out1_tmp) - g_out1_tmp) - in2[4] *
                  ((((t23_tmp + h_out1_tmp) - i_out1_tmp) - j_out1_tmp) +
                   k_out1_tmp)) - in2[4] * t23_tmp) - in2[3] * t47_tmp) + t6 *
               t42_tmp) + t6 * t113) - in2[3] * (((t47_tmp + t90) - b_t183_tmp)
              - t242)) - t50_tmp * t68;
  t102_tmp = in2[3] * t75_tmp;
  t102 = in2[4] * t80_tmp;
  t100 = in2[3] * t80_tmp;
  t105 = t6 * t72;
  l_out1_tmp = in2[3] * t72;
  m_out1_tmp = in2[5] * t75_tmp;
  n_out1_tmp = t6 * t80_tmp;
  o_out1_tmp = t71_tmp * t47_tmp;
  out1[5] = ((((((-in2[5] * ((((t23_tmp + l_out1_tmp) + m_out1_tmp) - n_out1_tmp)
    - o_out1_tmp) - in2[5] * t23_tmp) - in2[3] * t42_tmp) - t6 * t47_tmp) - t6 *
               t135) - in2[3] * (((t42_tmp + t129) - t102_tmp) - t102)) - in2[4]
             * (((t188 + t202) - t100) - t105)) - t71_tmp * t68;
  memset(&out1[6], 0, 78U * sizeof(real_T));
  out1[84] = (-t85 - t86) + 1.0;
  out1[85] = t208 * 2.0 + t21;
  out1[86] = -t87 + t5;
  out1[87] = 0.0;
  out1[88] = 0.0;
  out1[89] = 0.0;
  out1[90] = 0.0;
  t206 = t70_tmp * 2.0;
  t207 = t89 - t206;
  t208 = in2[0] * 2.0;
  t21 = t2 * t91;
  t5 = t7 * 0.038 + t21 * 0.038;
  t21 = t7 * 0.03 + t21 * 0.03;
  t218 = ((t145 + in2[3] * t21) + in2[5] * t5) + t2 * t17 * t91;
  t87 = (((((t101 + t154) + in2[4] * t21) + t2 * t10_tmp * t91) + t50_tmp * (t52
           + 0.03) * 2.0) - t6 * t5) - 0.076;
  t86 = (((((t150 + t197) + t6 * t21) + in2[4] * t5) + t2 * t13_tmp * t91) -
         t50_tmp * (t50 - 0.038) * 2.0) + 0.06;
  t85 = t7 * t68;
  t90 = t48_tmp * 2.0;
  t236 = ((((t92 + t145) + t71_tmp * 0.19) + in2[5] * t3 * t91 * 0.038) + t3 *
          t17 * t91) + t127_tmp * 0.03;
  t21 = t3 * t116;
  t239 = ((((t50 + t154) + t3 * t10_tmp * t91) + t96 * 0.03) - t21 * 0.038) -
    0.114;
  t242 = ((((t52 + t150) + t198) + t21 * 0.03) + t3 * t13_tmp * t91) - 0.03;
  t109 = t18_tmp * 2.0;
  b_t183_tmp = t7 * t47_tmp;
  t130 = t19_tmp * 2.0;
  t21 = t22_tmp * 2.0;
  t183_tmp = t7 * t42_tmp;
  t37 = ((((((((((((((((((t128 + t129) + in2[2] * 2.0) - in2[86] * 2.0) + in2[5]
                       * (((((((((((t14 + t20) - t29) - t30_tmp) + t70) +
    b_t71_tmp) + in2[5] * t118) + in2[3] * t121) + t71_tmp * t38_tmp) + t27_tmp *
    t80_tmp) - t6 * t127) - t37_tmp_tmp * t47_tmp * t91)) + t39_tmp * 2.0) +
                     t40_tmp * 2.0) + t41_tmp * 2.0) + in2[3] * ((((((((t15 -
    t16) + t26) + b_t27_tmp) + t81) + t82_tmp) + in2[5] * t121) - in2[3] * t118)
    - in2[4] * t127)) + t71_tmp * t114) + t37_tmp_tmp * t68 * t91) - t35) -
               t102_tmp) - t102) - in2[4] * ((((((t80_tmp + in2[3] * t127) + t6 *
    t121) - in2[4] * t118) - t71_tmp * t28_tmp) - t27_tmp * t72) - t37_tmp_tmp *
              t42_tmp * t91)) - t44_tmp * 2.0) - t37) - t6 * ((((((t38_tmp +
    in2[4] * t121) + in2[5] * t127) + t6 * t118) + t71_tmp * t31) - t27_tmp *
            t75_tmp) - t37_tmp_tmp * t23_tmp * t91)) - out1_tmp) - t27_tmp *
    t135;
  t35 = t88 - t77_tmp * 2.0;
  t197 = ((((((((((((e_out1_tmp + t188) + t202) + in2[5] * ((((((t55_tmp + in2[3]
    * t196) + t50_tmp * t80_tmp) + t71_tmp * t63) - in2[5] * t193) - t6 * t200)
    - t70_tmp_tmp * t47_tmp * t91)) + in2[3] * ((((((((((-t8 + t9) + t56_tmp) +
    t57_tmp) + t58_tmp) - t77) - t78_tmp) - t79) + in2[3] * t193) + in2[5] *
    t196) - in2[4] * t200)) + in2[4] * ((((((t75_tmp + t71_tmp * t59_tmp) +
    t50_tmp * t72) + t70_tmp_tmp * t42_tmp * t91) - in2[4] * t193) - in2[3] *
    t200) - t6 * t196)) + t71_tmp * t113) + t70_tmp_tmp * t68 * t91) - t100) -
             f_out1_tmp) - t105) - t6 * (((((((((((t14 + t60_tmp) + t61_tmp) +
    t62_tmp) + t70) + b_t71_tmp) + in2[4] * t196) + in2[5] * t200) - t6 * t193)
              - t71_tmp * t55_tmp) - t50_tmp * t75_tmp) - t70_tmp_tmp * t23_tmp *
            t91)) - g_out1_tmp) - t50_tmp * t135;
  t100 = t89 + t206;
  t105 = in2[4] * in2[103] * 4.0;
  t96 = in2[5] * in2[104] * 4.0;
  t206 = t184 * in2[103];
  out2[0] = t105 + t96;
  t198 = t35 * in2[104];
  out2[1] = (-t137 * in2[102] - t198) - in2[103] * (t89 - in2[4] * in2[5] * t7 *
    2.0);
  t102_tmp = t140 * in2[102];
  t102 = t100 * in2[104];
  out2[2] = (t206 - t102_tmp) - t102;
  t5 = t7 * t23_tmp;
  out2[3] = (((((-t137 * in2[100] - t140 * in2[101]) - t183 * in2[103]) + t137 *
               in2[184]) + t140 * in2[185]) - t37 * in2[104]) - in2[102] *
    (((((((((((((((in2[84] * -2.0 + t208) + t85) + t90) - in2[4] *
                ((((((((((in2[4] * -0.152 - t6 * 0.12) + in2[3] * t148) + in2[4]
    * t156) + t35_tmp * 0.06) - t183_tmp) + t6 * t153) + t37_tmp * 0.076) +
                   t36_tmp * 2.0) - t27_tmp * t28_tmp * 2.0) - t4 * t42_tmp *
                 t91)) - t130) - t21) + b_out1_tmp * 2.0) + c_out1_tmp * 2.0) -
           d_out1_tmp * 2.0) - t109) + in2[3] * ((((((in2[5] * -0.12 + t69) -
              in2[4] * t148) + in2[5] * t153) + in2[3] * t156) + t26_tmp * 0.06)
          + t30_tmp * 2.0)) - t6 * (((((in2[5] * t148 + in2[4] * t153) - t5) -
           t6 * t156) + t27_tmp * t31 * 2.0) - t4 * t23_tmp * t91)) + in2[5] *
       (((((((((in2[3] * 0.18 + in2[5] * 0.152) + in2[3] * t153) - in2[5] * t156)
             - b_t183_tmp) - t6 * t148) + t26_tmp * 0.076) + b_t27_tmp * 2.0) +
         t27_tmp * t38_tmp * 2.0) - t4 * t47_tmp * t91)) + t27_tmp * t114 * 2.0)
     + t4 * t68 * t91);
  t21 += ((((-t208 + t85) - t90) + in2[84] * 2.0) + t109) + t130;
  out2[4] = (((((((in2[4] * in2[99] * 4.0 - in2[4] * in2[183] * 4.0) - t183 *
                  in2[102]) + t184 * in2[101]) - t207 * in2[100]) - t184 * in2
               [185]) + t207 * in2[184]) - t197 * in2[104]) - in2[103] *
    ((((((((((t21 + in2[4] * ((((((((((t45 + t46) + t183_tmp) - t64_tmp * 2.0) -
    in2[3] * t218) - in2[4] * t87) + t54_tmp * 2.0) - t6 * t86) - t65_tmp * 2.0)
    + t50_tmp * t59_tmp * 2.0) + t2 * t42_tmp * t91)) + h_out1_tmp * 2.0) -
            i_out1_tmp * 2.0) - j_out1_tmp * 2.0) - t6 * ((((((((((t76 - t83) +
    t57_tmp * 2.0) + in2[5] * t218) + in2[4] * t86) - t5) + t56_tmp * 2.0) - t6 *
              t87) + t58_tmp * 2.0) - t50_tmp * t55_tmp * 2.0) - t2 * t23_tmp *
           t91)) - in2[3] * (((((((t43 - t69) + t60_tmp * 2.0) + t61_tmp * 2.0)
             + in2[4] * t218) - in2[3] * t87) - in2[5] * t86) + t62_tmp * 2.0))
        - in2[5] * (((((b_t183_tmp + in2[5] * t87) - in2[3] * t86) + t6 * t218)
                     - t50_tmp * t63 * 2.0) + t2 * t47_tmp * t91)) + k_out1_tmp *
       2.0) + t50_tmp * t113 * 2.0) + t2 * t68 * t91);
  out2[5] = (((((((-in2[104] * ((((((((((t21 + in2[3] * ((((((in2[3] * 0.152 -
    t43) - in2[4] * t236) + in2[3] * t239) + in2[5] * t242) + t70_tmp * 0.076) +
    b_t71_tmp * 2.0)) - t6 * ((((((((((in2[4] * 0.12 - t6 * 0.152) + in2[5] *
    t236) + in2[4] * t242) + t77_tmp * 0.076) - t5) - t6 * t239) + t37_tmp *
    0.06) + t78_tmp * 2.0) - t71_tmp * t75_tmp * 2.0) - t3 * t23_tmp * t91)) +
    l_out1_tmp * 2.0) + m_out1_tmp * 2.0) - n_out1_tmp * 2.0) + in2[4] *
    (((((t183_tmp - in2[3] * t236) - in2[4] * t239) - t6 * t242) + t71_tmp * t72
      * 2.0) + t3 * t42_tmp * t91)) - in2[5] * (((((((((in2[3] * -0.12 - in2[5] *
    0.228) + b_t183_tmp) + in2[5] * t239) - in2[3] * t242) + t6 * t236) +
    t70_tmp * 0.06) + t82_tmp * 2.0) - t71_tmp * t80_tmp * 2.0) + t3 * t47_tmp *
    t91)) - o_out1_tmp * 2.0) - t71_tmp * t135 * 2.0) + t3 * t68 * t91) + in2[5]
                   * in2[99] * 4.0) - in2[5] * in2[183] * 4.0) - t35 * in2[100])
                - t37 * in2[102]) - t100 * in2[101]) - t197 * in2[103]) + t35 *
             in2[184]) + t100 * in2[185];
  memset(&out2[6], 0, 78U * sizeof(real_T));
  out2[84] = -t105 - t96;
  out2[85] = (t137 * in2[102] + t207 * in2[103]) + t198;
  out2[86] = (-t206 + t102_tmp) + t102;
  out2[87] = 0.0;
  out2[88] = 0.0;
  out2[89] = 0.0;
  out2[90] = 0.0;
  *out3 = 0.0;
}

/* End of code generation (cnstF6.c) */
