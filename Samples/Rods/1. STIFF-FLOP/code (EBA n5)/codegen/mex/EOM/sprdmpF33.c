/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF33.c
 *
 * Code generation for function 'sprdmpF33'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "sprdmpF33.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo gg_emlrtRSI = { 57, /* lineNo */
  "sprdmpF33",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF33.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 63, /* lineNo */
  "sprdmpF33",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF33.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 93, /* lineNo */
  "sprdmpF33",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF33.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 105,/* lineNo */
  "sprdmpF33",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF33.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 310,/* lineNo */
  "sprdmpF33",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF33.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 311,/* lineNo */
  "sprdmpF33",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF33.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 314,/* lineNo */
  "sprdmpF33",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF33.m"/* pathName */
};

/* Function Definitions */
void sprdmpF33(const emlrtStack *sp, const real_T in1[34], const real_T in2[60],
               real_T out1[180], real_T out2[6], real_T out3[6], real_T out4[6])
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
  real_T t184;
  real_T t237;
  real_T t216;
  real_T t17_tmp;
  real_T t17;
  real_T t19;
  real_T t20;
  real_T t211;
  real_T t22_tmp;
  real_T t23_tmp;
  real_T t212;
  real_T t25;
  real_T t26_tmp;
  real_T t197;
  real_T t248;
  real_T t27;
  real_T t29_tmp;
  real_T t29;
  real_T t31;
  real_T t194;
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
  real_T t213;
  real_T t51_tmp;
  real_T t52_tmp;
  real_T t52;
  real_T t235;
  real_T t53_tmp;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T t57;
  real_T t60;
  real_T t61;
  real_T t64;
  real_T t65;
  real_T t66;
  real_T t242;
  real_T t69_tmp;
  real_T t72_tmp;
  real_T t73_tmp;
  real_T t74_tmp;
  real_T t75_tmp;
  real_T t86;
  real_T t89;
  real_T t93;
  real_T t97;
  real_T t98;
  real_T t99;
  real_T t100;
  real_T t101;
  real_T t102;
  real_T t113_tmp;
  real_T t113;
  real_T t117;
  real_T t122;
  real_T t123;
  real_T t124;
  real_T t128;
  real_T t129;
  real_T t130;
  real_T t131;
  real_T t132;
  real_T t133;
  real_T t134_tmp;
  real_T b_t134_tmp;
  real_T t134;
  real_T t143_tmp;
  real_T t143;
  real_T t146;
  real_T t156;
  real_T t160;
  real_T t161;
  real_T t162;
  real_T t163;
  real_T t176;
  real_T t179;
  real_T t188;
  real_T t190;
  real_T t193;
  real_T t196;
  real_T t199;
  real_T t203;
  real_T t207;
  real_T t215;
  real_T t219;
  real_T t220;
  real_T t222;
  real_T t225;
  real_T t227;
  real_T t231;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* SPRDMPF33 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF33(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jan-2019 19:52:57 */
  t2 = in2[10] * in2[10];
  t3 = in2[11] * in2[11];
  t4 = in2[9] * in2[9];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t6 = t5;
  st.site = &gg_emlrtRSI;
  b_sqrt(&st, &t6);
  t7 = in2[11] * t6 * 2.0;
  t8 = t3 * 2.0;
  t9 = in2[9] * t6 * 2.0;
  t10 = t4 * 2.0;
  t11 = t2 * 2.0;
  st.site = &hg_emlrtRSI;
  b_sqrt(&st, &t5);
  t12 = 1.0 / t5;
  t184 = in2[7] - in2[13];
  t237 = in2[8] - in2[14];
  t216 = in2[6] - in2[12];
  t17_tmp = in2[9] * t12;
  t17 = (-in2[8] + in2[14]) + t17_tmp * t184;
  t19 = t184 + t17_tmp * t237;
  t20 = t6 * t184;
  t211 = in2[9] * t237;
  t22_tmp = in2[9] * t184;
  t23_tmp = t6 * t237;
  t212 = in2[10] * t216;
  t25 = t6 * t216;
  t26_tmp = in2[11] * t184;
  t197 = in2[10] * t237;
  t248 = t25 + t26_tmp;
  t27 = t248 - t197;
  t29_tmp = in2[10] * t12;
  t29 = (-in2[6] + in2[12]) + t29_tmp * t237;
  t31 = t237 + t29_tmp * t216;
  t194 = in2[11] * t216;
  t32_tmp = t20 + t211;
  t32 = t32_tmp - t194;
  t34 = (-t22_tmp + t23_tmp) + t212;
  t35 = in2[17] * 2.0;
  t36 = in2[9] - in2[15];
  t5 = ((-(in2[15] * in2[15]) - in2[16] * in2[16]) - in2[17] * in2[17]) + 1.0;
  t41 = t5;
  st.site = &lg_emlrtRSI;
  b_sqrt(&st, &t41);
  t42 = in2[10] - in2[16];
  t43 = in2[11] - in2[17];
  t46_tmp = in2[11] * t12;
  t46 = t216 + t46_tmp * t184;
  t48 = (-in2[7] + in2[13]) + t46_tmp * t216;
  t49 = in2[15] * 2.0;
  t50_tmp = in2[10] * t6 * 2.0;
  t213 = in2[9] * in2[10];
  t51_tmp = t213 * 2.0;
  t52_tmp = in2[9] * in2[11];
  t52 = t52_tmp * 2.0;
  t235 = in2[10] * in2[11];
  t53_tmp = t235 * 2.0;
  st.site = &mg_emlrtRSI;
  b_sqrt(&st, &t5);
  t54 = 1.0 / t5;
  t55 = t6 * 2.0;
  t56 = in2[10] * 2.0;
  t57 = 1.0 / in1[33];
  t5 = muDoubleScalarCos(in1[20]);
  t60 = in1[2] * in1[2];
  t61 = in1[3] * in1[3];
  t64 = in1[18] * in1[18];
  t65 = muDoubleScalarSin(in1[20]);
  t66 = 1.0 / (t65 * t65);
  t242 = in1[33] * in1[33];
  t69_tmp = t242 * (t5 * t5);
  t72_tmp = in2[9] * t216;
  t73_tmp = in2[10] * t184;
  t74_tmp = in2[11] * t237;
  t75_tmp = (t72_tmp + t73_tmp) + t74_tmp;
  t86 = 1.0 / t242 * (t60 * t60 - t61 * t61) + t64 * t64 * (1.0 /
    muDoubleScalarPower(t65, 4.0)) * ((t69_tmp - 1.0) * (t69_tmp - 1.0)) * 6.0;
  t89 = t6 - t41;
  t242 = t235 * t12;
  t93 = (((((t23_tmp + t212) + t6 * t31) + t29_tmp * t27) + t242 * t184) - in2
         [10] * t29) - t22_tmp * 2.0;
  t97 = (((((-t20 + t194) + t6 * t48) + in2[11] * t46) + t46_tmp * t27) - t211 *
         2.0) - t242 * t237;
  t98 = (t8 + t11) - 1.0;
  t99 = t7 + t51_tmp;
  t100 = t50_tmp - t52;
  t101 = in2[11] * t17;
  t102 = t17_tmp * t27;
  t113_tmp = in2[10] * t19;
  t113 = ((t75_tmp - t101) - t102) + t113_tmp;
  t117 = muDoubleScalarPower(muDoubleScalarAbs((((((((t93 * in2[40] + t97 * in2
    [41]) + t98 * in2[36]) + t100 * in2[38]) + t99 * in2[43]) - t98 * in2[42]) -
    t99 * in2[37]) - t100 * in2[44]) - t113 * in2[39]), in1[11] - 1.0);
  t122 = t6 * t17;
  t123 = in2[9] * t19;
  t124 = t17_tmp * t32;
  t5 = t52_tmp * t12;
  t128 = ((((t248 + t6 * t46) + t46_tmp * t32) + t5 * t237) - in2[11] * t48) -
    t197 * 2.0;
  t129 = (t8 + t10) - 1.0;
  t130 = t9 + t53_tmp;
  t131 = t7 - t51_tmp;
  t132 = in2[9] * t29;
  t133 = t29_tmp * t32;
  t134_tmp = t212 * 2.0;
  b_t134_tmp = t5 * t216;
  t134 = (((((t22_tmp - t23_tmp) + t122) + t123) + t124) - t134_tmp) -
    b_t134_tmp;
  t143_tmp = in2[11] * t31;
  t143 = ((t75_tmp - t132) - t133) + t143_tmp;
  t146 = muDoubleScalarPower(muDoubleScalarAbs((((((((t134 * in2[39] + t128 *
    in2[41]) + t129 * in2[37]) + t131 * in2[36]) + t130 * in2[44]) - t129 * in2
    [43]) - t130 * in2[38]) - t131 * in2[42]) - t143 * in2[40]), in1[11] - 1.0);
  t65 = t213 * t12;
  t156 = ((((t32_tmp + t6 * t19) + t17_tmp * t34) + t65 * t216) - in2[9] * t17)
    - t194 * 2.0;
  t160 = (((((-t25 + t197) + t6 * t29) + in2[10] * t31) + t29_tmp * t34) -
          t26_tmp * 2.0) - t65 * t184;
  t161 = (t10 + t11) - 1.0;
  t162 = t50_tmp + t52;
  t163 = t9 - t53_tmp;
  t29 = in2[10] * t48;
  t31 = t46_tmp * t34;
  t32_tmp = in2[9] * t46;
  t176 = ((t75_tmp - t29) - t31) + t32_tmp;
  t179 = muDoubleScalarPower(muDoubleScalarAbs((((((((t156 * in2[39] + t160 *
    in2[40]) + t161 * in2[38]) + t163 * in2[37]) + t162 * in2[42]) - t161 * in2
    [44]) - t162 * in2[36]) - t163 * in2[43]) - t176 * in2[41]), in1[11] - 1.0);
  t184 = t17_tmp * t36 * 2.0;
  t25 = t29_tmp * t36 * 2.0;
  t48 = in2[16] * 2.0;
  t26_tmp = t5 * 2.0;
  t188 = (t48 + t46_tmp * t36 * 2.0) - t26_tmp;
  t190 = t55 + in2[9] * in2[15] * t54 * 2.0;
  t5 = in2[11] * 2.0;
  t193 = t5 + in2[9] * in2[16] * t54 * 2.0;
  t194 = in2[9] * in2[17] * t54 * 2.0;
  t17 = t65 * 2.0;
  t196 = (t35 - t25) + t17;
  t197 = t41 * 2.0;
  t20 = t4 * t12 * 2.0;
  t199 = (-t184 + t197) + t20;
  t203 = t56 - t194;
  t207 = muDoubleScalarPower(muDoubleScalarAbs(((((t199 * in2[39] + t196 * in2
    [40]) + t203 * in2[47]) - t188 * in2[41]) - t190 * in2[45]) - t193 * in2[46]),
    in1[11] - 1.0);
  t211 = t29_tmp * t42 * 2.0;
  t212 = t17_tmp * t42 * 2.0;
  t213 = t46_tmp * t42 * 2.0;
  t215 = t55 + in2[10] * in2[16] * t54 * 2.0;
  t216 = in2[10] * in2[15] * t54 * 2.0;
  t46 = in2[9] * 2.0;
  t219 = t46 + in2[10] * in2[17] * t54 * 2.0;
  t220 = (t35 - t17) + t212;
  t248 = t2 * t12 * 2.0;
  t222 = (t197 - t211) + t248;
  t19 = t242 * 2.0;
  t225 = (t49 - t213) + t19;
  t227 = t5 - t216;
  t231 = muDoubleScalarPower(muDoubleScalarAbs(((((t222 * in2[40] + t225 * in2
    [41]) + t227 * in2[45]) - t220 * in2[39]) - t215 * in2[46]) - t219 * in2[47]),
    in1[11] - 1.0);
  t235 = t46_tmp * t43 * 2.0;
  t65 = t17_tmp * t43 * 2.0;
  t237 = t29_tmp * t43 * 2.0;
  t4 = t55 + in2[11] * in2[17] * t54 * 2.0;
  t2 = t56 + in2[11] * in2[15] * t54 * 2.0;
  t242 = in2[11] * in2[16] * t54 * 2.0;
  out1[0] = 0.0;
  out1[1] = 0.0;
  out1[2] = 0.0;
  out1[3] = 0.0;
  out1[4] = 0.0;
  out1[5] = 0.0;
  out1[6] = t98;
  out1[7] = -t7 - t51_tmp;
  out1[8] = t50_tmp - in2[9] * in2[11] * 2.0;
  out1[9] = ((((t101 + t102) - t73_tmp) - t72_tmp) - t74_tmp) - t113_tmp;
  out1[10] = t93;
  out1[11] = t97;
  out1[12] = (-t8 - t11) + 1.0;
  out1[13] = t99;
  out1[14] = -t50_tmp + t52;
  memset(&out1[15], 0, 21U * sizeof(real_T));
  out1[36] = t7 - in2[9] * in2[10] * 2.0;
  out1[37] = t129;
  out1[38] = -t9 - t53_tmp;
  out1[39] = (((((t22_tmp + t122) + t123) + t124) - t134_tmp) - t23_tmp) -
    b_t134_tmp;
  out1[40] = ((((t132 + t133) - t73_tmp) - t72_tmp) - t74_tmp) - t143_tmp;
  out1[41] = t128;
  out1[42] = -t7 + t51_tmp;
  out1[43] = (-t8 - t10) + 1.0;
  out1[44] = t130;
  memset(&out1[45], 0, 21U * sizeof(real_T));
  out1[66] = t52_tmp * -2.0 - t50_tmp;
  out1[67] = t9 - in2[10] * in2[11] * 2.0;
  out1[68] = t161;
  out1[69] = t156;
  out1[70] = t160;
  out1[71] = ((((t29 + t31) - t73_tmp) - t72_tmp) - t74_tmp) - t32_tmp;
  out1[72] = t162;
  out1[73] = -t9 + t53_tmp;
  out1[74] = (-t10 - t11) + 1.0;
  memset(&out1[75], 0, 24U * sizeof(real_T));
  out1[99] = (t41 * -2.0 + t184) - t20;
  out1[100] = (-t35 + t25) - t17;
  out1[101] = t188;
  out1[102] = 0.0;
  out1[103] = 0.0;
  out1[104] = 0.0;
  out1[105] = t190;
  out1[106] = t193;
  out1[107] = -t56 + t194;
  memset(&out1[108], 0, 21U * sizeof(real_T));
  out1[129] = (t35 + t212) - t17;
  out1[130] = (t41 * -2.0 + t211) - t248;
  out1[131] = (-t49 + t213) - t19;
  out1[132] = 0.0;
  out1[133] = 0.0;
  out1[134] = 0.0;
  out1[135] = in2[11] * -2.0 + t216;
  out1[136] = t215;
  out1[137] = t219;
  memset(&out1[138], 0, 21U * sizeof(real_T));
  out1[159] = (in2[16] * -2.0 + t65) - t26_tmp;
  out1[160] = (t49 + t237) - t19;
  t5 = t3 * t12 * 2.0;
  out1[161] = (t41 * -2.0 + t235) - t5;
  out1[162] = 0.0;
  out1[163] = 0.0;
  out1[164] = 0.0;
  out1[165] = t2;
  out1[166] = in2[9] * -2.0 + t242;
  out1[167] = t4;
  memset(&out1[168], 0, 12U * sizeof(real_T));
  t216 = (t48 + t26_tmp) - t65;
  t212 = (t197 - t235) + t5;
  t248 = (t49 - t19) + t237;
  t65 = t46 - t242;
  t237 = muDoubleScalarPower(muDoubleScalarAbs(((((t212 * in2[41] + t216 * in2
    [39]) + t65 * in2[46]) - t248 * in2[40]) - t4 * in2[47]) - t2 * in2[45]),
    in1[11] - 1.0);
  t5 = in1[33];
  st.site = &hh_emlrtRSI;
  b_sqrt(&st, &t5);
  t213 = 1.0 / t5;
  t5 = 70.0;
  st.site = &ih_emlrtRSI;
  b_sqrt(&st, &t5);
  t20 = in1[4] * in1[4] / 25.0;
  st.site = &kh_emlrtRSI;
  b_sqrt(&st, &t20);
  t211 = in1[1] * t57 * (1.0 / in1[4]);
  t5 = t211 * (t57 * (t60 - t61) - t64 * t66 * (t69_tmp - 1.0) * 6.0) *
    3.1415926535897931;
  out2[0] = t5 * (((in2[11] * t32 - in2[10] * t34) + in2[9] * t75_tmp) + t6 *
                  t27) * -1.6666666666666667;
  out2[1] = t5 * (((-in2[11] * t27 + in2[9] * t34) + in2[10] * t75_tmp) + t6 *
                  t32) * -1.6666666666666667;
  out2[2] = t5 * ((((t20 + in2[10] * t27) - in2[9] * t32) + in2[11] * t75_tmp) +
                  t6 * t34) * -5.0;
  t5 = t211 * (t86 * 3.1415926535897931 / 4.0 - t57 * t64 * t66 * (t69_tmp - 1.0)
               * (in1[19] * in1[19]) * 3.1415926535897931 * 3.0);
  out2[3] = t5 * (((in2[10] * t43 * 2.0 - in2[11] * t42 * 2.0) + in2[9] * t89 *
                   2.0) - t6 * t36 * 2.0) * 5.0;
  out2[4] = t5 * (((in2[11] * t36 * 2.0 - in2[9] * t43 * 2.0) + in2[10] * t89 *
                   2.0) - t6 * t42 * 2.0) * 5.0;
  out2[5] = t211 * t86 * 3.1415926535897931 * (((in2[10] * t36 * 2.0 - in2[9] *
    t42 * 2.0) - in2[11] * t89 * 2.0) + t6 * t43 * 2.0) * -0.83333333333333337;
  t235 = in1[5] * t98 * t117;
  t242 = in1[5] * t99 * t117;
  t5 = in1[5] * t100 * t117;
  out3[0] = (((((((-in1[5] * t93 * t117 * in2[40] - t235 * in2[36]) + t242 *
                  in2[37]) - in1[5] * t97 * t117 * in2[41]) - t5 * in2[38]) +
               t235 * in2[42]) - t242 * in2[43]) + t5 * in2[44]) + in1[5] * t113
    * t117 * in2[39];
  t235 = in1[6] * t131 * t146;
  t242 = in1[6] * t130 * t146;
  out3[1] = (((((((-in1[6] * t129 * t146 * in2[37] - t235 * in2[36]) + t242 *
                  in2[38]) - in1[6] * t128 * t146 * in2[41]) + in1[6] * t129 *
                t146 * in2[43]) + t235 * in2[42]) - in1[6] * t134 * t146 * in2
              [39]) - t242 * in2[44]) + in1[6] * t143 * t146 * in2[40];
  t235 = in1[7] * t162 * t179;
  t242 = in1[7] * t161 * t179;
  t5 = in1[7] * t163 * t179;
  out3[2] = (((((((-in1[7] * t156 * t179 * in2[39] + t235 * in2[36]) - t242 *
                  in2[38]) - in1[7] * t160 * t179 * in2[40]) - t5 * in2[37]) -
               t235 * in2[42]) + t242 * in2[44]) + t5 * in2[43]) + in1[7] * t176
    * t179 * in2[41];
  out3[3] = ((((-in1[8] * t188 * t207 * in2[41] - in1[8] * t190 * t207 * in2[45])
               + in1[8] * t196 * t207 * in2[40]) + in1[8] * t199 * t207 * in2[39])
             - in1[8] * t193 * t207 * in2[46]) + in1[8] * t203 * t207 * in2[47];
  out3[4] = ((((-in1[9] * t220 * t231 * in2[39] - in1[9] * t215 * t231 * in2[46])
               + in1[9] * t222 * t231 * in2[40]) - in1[9] * t219 * t231 * in2[47])
             + in1[9] * t225 * t231 * in2[41]) + in1[9] * t227 * t231 * in2[45];
  out3[5] = ((((in1[10] * t216 * t237 * in2[39] - in1[10] * t4 * t237 * in2[47])
               - in1[10] * t2 * t237 * in2[45]) + in1[10] * t212 * t237 * in2[41])
             - in1[10] * t248 * t237 * in2[40]) + in1[10] * t65 * t237 * in2[46];
  out4[0] = 0.0;
  out4[1] = 0.0;
  out4[2] = -t64 * t66 * (t69_tmp - 1.0) * 3.1415926535897931 * (((((in1[21] +
    in1[22]) + in1[23]) + in1[24]) + in1[25]) + in1[26]);
  t242 = in1[23] * in1[19] * t64 * t66 * (t69_tmp - 1.0) * t213 *
    3.1415926535897931;
  t235 = in1[24] * in1[19] * t64 * t66 * (t69_tmp - 1.0) * t213 *
    3.1415926535897931;
  t20 = in1[25] * in1[19] * t64 * t66 * (t69_tmp - 1.0) * t213 *
    3.1415926535897931;
  t211 = in1[26] * in1[19] * t64 * t66 * (t69_tmp - 1.0) * t213 *
    3.1415926535897931;
  t65 = in1[21] * in1[19] * t64 * t66 * (t69_tmp - 1.0) * t213;
  t5 = in1[22] * in1[19] * t64 * t66 * (t69_tmp - 1.0) * t213;
  out4[3] = ((((t65 * 3.1415926535897931 * -0.93771626297577859 - t5 *
                3.1415926535897931 * 0.93771626297577859) + t242 *
               0.167999098695029) + t235 * 0.76971716428074954) + t20 *
             0.76971716428074932) + t211 * 0.16799909869502891;
  out4[4] = ((((t242 * 0.9857871488499218 + t235 * 0.63838506170774523) - t20 *
               0.63838506170774545) - t211 * 0.9857871488499218) - t65 *
             8.3666002653407556 * 3.1415926535897931 * 0.041522491349480967) +
    t5 * 8.3666002653407556 * 3.1415926535897931 * 0.041522491349480967;
  out4[5] = 0.0;
}

/* End of code generation (sprdmpF33.c) */
