/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * loadsF1.c
 *
 * Code generation for function 'loadsF1'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "loadsF1.h"

/* Function Definitions */
void loadsF1(const real_T in1[34], const real_T in2[24], real_T out1[72], real_T
             out2[6])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t249;
  real_T t48;
  real_T t13;
  real_T t31;
  real_T t30;
  real_T t16;
  real_T t18;
  real_T t20;
  real_T t21_tmp;
  real_T t23_tmp;
  real_T t22_tmp;
  real_T t25;
  real_T t35;
  real_T t26;
  real_T t27;
  real_T t28;
  real_T t29;
  real_T t32;
  real_T t33;
  real_T t36;
  real_T t34_tmp;
  real_T t220;
  real_T t221;
  real_T t203;
  real_T t51_tmp;
  real_T t51;
  real_T t52_tmp;
  real_T t57_tmp;
  real_T t54_tmp;
  real_T t56_tmp;
  real_T t61;
  real_T t68_tmp;
  real_T t69;
  real_T t70;
  real_T t71;
  real_T t72;
  real_T t109;
  real_T t73_tmp;
  real_T t77;
  real_T t79;
  real_T t82;
  real_T t120;
  real_T t85_tmp;
  real_T t85;
  real_T t86;
  real_T t87;
  real_T t88;
  real_T t89;
  real_T t90;
  real_T t91;
  real_T t94;
  real_T t95;
  real_T t96;
  real_T t112;
  real_T t113;
  real_T t97;
  real_T t100;
  real_T t101;
  real_T t102;
  real_T t103;
  real_T t105_tmp;
  real_T t106_tmp;
  real_T t108_tmp;
  real_T t114_tmp;
  real_T t122;
  real_T t121;
  real_T t125;
  real_T t126;
  real_T t127;
  real_T t128;
  real_T t132;
  real_T t135;
  real_T t138;
  real_T t141;
  real_T t148;
  real_T t152_tmp;
  real_T t156;
  real_T t163;
  real_T t168;
  real_T t169_tmp;
  real_T t170;
  real_T t171;
  real_T t172;
  real_T t174_tmp;
  real_T t175;
  real_T t176;
  real_T t178;
  real_T t179;
  real_T t181;
  real_T t183;
  real_T t184;
  real_T t185;
  real_T t186;
  real_T t188;
  real_T t189;
  real_T t191;
  real_T t202;
  real_T t193;
  real_T t201;
  real_T t194;
  real_T t197;
  real_T t200;
  real_T t208;
  real_T t209;
  real_T t210;
  real_T t211;
  real_T t213;
  real_T t219;
  real_T t214;
  real_T t217;
  real_T t215;
  real_T t216;
  real_T t224;
  real_T t231;
  real_T t236;
  real_T t241;

  /* LOADSF1 */
  /*     [OUT1,OUT2] = LOADSF1(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jan-2019 07:54:13 */
  t2 = in2[5] / 2.0;
  t3 = in2[3] / 2.0;
  t4 = in2[4] / 2.0;
  t5 = muDoubleScalarCos(t3);
  t6 = muDoubleScalarCos(t2);
  t7 = muDoubleScalarSin(t4);
  t8 = muDoubleScalarCos(t4);
  t9 = muDoubleScalarSin(t3);
  t3 = muDoubleScalarSin(t2);
  t249 = t6 * t8 * t9;
  t48 = t5 * t7 * t3;
  t13 = t249 + t48;
  t31 = t5 * t8 * t3;
  t30 = t6 * t7 * t9;
  t16 = t31 + t30;
  t18 = in2[8] + in1[4] / 2.0;
  t4 = t5 * t6;
  t2 = t4 * t7;
  t5 = t8 * t9 * t3;
  t20 = t2 - t5;
  t21_tmp = t4 * t8;
  t23_tmp = t7 * t9 * t3;
  t22_tmp = t21_tmp - t23_tmp;
  t25 = t2 / 2.0;
  t35 = t5 / 2.0;
  t26 = t25 - t35;
  t27 = t31 / 2.0;
  t28 = t30 / 2.0;
  t29 = t27 + t28;
  t30 = t249 / 2.0;
  t31 = t48 / 2.0;
  t32 = t30 + t31;
  t33 = t21_tmp / 2.0;
  t36 = t23_tmp / 2.0;
  t34_tmp = t33 - t36;
  t2 = in2[11] / 2.0;
  t4 = in2[9] / 2.0;
  t3 = in2[10] / 2.0;
  t6 = muDoubleScalarCos(t3);
  t7 = muDoubleScalarCos(t2);
  t8 = muDoubleScalarSin(t4);
  t9 = muDoubleScalarCos(t4);
  t5 = muDoubleScalarSin(t3);
  t3 = muDoubleScalarSin(t2);
  t4 = t6 * t7;
  t220 = t4 * t8;
  t221 = t9 * t5 * t3;
  t48 = t220 + t221;
  t203 = t6 * t9 * t3;
  t51_tmp = t7 * t8 * t5;
  t51 = t203 + t51_tmp;
  t52_tmp = t4 * t9;
  t57_tmp = t8 * t5 * t3;
  t249 = t52_tmp - t57_tmp;
  t54_tmp = t6 * t8 * t3;
  t56_tmp = t7 * t9 * t5;
  t4 = t54_tmp - t56_tmp;
  t61 = (in2[6] * t20 + in2[7] * t16) + t13 * t18;
  t68_tmp = (in2[6] * t13 + in2[7] * t22_tmp) - t18 * t20;
  t69 = in2[7] * t26;
  t70 = t18 * t34_tmp;
  t71 = in2[6] * t32;
  t72 = in2[7] * t34_tmp;
  t109 = t18 * t26;
  t73_tmp = (t71 + t72) - t109;
  t3 = in2[6] * t26;
  t2 = in2[7] * t29;
  t5 = t18 * t32;
  t77 = (t3 + t2) + t5;
  t79 = t18 * t29;
  t82 = ((t16 * t51 + t13 * t48) - t20 * t4) - t22_tmp * t249;
  t9 = t26 * t48;
  t7 = t34_tmp * t51;
  t120 = t29 * t249;
  t85_tmp = t32 * t4;
  t85 = ((t9 + t85_tmp) - t7) - t120;
  t86 = t16 * t4;
  t87 = t13 * t249;
  t88 = t20 * t51;
  t89 = t22_tmp * t48;
  t90 = t29 * t48;
  t91 = t26 * t249;
  t94 = ((t13 * t4 + t20 * t48) - t16 * t249) - t22_tmp * t51;
  t95 = t29 * t51;
  t96 = t32 * t48;
  t112 = t26 * t4;
  t113 = t34_tmp * t249;
  t97 = ((t95 + t96) - t112) - t113;
  t100 = ((t13 * t51 + t22_tmp * t4) - t16 * t48) - t20 * t249;
  t101 = t26 * t51;
  t102 = t34_tmp * t48;
  t103 = t29 * t4;
  t6 = t32 * t249;
  t105_tmp = ((t101 + t102) + t103) + t6;
  t106_tmp = (in2[6] * t22_tmp + t16 * t18) - in2[7] * t13;
  t108_tmp = (in2[7] * t20 + t18 * t22_tmp) - in2[6] * t16;
  t114_tmp = ((t86 + t87) + t88) + t89;
  t122 = t32 * t51;
  t8 = t34_tmp * t4;
  t121 = ((t90 + t91) - t122) - t8;
  t125 = t30 - t31;
  t126 = t33 + t36;
  t127 = t25 + t35;
  t128 = t27 - t28;
  t132 = (in2[6] * t126 + in2[7] * t125) + t18 * t128;
  t135 = (in2[6] * t127 + in2[7] * t128) - t18 * t125;
  t138 = (in2[6] * t125 + t18 * t127) - in2[7] * t126;
  t141 = (in2[7] * t127 + t18 * t126) - in2[6] * t128;
  t148 = ((t51 * t127 + t48 * t126) + t128 * t4) - t249 * t125;
  t152_tmp = ((t51 * t126 + t249 * t128) + t4 * t125) - t48 * t127;
  t156 = ((t48 * t128 + t51 * t125) + t127 * t249) - t4 * t126;
  t163 = ((t48 * t125 + t4 * t127) + t249 * t126) - t51 * t128;
  t27 = in2[6] * t29;
  t168 = (t69 - t70) + t27;
  t169_tmp = in2[7] * t32;
  t170 = (t3 - t2) + t5;
  t171 = ((t101 - t102) - t103) + t6;
  t172 = ((t90 - t91) + t122) - t8;
  t174_tmp = ((t9 + t7) + t120) + t85_tmp;
  t175 = t26 * t61;
  t176 = t29 * t108_tmp;
  t178 = (t79 + t169_tmp) + in2[6] * (t33 - t36);
  t179 = ((t95 - t96) + t112) - t113;
  t181 = ((t101 - t102) - t103) + t32 * (t52_tmp - t57_tmp);
  t183 = t16 * t20 * 2.0;
  t184 = t16 * t16;
  t185 = t13 * t13;
  t186 = t20 * t20;
  t188 = t13 * t20 * 2.0;
  t189 = t13 * t16 * 2.0;
  t191 = t52_tmp / 2.0;
  t202 = t57_tmp / 2.0;
  t4 = t191 - t202;
  t193 = t54_tmp / 2.0;
  t201 = t56_tmp / 2.0;
  t194 = t193 - t201;
  t6 = t220 / 2.0;
  t5 = t221 / 2.0;
  t197 = t6 + t5;
  t2 = t203 / 2.0;
  t3 = t51_tmp / 2.0;
  t200 = t2 + t3;
  t203 = t16 * t4;
  t18 = t13 * t194;
  t30 = t16 * t197;
  t28 = t13 * t200;
  t35 = t20 * t4;
  t208 = t13 * t197;
  t209 = t20 * t194;
  t210 = t13 * t4;
  t211 = t22_tmp * t197;
  t51_tmp = (t30 + t28) + t35;
  t213 = t51_tmp + t22_tmp * t194;
  t219 = t16 * t200;
  t249 = t22_tmp * t4;
  t214 = ((t208 + t209) - t219) - t249;
  t217 = t20 * t200;
  t9 = t16 * t194;
  t7 = t210 + t211;
  t215 = (t7 - t217) - t9;
  t220 = t20 * t197;
  t221 = t22_tmp * t200;
  t216 = ((t203 + t18) - t220) - t221;
  t31 = (t21_tmp - t23_tmp) * (t193 - t201);
  t224 = ((t30 + t28) + t20 * (t191 - t202)) + t31;
  t8 = t2 - t3;
  t4 = t6 - t5;
  t3 = t193 + t201;
  t2 = t191 + t202;
  t231 = ((t13 * t4 + t20 * t3) - t16 * t8) - t22_tmp * t2;
  t236 = ((t16 * t2 + t13 * t3) - t20 * t4) - t22_tmp * t8;
  t241 = ((t16 * t4 + t13 * t8) + t20 * t2) + t3 * t22_tmp;
  t103 = ((t13 * t2 + t22_tmp * t4) - t16 * t3) - t20 * t8;
  t102 = (t7 + t217) + t9;
  t101 = ((t208 - t209) + t219) - t249;
  t48 = ((t30 - t28) + t35) - t31;
  t120 = ((t203 - t18) - t220) + t221;
  out1[0] = 1.0;
  out1[1] = 0.0;
  out1[2] = 0.0;
  t85_tmp = in1[16] * t82;
  t113 = in1[16] * t94;
  t25 = in2[6] * t34_tmp + t79;
  t7 = (t69 + t70) - t27;
  t31 = t25 - t169_tmp;
  t30 = in1[16] * t85;
  t28 = in1[16] * t97;
  out1[3] = ((((((((((-t29 * t61 - t16 * t77) - t22_tmp * t73_tmp) - t34_tmp *
                    t68_tmp) + t26 * t108_tmp) - t32 * t106_tmp) + t20 * t7) -
                t13 * t31) + t28 * t100 * 2.0) + t30 * t114_tmp * 2.0) + t113 *
             t105_tmp * 2.0) - t85_tmp * t121 * 2.0;
  t35 = in1[16] * t100;
  out1[4] = ((((((((((t20 * t132 + t13 * t141) - t16 * t138) - t22_tmp * t135) +
                   t61 * t126) - t68_tmp * t128) - t106_tmp * t127) + t125 *
                t108_tmp) + in1[16] * t163 * t114_tmp * 2.0) + t85_tmp * t148 *
              2.0) + t113 * t156 * 2.0) - t35 * t152_tmp * 2.0;
  t27 = in1[16] * t114_tmp;
  t9 = (-t71 + t72) + t109;
  out1[5] = ((((((((((t34_tmp * t108_tmp - t32 * t61) - t26 * t68_tmp) - t29 *
                    t106_tmp) - t13 * t170) - t22_tmp * t168) - t16 * (t25 +
    t169_tmp)) + t20 * t9) + t85_tmp * (((t95 - t96) + t112) - (t33 - t36) *
    (t52_tmp - t57_tmp)) * 2.0) + t113 * t174_tmp * 2.0) + t35 * t172 * 2.0) -
    t27 * t171 * 2.0;
  out1[6] = ((-t184 - t185) + t186) + t22_tmp * t22_tmp;
  out1[7] = t183 - t13 * t22_tmp * 2.0;
  t25 = t16 * t22_tmp * 2.0;
  out1[8] = t188 + t25;
  t8 = ((t203 + t18) - t20 * t197) - t200 * t22_tmp;
  out1[9] = ((in1[16] * t8 * t114_tmp * 2.0 + t113 * (((t210 + t211) - t20 *
    t200) - t16 * (t193 - t201)) * 2.0) + t85_tmp * (t51_tmp + t194 * t22_tmp) *
             2.0) + t35 * (((t208 + t209) - t16 * t200) - (t21_tmp - t23_tmp) *
    (t191 - t202)) * 2.0;
  out1[10] = ((t85_tmp * t103 * -2.0 + t113 * t241 * 2.0) + t35 * t236 * 2.0) -
    t27 * t231 * 2.0;
  t5 = ((t203 - t220) + t221) - t13 * (t193 - t201);
  out1[11] = ((t85_tmp * t101 * 2.0 - t35 * t48 * 2.0) - t27 * t102 * 2.0) +
    t113 * t5 * 2.0;
  out1[12] = 0.0;
  out1[13] = 1.0;
  out1[14] = 0.0;
  t6 = t32 * t68_tmp;
  out1[15] = ((((((((((t175 + t176) - t13 * t73_tmp) + t20 * t77) - t6) + t16 *
                   t7) + t106_tmp * t34_tmp) + t22_tmp * t31) + t27 * (((t90 +
    t91) - t32 * t51) - (t33 - t36) * (t54_tmp - t56_tmp)) * 2.0) + t85_tmp *
               t85 * 2.0) + t113 * t97 * 2.0) - t35 * t105_tmp * 2.0;
  out1[16] = ((((((((((-t13 * t135 + t16 * t132) + t20 * t138) - t22_tmp * t141)
                    + t61 * t125) - t68_tmp * t127) - t108_tmp * t126) + t128 *
                 t106_tmp) + t85_tmp * t163 * 2.0) - t113 * t152_tmp * 2.0) -
              t35 * t156 * 2.0) - t27 * t148 * 2.0;
  t2 = t61 * t34_tmp - t29 * t68_tmp;
  t4 = t26 * t106_tmp;
  t3 = t32 * t108_tmp;
  out1[17] = (((((((((t2 - t13 * t168) + t20 * t178) + t170 * t22_tmp) + t16 *
                   t9) + t4) + t3) - t85_tmp * t171 * 2.0) + t113 * t172 * 2.0)
              - t35 * t174_tmp * 2.0) - t27 * t179 * 2.0;
  out1[18] = t183 + t13 * (t21_tmp - t23_tmp) * 2.0;
  out1[19] = ((t184 - t185) - t186) + t22_tmp * t22_tmp;
  out1[20] = t189 - t20 * t22_tmp * 2.0;
  out1[21] = ((t85_tmp * t8 * 2.0 + t113 * (((t208 + t209) - t16 * t200) -
    (t21_tmp - t23_tmp) * (t191 - t202)) * 2.0) - t35 * t215 * 2.0) - t27 * t213
    * 2.0;
  out1[22] = ((in1[16] * t103 * t114_tmp * 2.0 - t85_tmp * t231 * 2.0) + t113 *
              t236 * 2.0) - t35 * t241 * 2.0;
  out1[23] = ((t85_tmp * t102 * -2.0 - t113 * t48 * 2.0) - t35 * t120 * 2.0) -
    t27 * t101 * 2.0;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 1.0;
  out1[27] = (((((((((t2 - t22_tmp * t77) - t4) - t3) + t13 * t7) + t20 * t31) +
                 t16 * t73_tmp) + t85_tmp * t105_tmp * 2.0) + t113 * (((t90 +
    t91) - t32 * t51) - (t33 - t36) * (t54_tmp - t56_tmp)) * 2.0) + t30 * t100 *
              2.0) - t28 * t114_tmp * 2.0;
  out1[28] = ((((((((((t13 * t132 + t16 * t135) - t22_tmp * t138) - t20 * t141)
                    + t61 * t128) - t106_tmp * t125) - t108_tmp * t127) + t126 *
                 t68_tmp) + in1[16] * (((t86 + t87) + t88) + t89) * t152_tmp *
                2.0) + t85_tmp * t156 * 2.0) - t113 * t148 * 2.0) + t35 * t163 *
    2.0;
  out1[29] = ((((((((((t175 - t176) - t6) - t34_tmp * t106_tmp) + t16 * t168) +
                   t20 * t170) - t22_tmp * t178) + t13 * t9) + t85_tmp *
                t174_tmp * 2.0) - t35 * t171 * 2.0) - t113 * t179 * 2.0) - t27 *
    t172 * 2.0;
  out1[30] = t188 - t25;
  out1[31] = t189 + t20 * (t21_tmp - t23_tmp) * 2.0;
  out1[32] = ((-t184 + t185) - t186) + t22_tmp * t22_tmp;
  out1[33] = ((t35 * t8 * 2.0 + t85_tmp * (((t210 + t211) - t20 * t200) - t16 *
    (t193 - t201)) * 2.0) - t113 * t213 * 2.0) - t27 * t214 * 2.0;
  out1[34] = ((t85_tmp * t241 * 2.0 - t35 * t231 * 2.0) + t113 * t103 * 2.0) -
    t27 * t236 * 2.0;
  out1[35] = ((t113 * t101 * -2.0 - t35 * t102 * 2.0) + t85_tmp * t5 * 2.0) +
    in1[16] * (((t86 + t87) + t88) + t89) * t48 * 2.0;
  out1[36] = 0.0;
  out1[37] = 0.0;
  out1[38] = 0.0;
  out1[39] = ((t82 * t85 * -2.0 - t94 * t97 * 2.0) - t100 * t105_tmp * 2.0) +
    t114_tmp * (((t90 + t91) - t32 * t51) - (t33 - t36) * (t54_tmp - t56_tmp)) *
    2.0;
  out1[40] = ((t82 * t163 * -2.0 - t100 * t156 * 2.0) - t114_tmp * t148 * 2.0) +
    t94 * t152_tmp * 2.0;
  out1[41] = ((t82 * t181 * 2.0 - t94 * t172 * 2.0) - t100 * t174_tmp * 2.0) -
    t114_tmp * t179 * 2.0;
  out1[42] = 0.0;
  out1[43] = 0.0;
  out1[44] = 0.0;
  out1[45] = ((t82 * t216 * -2.0 - t94 * t214 * 2.0) - t100 * t215 * 2.0) -
    t114_tmp * t213 * 2.0;
  out1[46] = ((t103 * t114_tmp * 2.0 + t82 * t231 * 2.0) - t94 * t236 * 2.0) -
    t100 * t241 * 2.0;
  out1[47] = ((t82 * t102 * 2.0 - t100 * t120 * 2.0) - t114_tmp * t101 * 2.0) +
    t94 * t48 * 2.0;
  out1[48] = 0.0;
  out1[49] = 0.0;
  out1[50] = 0.0;
  out1[51] = ((t97 * t100 * 2.0 - t85 * t114_tmp * 2.0) - t94 * t105_tmp * 2.0)
    - t82 * t121 * 2.0;
  out1[52] = ((t82 * t148 * 2.0 - t94 * t156 * 2.0) - t100 * t152_tmp * 2.0) -
    t114_tmp * t163 * 2.0;
  out1[53] = ((t181 * t114_tmp * 2.0 - t94 * t174_tmp * 2.0) + t100 * t172 * 2.0)
    + t82 * (((t95 - t96) + t112) - (t33 - t36) * (t52_tmp - t57_tmp)) * 2.0;
  out1[54] = 0.0;
  out1[55] = 0.0;
  out1[56] = 0.0;
  out1[57] = ((t82 * t224 * 2.0 - t94 * t215 * 2.0) - t114_tmp * t216 * 2.0) +
    t100 * (((t208 + t209) - t219) - (t21_tmp - t23_tmp) * (t191 - t202)) * 2.0;
  out1[58] = ((t231 * t114_tmp * 2.0 - t82 * t103 * 2.0) - t94 * t241 * 2.0) +
    t100 * t236 * 2.0;
  out1[59] = ((t82 * t101 * 2.0 - t94 * t120 * 2.0) - t100 * t48 * 2.0) +
    t114_tmp * t102 * 2.0;
  out1[60] = 0.0;
  out1[61] = 0.0;
  out1[62] = 0.0;
  out1[63] = ((t82 * t97 * 2.0 - t85 * t94 * 2.0) + t100 * (((t90 + t91) - t122)
    - (t33 - t36) * (t54_tmp - t56_tmp)) * 2.0) + t114_tmp * t105_tmp * 2.0;
  out1[64] = ((t156 * t114_tmp * 2.0 - t82 * t152_tmp * 2.0) - t100 * t148 * 2.0)
    - t94 * t163 * 2.0;
  out1[65] = ((t82 * t172 * 2.0 + t94 * t181 * 2.0) - t100 * t179 * 2.0) +
    t114_tmp * t174_tmp * 2.0;
  out1[66] = 0.0;
  out1[67] = 0.0;
  out1[68] = 0.0;
  out1[69] = ((t114_tmp * (((t210 + t211) - t217) - t16 * (t193 - t201)) * 2.0 -
               t94 * t216 * 2.0) - t100 * t224 * 2.0) + t82 * (((t208 + t209) -
    t219) - (t21_tmp - t23_tmp) * (t191 - t202)) * 2.0;
  out1[70] = ((t241 * t114_tmp * 2.0 + t82 * t236 * 2.0) + t94 * t231 * 2.0) +
    t100 * t103 * 2.0;
  out1[71] = ((t94 * t102 * 2.0 + t114_tmp * t5 * 2.0) - t82 * t48 * 2.0) - t100
    * t101 * 2.0;
  t4 = (t100 * in1[30] + t94 * in1[31]) - t114_tmp * in1[32];
  t3 = (t114_tmp * in1[31] + t94 * in1[32]) - t82 * in1[30];
  t2 = (t94 * in1[30] + t82 * in1[32]) - t100 * in1[31];
  t5 = t82 * in1[31] + t100 * in1[32];
  t6 = t5 + in1[30] * t114_tmp;
  out2[0] = in1[27];
  out2[1] = in1[28];
  out2[2] = in1[29];
  out2[3] = ((-t82 * t3 - t94 * t2) + t100 * t4) - t114_tmp * (t5 + t114_tmp *
    in1[30]);
  out2[4] = ((t94 * t4 + t82 * t6) + t100 * t2) - t114_tmp * t3;
  out2[5] = ((t82 * t2 - t94 * t3) - t100 * t6) - t114_tmp * t4;
}

/* End of code generation (loadsF1.c) */
