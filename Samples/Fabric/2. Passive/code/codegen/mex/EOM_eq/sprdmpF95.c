/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF95.c
 *
 * Code generation for function 'sprdmpF95'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM_eq.h"
#include "sprdmpF95.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo am_emlrtRSI = { 40, /* lineNo */
  "sprdmpF95",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF95.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 46, /* lineNo */
  "sprdmpF95",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF95.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 76, /* lineNo */
  "sprdmpF95",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF95.m"/* pathName */
};

static emlrtRSInfo gm_emlrtRSI = { 88, /* lineNo */
  "sprdmpF95",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF95.m"/* pathName */
};

/* Function Definitions */
void sprdmpF95(const emlrtStack *sp, const real_T in1[6], const real_T in2[198],
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
  real_T t166;
  real_T t214;
  real_T t184;
  real_T t17_tmp;
  real_T t17;
  real_T t19;
  real_T t20;
  real_T t208;
  real_T t22_tmp;
  real_T t23_tmp;
  real_T t217;
  real_T t25;
  real_T t213;
  real_T t33_tmp;
  real_T t209;
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
  real_T t183;
  real_T t51_tmp;
  real_T t52_tmp;
  real_T t52;
  real_T t207;
  real_T t53_tmp;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T t57_tmp;
  real_T t58_tmp;
  real_T t59_tmp;
  real_T t60_tmp;
  real_T t61;
  real_T t65;
  real_T t69;
  real_T t70;
  real_T t71;
  real_T t72;
  real_T t73;
  real_T t74;
  real_T t85_tmp;
  real_T t85;
  real_T t89;
  real_T t94;
  real_T t95;
  real_T t96;
  real_T t100;
  real_T t101;
  real_T t102;
  real_T t103;
  real_T t104;
  real_T t105;
  real_T t106_tmp;
  real_T b_t106_tmp;
  real_T t106;
  real_T t115_tmp;
  real_T t115;
  real_T t118;
  real_T t128;
  real_T t132;
  real_T t133;
  real_T t134;
  real_T t135;
  real_T t136;
  real_T t137;
  real_T t148;
  real_T t151;
  real_T t158;
  real_T t160;
  real_T t162;
  real_T t165;
  real_T t168;
  real_T t171;
  real_T t175;
  real_T t179;
  real_T t187;
  real_T t191;
  real_T t192;
  real_T t194;
  real_T t197;
  real_T t203;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* SPRDMPF95 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF95(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     08-Jan-2019 02:36:03 */
  t2 = in2[4] * in2[4];
  t3 = in2[5] * in2[5];
  t4 = in2[3] * in2[3];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t6 = t5;
  st.site = &am_emlrtRSI;
  b_sqrt(&st, &t6);
  t7 = in2[5] * t6 * 2.0;
  t8 = t3 * 2.0;
  t9 = in2[3] * t6 * 2.0;
  t10 = t4 * 2.0;
  t11 = t2 * 2.0;
  st.site = &bm_emlrtRSI;
  b_sqrt(&st, &t5);
  t12 = 1.0 / t5;
  t166 = in2[1] - in2[7];
  t214 = in2[2] - in2[8];
  t184 = in2[0] - in2[6];
  t17_tmp = in2[3] * t12;
  t17 = (-in2[2] + in2[8]) + t17_tmp * t166;
  t19 = t166 + t17_tmp * t214;
  t20 = t6 * t166;
  t208 = in2[3] * t214;
  t22_tmp = in2[3] * t166;
  t23_tmp = t6 * t214;
  t217 = in2[4] * t184;
  t25 = t6 * t184;
  t213 = in2[5] * t166;
  t33_tmp = in2[4] * t214;
  t209 = t25 + t213;
  t27 = t209 - t33_tmp;
  t29_tmp = in2[4] * t12;
  t29 = (-in2[0] + in2[6]) + t29_tmp * t214;
  t31 = t214 + t29_tmp * t184;
  t44_tmp = in2[5] * t184;
  t32_tmp = t20 + t208;
  t32 = t32_tmp - t44_tmp;
  t34 = (-t22_tmp + t23_tmp) + t217;
  t35 = in2[11] * 2.0;
  t36 = in2[3] - in2[9];
  t5 = ((-(in2[9] * in2[9]) - in2[10] * in2[10]) - in2[11] * in2[11]) + 1.0;
  t41 = t5;
  st.site = &fm_emlrtRSI;
  b_sqrt(&st, &t41);
  t42 = in2[4] - in2[10];
  t43 = in2[5] - in2[11];
  t46_tmp = in2[5] * t12;
  t46 = t184 + t46_tmp * t166;
  t48 = (-in2[1] + in2[7]) + t46_tmp * t184;
  t49 = in2[9] * 2.0;
  t50_tmp = in2[4] * t6 * 2.0;
  t183 = in2[3] * in2[4];
  t51_tmp = t183 * 2.0;
  t52_tmp = in2[3] * in2[5];
  t52 = t52_tmp * 2.0;
  t207 = in2[4] * in2[5];
  t53_tmp = t207 * 2.0;
  st.site = &gm_emlrtRSI;
  b_sqrt(&st, &t5);
  t54 = 1.0 / t5;
  t55 = t6 * 2.0;
  t56 = in2[4] * 2.0;
  t57_tmp = in2[3] * t184;
  t58_tmp = in2[4] * t166;
  t59_tmp = in2[5] * t214;
  t60_tmp = (t57_tmp + t58_tmp) + t59_tmp;
  t61 = t6 - t41;
  t207 *= t12;
  t65 = (((((t23_tmp + t217) + t6 * t31) + t29_tmp * t27) + t207 * t166) - in2[4]
         * t29) - t22_tmp * 2.0;
  t69 = (((((-t20 + t44_tmp) + t6 * t48) + in2[5] * t46) + t46_tmp * t27) - t208
         * 2.0) - t207 * t214;
  t70 = (t8 + t11) - 1.0;
  t71 = t7 + t51_tmp;
  t72 = t50_tmp - t52;
  t73 = in2[5] * t17;
  t74 = t17_tmp * t27;
  t85_tmp = in2[4] * t19;
  t85 = ((t60_tmp - t73) - t74) + t85_tmp;
  t89 = muDoubleScalarPower(muDoubleScalarAbs((((((((t65 * in2[103] + t69 * in2
    [104]) + t70 * in2[99]) + t72 * in2[101]) + t71 * in2[106]) - t70 * in2[105])
    - t71 * in2[100]) - t72 * in2[107]) - t85 * in2[102]), in1[1] - 1.0);
  t94 = t6 * t17;
  t95 = in2[3] * t19;
  t96 = t17_tmp * t32;
  t5 = t52_tmp * t12;
  t100 = ((((t209 + t6 * t46) + t46_tmp * t32) + t5 * t214) - in2[5] * t48) -
    t33_tmp * 2.0;
  t101 = (t8 + t10) - 1.0;
  t102 = t9 + t53_tmp;
  t103 = t7 - t51_tmp;
  t104 = in2[3] * t29;
  t105 = t29_tmp * t32;
  t106_tmp = t217 * 2.0;
  b_t106_tmp = t5 * t184;
  t106 = (((((t22_tmp - t23_tmp) + t94) + t95) + t96) - t106_tmp) - b_t106_tmp;
  t115_tmp = in2[5] * t31;
  t115 = ((t60_tmp - t104) - t105) + t115_tmp;
  t118 = muDoubleScalarPower(muDoubleScalarAbs((((((((t106 * in2[102] + t100 *
    in2[104]) + t101 * in2[100]) + t103 * in2[99]) + t102 * in2[107]) - t101 *
    in2[106]) - t102 * in2[101]) - t103 * in2[105]) - t115 * in2[103]), in1[1] -
    1.0);
  t208 = t183 * t12;
  t128 = ((((t32_tmp + t6 * t19) + t17_tmp * t34) + t208 * t184) - in2[3] * t17)
    - t44_tmp * 2.0;
  t132 = (((((-t25 + t33_tmp) + t6 * t29) + in2[4] * t31) + t29_tmp * t34) -
          t213 * 2.0) - t208 * t166;
  t133 = (t10 + t11) - 1.0;
  t134 = t50_tmp + t52;
  t135 = t9 - t53_tmp;
  t136 = in2[4] * t48;
  t137 = t46_tmp * t34;
  t33_tmp = in2[3] * t46;
  t148 = ((t60_tmp - t136) - t137) + t33_tmp;
  t151 = muDoubleScalarPower(muDoubleScalarAbs((((((((t128 * in2[102] + t132 *
    in2[103]) + t133 * in2[101]) + t135 * in2[100]) + t134 * in2[105]) - t133 *
    in2[107]) - t134 * in2[99]) - t135 * in2[106]) - t148 * in2[104]), in1[1] -
    1.0);
  t29 = t17_tmp * t36 * 2.0;
  t31 = t29_tmp * t36 * 2.0;
  t158 = in2[10] * 2.0;
  t48 = t5 * 2.0;
  t160 = (t158 + t46_tmp * t36 * 2.0) - t48;
  t162 = t55 + in2[3] * in2[9] * t54 * 2.0;
  t5 = in2[5] * 2.0;
  t165 = t5 + in2[3] * in2[10] * t54 * 2.0;
  t166 = in2[3] * in2[11] * t54 * 2.0;
  t44_tmp = t208 * 2.0;
  t168 = (t35 - t31) + t44_tmp;
  t46 = t41 * 2.0;
  t20 = t4 * t12 * 2.0;
  t171 = (-t29 + t46) + t20;
  t175 = t56 - t166;
  t179 = muDoubleScalarPower(muDoubleScalarAbs(((((t171 * in2[102] + t168 * in2
    [103]) + t175 * in2[110]) - t160 * in2[104]) - t162 * in2[108]) - t165 *
    in2[109]), in1[1] - 1.0);
  t183 = t29_tmp * t42 * 2.0;
  t184 = t17_tmp * t42 * 2.0;
  t17 = t46_tmp * t42 * 2.0;
  t187 = t55 + in2[4] * in2[10] * t54 * 2.0;
  t19 = in2[4] * in2[9] * t54 * 2.0;
  t4 = in2[3] * 2.0;
  t191 = t4 + in2[4] * in2[11] * t54 * 2.0;
  t192 = (t35 - t44_tmp) + t184;
  t217 = t2 * t12 * 2.0;
  t194 = (t46 - t183) + t217;
  t32_tmp = t207 * 2.0;
  t197 = (t49 - t17) + t32_tmp;
  t2 = t5 - t19;
  t203 = muDoubleScalarPower(muDoubleScalarAbs(((((t194 * in2[103] + t197 * in2
    [104]) + t2 * in2[108]) - t192 * in2[102]) - t187 * in2[109]) - t191 * in2
    [110]), in1[1] - 1.0);
  t207 = t46_tmp * t43 * 2.0;
  t208 = t17_tmp * t43 * 2.0;
  t209 = t29_tmp * t43 * 2.0;
  t25 = t55 + in2[5] * in2[11] * t54 * 2.0;
  t213 = t56 + in2[5] * in2[9] * t54 * 2.0;
  t214 = in2[5] * in2[10] * t54 * 2.0;
  out1[0] = t70;
  out1[1] = -t7 - t51_tmp;
  out1[2] = t50_tmp - in2[3] * in2[5] * 2.0;
  out1[3] = ((((t73 + t74) - t58_tmp) - t57_tmp) - t59_tmp) - t85_tmp;
  out1[4] = t65;
  out1[5] = t69;
  out1[6] = (-t8 - t11) + 1.0;
  out1[7] = t71;
  out1[8] = -t50_tmp + t52;
  memset(&out1[9], 0, 82U * sizeof(real_T));
  out1[91] = t7 - in2[3] * in2[4] * 2.0;
  out1[92] = t101;
  out1[93] = -t9 - t53_tmp;
  out1[94] = (((((t22_tmp + t94) + t95) + t96) - t106_tmp) - t23_tmp) -
    b_t106_tmp;
  out1[95] = ((((t104 + t105) - t58_tmp) - t57_tmp) - t59_tmp) - t115_tmp;
  out1[96] = t100;
  out1[97] = -t7 + t51_tmp;
  out1[98] = (-t8 - t10) + 1.0;
  out1[99] = t102;
  memset(&out1[100], 0, 82U * sizeof(real_T));
  out1[182] = t52_tmp * -2.0 - t50_tmp;
  out1[183] = t9 - in2[4] * in2[5] * 2.0;
  out1[184] = t133;
  out1[185] = t128;
  out1[186] = t132;
  out1[187] = ((((t136 + t137) - t58_tmp) - t57_tmp) - t59_tmp) - t33_tmp;
  out1[188] = t134;
  out1[189] = -t9 + t53_tmp;
  out1[190] = (-t10 - t11) + 1.0;
  memset(&out1[191], 0, 85U * sizeof(real_T));
  out1[276] = (t41 * -2.0 + t29) - t20;
  out1[277] = (-t35 + t31) - t44_tmp;
  out1[278] = t160;
  out1[279] = 0.0;
  out1[280] = 0.0;
  out1[281] = 0.0;
  out1[282] = t162;
  out1[283] = t165;
  out1[284] = -t56 + t166;
  memset(&out1[285], 0, 82U * sizeof(real_T));
  out1[367] = (t35 + t184) - t44_tmp;
  out1[368] = (t41 * -2.0 + t183) - t217;
  out1[369] = (-t49 + t17) - t32_tmp;
  out1[370] = 0.0;
  out1[371] = 0.0;
  out1[372] = 0.0;
  out1[373] = in2[5] * -2.0 + t19;
  out1[374] = t187;
  out1[375] = t191;
  memset(&out1[376], 0, 82U * sizeof(real_T));
  out1[458] = (in2[10] * -2.0 + t208) - t48;
  out1[459] = (t49 + t209) - t32_tmp;
  t5 = t3 * t12 * 2.0;
  out1[460] = (t41 * -2.0 + t207) - t5;
  out1[461] = 0.0;
  out1[462] = 0.0;
  out1[463] = 0.0;
  out1[464] = t213;
  out1[465] = in2[3] * -2.0 + t214;
  out1[466] = t25;
  memset(&out1[467], 0, 79U * sizeof(real_T));
  t183 = (t158 + t48) - t208;
  t217 = (t46 - t207) + t5;
  t209 += t49 - t32_tmp;
  t208 = t4 - t214;
  t214 = muDoubleScalarPower(muDoubleScalarAbs(((((t217 * in2[104] + t183 * in2
    [102]) + t208 * in2[109]) - t209 * in2[103]) - t25 * in2[110]) - t213 * in2
    [108]), in1[1] - 1.0);
  out2[0] = in1[0] * (((in2[5] * t32 - in2[4] * t34) + in2[3] * t60_tmp) + t6 *
                      t27) * 0.00026666666666666668;
  out2[1] = in1[0] * (((-in2[5] * t27 + in2[3] * t34) + in2[4] * t60_tmp) + t6 *
                      t32) * 0.00026666666666666668;
  out2[2] = in1[0] * ((((84.999999999999986 + in2[4] * t27) - in2[3] * t32) +
                       in2[5] * t60_tmp) + t6 * t34) * 0.0008;
  out2[3] = in1[0] * (((in2[4] * t43 * 2.0 - in2[5] * t42 * 2.0) + in2[3] * t61 *
                       2.0) - t6 * t36 * 2.0) * -4.2666666666666668E-11;
  out2[4] = in1[0] * (((in2[5] * t36 * 2.0 - in2[3] * t43 * 2.0) + in2[4] * t61 *
                       2.0) - t6 * t42 * 2.0) * -1.421066666666666E-8;
  out2[5] = in1[0] * (((in2[4] * t36 * 2.0 - in2[3] * t42 * 2.0) - in2[5] * t61 *
                       2.0) + t6 * t43 * 2.0) * 4.75111111111111E-9;
  t20 = in1[2] * t70 * t89;
  t207 = in1[2] * t71 * t89;
  t5 = in1[2] * t72 * t89;
  out3[0] = (((((((-in1[2] * t65 * t89 * in2[103] - t20 * in2[99]) + t207 * in2
                  [100]) - in1[2] * t69 * t89 * in2[104]) - t5 * in2[101]) + t20
               * in2[105]) - t207 * in2[106]) + t5 * in2[107]) + in1[2] * t85 *
    t89 * in2[102];
  t20 = in1[2] * t103 * t118;
  t207 = in1[2] * t102 * t118;
  out3[1] = (((((((-in1[2] * t101 * t118 * in2[100] - t20 * in2[99]) + t207 *
                  in2[101]) - in1[2] * t100 * t118 * in2[104]) + in1[2] * t101 *
                t118 * in2[106]) + t20 * in2[105]) - in1[2] * t106 * t118 * in2
              [102]) - t207 * in2[107]) + in1[2] * t115 * t118 * in2[103];
  t20 = in1[2] * t134 * t151;
  t207 = in1[2] * t133 * t151;
  t5 = in1[2] * t135 * t151;
  out3[2] = (((((((-in1[2] * t128 * t151 * in2[102] + t20 * in2[99]) - t207 *
                  in2[101]) - in1[2] * t132 * t151 * in2[103]) - t5 * in2[100])
               - t20 * in2[105]) + t207 * in2[107]) + t5 * in2[106]) + in1[2] *
    t148 * t151 * in2[104];
  out3[3] = ((((-in1[3] * t160 * t179 * in2[104] - in1[3] * t162 * t179 * in2
                [108]) + in1[3] * t168 * t179 * in2[103]) + in1[3] * t171 * t179
              * in2[102]) - in1[3] * t165 * t179 * in2[109]) + in1[3] * t175 *
    t179 * in2[110];
  out3[4] = ((((-in1[3] * t192 * t203 * in2[102] - in1[3] * t187 * t203 * in2
                [109]) + in1[3] * t194 * t203 * in2[103]) - in1[3] * t191 * t203
              * in2[110]) + in1[3] * t197 * t203 * in2[104]) + in1[3] * t2 *
    t203 * in2[108];
  out3[5] = ((((in1[3] * t183 * t214 * in2[102] - in1[3] * t25 * t214 * in2[110])
               - in1[3] * t213 * t214 * in2[108]) + in1[3] * t217 * t214 * in2
              [104]) - in1[3] * t209 * t214 * in2[103]) + in1[3] * t208 * t214 *
    in2[109];
  for (i = 0; i < 6; i++) {
    out4[i] = 0.0;
  }
}

/* End of code generation (sprdmpF95.c) */
