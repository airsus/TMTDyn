/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF114.c
 *
 * Code generation for function 'sprdmpF114'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "sprdmpF114.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo ceb_emlrtRSI = { 41,/* lineNo */
  "sprdmpF114",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF114.m"/* pathName */
};

static emlrtRSInfo deb_emlrtRSI = { 47,/* lineNo */
  "sprdmpF114",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF114.m"/* pathName */
};

static emlrtRSInfo heb_emlrtRSI = { 77,/* lineNo */
  "sprdmpF114",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF114.m"/* pathName */
};

static emlrtRSInfo ieb_emlrtRSI = { 89,/* lineNo */
  "sprdmpF114",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF114.m"/* pathName */
};

static emlrtRSInfo seb_emlrtRSI = { 279,/* lineNo */
  "sprdmpF114",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF114.m"/* pathName */
};

/* Function Definitions */
void sprdmpF114(const emlrtStack *sp, const real_T in1[6], const real_T in2[206],
                real_T out1[546], real_T out2[6], real_T out3[6], real_T out4[6])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t176;
  real_T t224;
  real_T t194;
  real_T t17_tmp;
  real_T t17;
  real_T t19;
  real_T t20;
  real_T t218;
  real_T t22_tmp;
  real_T t23_tmp;
  real_T t227;
  real_T t25;
  real_T t166;
  real_T t167;
  real_T t219;
  real_T t27;
  real_T t29_tmp;
  real_T t29;
  real_T t31;
  real_T t44_tmp;
  real_T t32_tmp;
  real_T t32;
  real_T t34;
  real_T t35;
  real_T t36;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t46_tmp;
  real_T t46;
  real_T t48;
  real_T t49;
  real_T t50_tmp;
  real_T t193;
  real_T t51_tmp;
  real_T t52_tmp;
  real_T t52;
  real_T t217;
  real_T t53_tmp;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T a;
  real_T t60_tmp;
  real_T t61_tmp;
  real_T t62_tmp;
  real_T t63_tmp;
  real_T t64;
  real_T t65;
  real_T a_tmp;
  real_T t69;
  real_T t71;
  real_T t75;
  real_T t79;
  real_T t80;
  real_T t81;
  real_T t82;
  real_T t83;
  real_T t84;
  real_T t95_tmp;
  real_T t95;
  real_T t99;
  real_T t104;
  real_T t105;
  real_T t106;
  real_T t110;
  real_T t111;
  real_T t112;
  real_T t113;
  real_T t114;
  real_T t115;
  real_T t116_tmp;
  real_T b_t116_tmp;
  real_T t116;
  real_T t125_tmp;
  real_T t125;
  real_T t128;
  real_T t138;
  real_T t142;
  real_T t143;
  real_T t144;
  real_T t145;
  real_T t146;
  real_T t147;
  real_T t158;
  real_T t161;
  real_T t168;
  real_T t170;
  real_T t172;
  real_T t175;
  real_T t178;
  real_T t181;
  real_T t185;
  real_T t189;
  real_T t197;
  real_T t201;
  real_T t202;
  real_T t204;
  real_T t207;
  real_T t213;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* SPRDMPF114 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF114(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     09-Jan-2019 03:30:41 */
  t2 = in2[82] * in2[82];
  t3 = in2[83] * in2[83];
  t4 = in2[81] * in2[81];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t6 = t5;
  st.site = &ceb_emlrtRSI;
  b_sqrt(&st, &t6);
  t7 = in2[83] * t6 * 2.0;
  t8 = t3 * 2.0;
  t9 = in2[81] * t6 * 2.0;
  t10 = t4 * 2.0;
  t11 = t2 * 2.0;
  st.site = &deb_emlrtRSI;
  b_sqrt(&st, &t5);
  t12 = 1.0 / t5;
  t176 = in2[79] - in2[85];
  t224 = in2[80] - in2[86];
  t194 = in2[78] - in2[84];
  t17_tmp = in2[81] * t12;
  t17 = (-in2[80] + in2[86]) + t17_tmp * t176;
  t19 = t176 + t17_tmp * t224;
  t20 = t6 * t176;
  t218 = in2[81] * t224;
  t22_tmp = in2[81] * t176;
  t23_tmp = t6 * t224;
  t227 = in2[82] * t194;
  t25 = t6 * t194;
  t166 = in2[83] * t176;
  t167 = in2[82] * t224;
  t219 = t25 + t166;
  t27 = t219 - t167;
  t29_tmp = in2[82] * t12;
  t29 = (-in2[78] + in2[84]) + t29_tmp * t224;
  t31 = t224 + t29_tmp * t194;
  t44_tmp = in2[83] * t194;
  t32_tmp = t20 + t218;
  t32 = t32_tmp - t44_tmp;
  t34 = (-t22_tmp + t23_tmp) + t227;
  t35 = in2[89] * 2.0;
  t36 = in2[81] - in2[87];
  t5 = ((-(in2[87] * in2[87]) - in2[88] * in2[88]) - in2[89] * in2[89]) + 1.0;
  t41 = t5;
  st.site = &heb_emlrtRSI;
  b_sqrt(&st, &t41);
  t42 = in2[82] - in2[88];
  t43 = in2[83] - in2[89];
  t46_tmp = in2[83] * t12;
  t46 = t194 + t46_tmp * t176;
  t48 = (-in2[79] + in2[85]) + t46_tmp * t194;
  t49 = in2[87] * 2.0;
  t50_tmp = in2[82] * t6 * 2.0;
  t193 = in2[81] * in2[82];
  t51_tmp = t193 * 2.0;
  t52_tmp = in2[81] * in2[83];
  t52 = t52_tmp * 2.0;
  t217 = in2[82] * in2[83];
  t53_tmp = t217 * 2.0;
  st.site = &ieb_emlrtRSI;
  b_sqrt(&st, &t5);
  t54 = 1.0 / t5;
  t55 = t6 * 2.0;
  t56 = in2[82] * 2.0;
  t5 = in1[4] / 2.0;
  a = muDoubleScalarCos(t5);
  t5 = muDoubleScalarSin(t5);
  t60_tmp = in2[81] * t194;
  t61_tmp = in2[82] * t176;
  t62_tmp = in2[83] * t224;
  t63_tmp = (t60_tmp + t61_tmp) + t62_tmp;
  t64 = a * a;
  t65 = t5 * t5;
  a_tmp = t64 * 0.044000000000011939 + t65 * 0.044000000000011939;
  t69 = t64 * 0.03599999999999999;
  a = -t69 + t65 * 0.03599999999999999;
  t71 = t6 - t41;
  t217 *= t12;
  t75 = (((((t23_tmp + t227) + t6 * t31) + t29_tmp * t27) + t217 * t176) - in2
         [82] * t29) - t22_tmp * 2.0;
  t79 = (((((-t20 + t44_tmp) + t6 * t48) + in2[83] * t46) + t46_tmp * t27) -
         t218 * 2.0) - t217 * t224;
  t80 = (t8 + t11) - 1.0;
  t81 = t7 + t51_tmp;
  t82 = t50_tmp - t52;
  t83 = in2[83] * t17;
  t84 = t17_tmp * t27;
  t95_tmp = in2[82] * t19;
  t95 = ((t63_tmp - t83) - t84) + t95_tmp;
  t99 = muDoubleScalarPower(muDoubleScalarAbs((((((((t75 * in2[185] + t79 * in2
    [186]) + t80 * in2[181]) + t82 * in2[183]) + t81 * in2[188]) - t80 * in2[187])
    - t81 * in2[182]) - t82 * in2[189]) - t95 * in2[184]), in1[1] - 1.0);
  t104 = t6 * t17;
  t105 = in2[81] * t19;
  t106 = t17_tmp * t32;
  t5 = t52_tmp * t12;
  t110 = ((((t219 + t6 * t46) + t46_tmp * t32) + t5 * t224) - in2[83] * t48) -
    t167 * 2.0;
  t111 = (t8 + t10) - 1.0;
  t112 = t9 + t53_tmp;
  t113 = t7 - t51_tmp;
  t114 = in2[81] * t29;
  t115 = t29_tmp * t32;
  t116_tmp = t227 * 2.0;
  b_t116_tmp = t5 * t194;
  t116 = (((((t22_tmp - t23_tmp) + t104) + t105) + t106) - t116_tmp) -
    b_t116_tmp;
  t125_tmp = in2[83] * t31;
  t125 = ((t63_tmp - t114) - t115) + t125_tmp;
  t128 = muDoubleScalarPower(muDoubleScalarAbs((((((((t116 * in2[184] + t110 *
    in2[186]) + t111 * in2[182]) + t113 * in2[181]) + t112 * in2[189]) - t111 *
    in2[188]) - t112 * in2[183]) - t113 * in2[187]) - t125 * in2[185]), in1[1] -
    1.0);
  t218 = t193 * t12;
  t138 = ((((t32_tmp + t6 * t19) + t17_tmp * t34) + t218 * t194) - in2[81] * t17)
    - t44_tmp * 2.0;
  t142 = (((((-t25 + t167) + t6 * t29) + in2[82] * t31) + t29_tmp * t34) - t166 *
          2.0) - t218 * t176;
  t143 = (t10 + t11) - 1.0;
  t144 = t50_tmp + t52;
  t145 = t9 - t53_tmp;
  t146 = in2[82] * t48;
  t147 = t46_tmp * t34;
  t25 = in2[81] * t46;
  t158 = ((t63_tmp - t146) - t147) + t25;
  t161 = muDoubleScalarPower(muDoubleScalarAbs((((((((t138 * in2[184] + t142 *
    in2[185]) + t143 * in2[183]) + t145 * in2[182]) + t144 * in2[187]) - t143 *
    in2[189]) - t144 * in2[181]) - t145 * in2[188]) - t158 * in2[186]), in1[1] -
    1.0);
  t166 = t17_tmp * t36 * 2.0;
  t167 = t29_tmp * t36 * 2.0;
  t168 = in2[88] * 2.0;
  t29 = t5 * 2.0;
  t170 = (t168 + t46_tmp * t36 * 2.0) - t29;
  t172 = t55 + in2[81] * in2[87] * t54 * 2.0;
  t5 = in2[83] * 2.0;
  t175 = t5 + in2[81] * in2[88] * t54 * 2.0;
  t176 = in2[81] * in2[89] * t54 * 2.0;
  t44_tmp = t218 * 2.0;
  t178 = (t35 - t167) + t44_tmp;
  t31 = t41 * 2.0;
  t20 = t4 * t12 * 2.0;
  t181 = (-t166 + t31) + t20;
  t185 = t56 - t176;
  t189 = muDoubleScalarPower(muDoubleScalarAbs(((((t181 * in2[184] + t178 * in2
    [185]) + t185 * in2[192]) - t170 * in2[186]) - t172 * in2[190]) - t175 *
    in2[191]), in1[1] - 1.0);
  t193 = t29_tmp * t42 * 2.0;
  t194 = t17_tmp * t42 * 2.0;
  t17 = t46_tmp * t42 * 2.0;
  t197 = t55 + in2[82] * in2[88] * t54 * 2.0;
  t19 = in2[82] * in2[87] * t54 * 2.0;
  t4 = in2[81] * 2.0;
  t201 = t4 + in2[82] * in2[89] * t54 * 2.0;
  t202 = (t35 - t44_tmp) + t194;
  t227 = t2 * t12 * 2.0;
  t204 = (t31 - t193) + t227;
  t32_tmp = t217 * 2.0;
  t207 = (t49 - t17) + t32_tmp;
  t2 = t5 - t19;
  t213 = muDoubleScalarPower(muDoubleScalarAbs(((((t204 * in2[185] + t207 * in2
    [186]) + t2 * in2[190]) - t202 * in2[184]) - t197 * in2[191]) - t201 * in2
    [192]), in1[1] - 1.0);
  t217 = t46_tmp * t43 * 2.0;
  t218 = t17_tmp * t43 * 2.0;
  t219 = t29_tmp * t43 * 2.0;
  t48 = t55 + in2[83] * in2[89] * t54 * 2.0;
  t46 = t56 + in2[83] * in2[87] * t54 * 2.0;
  t224 = in2[83] * in2[88] * t54 * 2.0;
  memset(&out1[0], 0, 78U * sizeof(real_T));
  out1[78] = t80;
  out1[79] = -t7 - t51_tmp;
  out1[80] = t50_tmp - in2[81] * in2[83] * 2.0;
  out1[81] = ((((t83 + t84) - t61_tmp) - t60_tmp) - t62_tmp) - t95_tmp;
  out1[82] = t75;
  out1[83] = t79;
  out1[84] = (-t8 - t11) + 1.0;
  out1[85] = t81;
  out1[86] = -t50_tmp + t52;
  memset(&out1[87], 0, 82U * sizeof(real_T));
  out1[169] = t7 - in2[81] * in2[82] * 2.0;
  out1[170] = t111;
  out1[171] = -t9 - t53_tmp;
  out1[172] = (((((t22_tmp + t104) + t105) + t106) - t116_tmp) - t23_tmp) -
    b_t116_tmp;
  out1[173] = ((((t114 + t115) - t61_tmp) - t60_tmp) - t62_tmp) - t125_tmp;
  out1[174] = t110;
  out1[175] = -t7 + t51_tmp;
  out1[176] = (-t8 - t10) + 1.0;
  out1[177] = t112;
  memset(&out1[178], 0, 82U * sizeof(real_T));
  out1[260] = t52_tmp * -2.0 - t50_tmp;
  out1[261] = t9 - in2[82] * in2[83] * 2.0;
  out1[262] = t143;
  out1[263] = t138;
  out1[264] = t142;
  out1[265] = ((((t146 + t147) - t61_tmp) - t60_tmp) - t62_tmp) - t25;
  out1[266] = t144;
  out1[267] = -t9 + t53_tmp;
  out1[268] = (-t10 - t11) + 1.0;
  memset(&out1[269], 0, 85U * sizeof(real_T));
  out1[354] = (t41 * -2.0 + t166) - t20;
  out1[355] = (-t35 + t167) - t44_tmp;
  out1[356] = t170;
  out1[357] = 0.0;
  out1[358] = 0.0;
  out1[359] = 0.0;
  out1[360] = t172;
  out1[361] = t175;
  out1[362] = -t56 + t176;
  memset(&out1[363], 0, 82U * sizeof(real_T));
  out1[445] = (t35 + t194) - t44_tmp;
  out1[446] = (t41 * -2.0 + t193) - t227;
  out1[447] = (-t49 + t17) - t32_tmp;
  out1[448] = 0.0;
  out1[449] = 0.0;
  out1[450] = 0.0;
  out1[451] = in2[83] * -2.0 + t19;
  out1[452] = t197;
  out1[453] = t201;
  memset(&out1[454], 0, 82U * sizeof(real_T));
  out1[536] = (in2[88] * -2.0 + t218) - t29;
  out1[537] = (t49 + t219) - t32_tmp;
  t5 = t3 * t12 * 2.0;
  out1[538] = (t41 * -2.0 + t217) - t5;
  out1[539] = 0.0;
  out1[540] = 0.0;
  out1[541] = 0.0;
  out1[542] = t46;
  out1[543] = in2[81] * -2.0 + t224;
  out1[544] = t48;
  out1[545] = 0.0;
  t193 = (t168 + t29) - t218;
  t227 = (t31 - t217) + t5;
  t219 += t49 - t32_tmp;
  t218 = t4 - t224;
  t224 = muDoubleScalarPower(muDoubleScalarAbs(((((t227 * in2[186] + t193 * in2
    [184]) + t218 * in2[191]) - t219 * in2[185]) - t48 * in2[192]) - t46 * in2
    [190]), in1[1] - 1.0);
  t5 = (t64 * t65 * 0.0051839999999999976 + a_tmp * a_tmp) + a * a;
  st.site = &seb_emlrtRSI;
  b_sqrt(&st, &t5);
  out2[0] = in1[0] * (((((t65 * -0.03599999999999999 + t69) + in2[83] * t32) -
                        in2[82] * t34) + in2[81] * t63_tmp) + t6 * t27) *
    0.00026666666666666668;
  out2[1] = in1[0] * ((((a_tmp + in2[83] * t27) - in2[81] * t34) - in2[82] *
                       t63_tmp) - t6 * t32) * -0.00026666666666666668;
  out2[2] = in1[0] * ((((in2[82] * t27 - in2[81] * t32) + in2[83] * t63_tmp) +
                       t6 * t34) + t5) * 0.0008;
  out2[3] = in1[0] * (((in2[82] * t43 * 2.0 - in2[83] * t42 * 2.0) + in2[81] *
                       t71 * 2.0) - t6 * t36 * 2.0) * -4.2666666666666668E-11;
  out2[4] = in1[0] * (((in2[83] * t36 * 2.0 - in2[81] * t43 * 2.0) + in2[82] *
                       t71 * 2.0) - t6 * t42 * 2.0) * -1.421066666666666E-8;
  out2[5] = in1[0] * (((in2[82] * t36 * 2.0 - in2[81] * t42 * 2.0) - in2[83] *
                       t71 * 2.0) + t6 * t43 * 2.0) * 4.75111111111111E-9;
  t20 = in1[2] * t80 * t99;
  t217 = in1[2] * t81 * t99;
  t5 = in1[2] * t82 * t99;
  out3[0] = (((((((-in1[2] * t75 * t99 * in2[185] - t20 * in2[181]) + t217 *
                  in2[182]) - in1[2] * t79 * t99 * in2[186]) - t5 * in2[183]) +
               t20 * in2[187]) - t217 * in2[188]) + t5 * in2[189]) + in1[2] *
    t95 * t99 * in2[184];
  t20 = in1[2] * t113 * t128;
  t217 = in1[2] * t112 * t128;
  out3[1] = (((((((-in1[2] * t111 * t128 * in2[182] - t20 * in2[181]) + t217 *
                  in2[183]) - in1[2] * t110 * t128 * in2[186]) + in1[2] * t111 *
                t128 * in2[188]) + t20 * in2[187]) - in1[2] * t116 * t128 * in2
              [184]) - t217 * in2[189]) + in1[2] * t125 * t128 * in2[185];
  t20 = in1[2] * t144 * t161;
  t217 = in1[2] * t143 * t161;
  t5 = in1[2] * t145 * t161;
  out3[2] = (((((((-in1[2] * t138 * t161 * in2[184] + t20 * in2[181]) - t217 *
                  in2[183]) - in1[2] * t142 * t161 * in2[185]) - t5 * in2[182])
               - t20 * in2[187]) + t217 * in2[189]) + t5 * in2[188]) + in1[2] *
    t158 * t161 * in2[186];
  out3[3] = ((((-in1[3] * t170 * t189 * in2[186] - in1[3] * t172 * t189 * in2
                [190]) + in1[3] * t178 * t189 * in2[185]) + in1[3] * t181 * t189
              * in2[184]) - in1[3] * t175 * t189 * in2[191]) + in1[3] * t185 *
    t189 * in2[192];
  out3[4] = ((((-in1[3] * t202 * t213 * in2[184] - in1[3] * t197 * t213 * in2
                [191]) + in1[3] * t204 * t213 * in2[185]) - in1[3] * t201 * t213
              * in2[192]) + in1[3] * t207 * t213 * in2[186]) + in1[3] * t2 *
    t213 * in2[190];
  out3[5] = ((((in1[3] * t193 * t224 * in2[184] - in1[3] * t48 * t224 * in2[192])
               - in1[3] * t46 * t224 * in2[190]) + in1[3] * t227 * t224 * in2
              [186]) - in1[3] * t219 * t224 * in2[185]) + in1[3] * t218 * t224 *
    in2[191];
  for (i = 0; i < 6; i++) {
    out4[i] = 0.0;
  }
}

/* End of code generation (sprdmpF114.c) */
