function [out1,out2,out3,out4] = massF2(in1,in2,s)
%MASSF2
%    [OUT1,OUT2,OUT3,OUT4] = MASSF2(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    05-Jan-2019 01:28:54

g_xsym = in1(:,13);
g_ysym = in1(:,14);
g_zsym = in1(:,15);
l_f_sym = in1(:,17);
l_s_sym = in1(:,5);
m_f_sym = in1(:,16);
q13 = in2(:,13);
q14 = in2(:,14);
q15 = in2(:,15);
q16 = in2(:,16);
q17 = in2(:,17);
q18 = in2(:,18);
q19 = in2(:,19);
q20 = in2(:,20);
q21 = in2(:,21);
q22 = in2(:,22);
q23 = in2(:,23);
q24 = in2(:,24);
r_f_sym = in1(:,18);
u13 = in2(:,37);
u14 = in2(:,38);
u15 = in2(:,39);
u16 = in2(:,40);
u17 = in2(:,41);
u18 = in2(:,42);
u19 = in2(:,43);
u20 = in2(:,44);
u21 = in2(:,45);
u22 = in2(:,46);
u23 = in2(:,47);
u24 = in2(:,48);
t2 = l_f_sym.^2;
t3 = r_f_sym.^2;
t4 = t3.*3.0;
t5 = t2+t4;
t6 = (m_f_sym.*t5)./1.2e1;
t7 = (m_f_sym.*t2)./4.0;
t8 = t6+t7;
out1 = reshape([m_f_sym,0.0,0.0,0.0,0.0,0.0,0.0,m_f_sym,0.0,0.0,0.0,0.0,0.0,0.0,m_f_sym,0.0,0.0,0.0,0.0,0.0,0.0,t8,0.0,0.0,0.0,0.0,0.0,0.0,t8,0.0,0.0,0.0,0.0,0.0,0.0,(m_f_sym.*t3)./2.0],[6,6]);
if nargout > 1
    t9 = l_s_sym.^2;
    t10 = t9.^2;
    t11 = l_s_sym.*q13;
    t12 = q14.*t9;
    t13 = l_s_sym.*q15.*t9;
    t14 = q16.*t10;
    t15 = t11+t12+t13+t14;
    t16 = l_s_sym.*q17;
    t17 = q18.*t9;
    t18 = l_s_sym.*q19.*t9;
    t19 = q20.*t10;
    t20 = t16+t17+t18+t19;
    t21 = l_s_sym.*q21;
    t22 = q22.*t9;
    t23 = l_s_sym.*q23.*t9;
    t24 = q24.*t10;
    t25 = t21+t22+t23+t24;
    t26 = t15.^2;
    t27 = t20.^2;
    t28 = t25.^2;
    t29 = -t26-t27-t28+1.0;
    t30 = 1.0./sqrt(t29);
    t31 = sqrt(t29);
    t32 = l_f_sym.*l_s_sym.*t31;
    t33 = l_f_sym.*t9.*t31;
    t34 = l_f_sym.*l_s_sym.*t9.*t31;
    t35 = l_f_sym.*t10.*t31;
    t36 = l_f_sym.*l_s_sym.*t25;
    t37 = l_f_sym.*t9.*t25;
    t38 = l_f_sym.*l_s_sym.*t9.*t25;
    t39 = l_f_sym.*t10.*t25;
    t40 = l_s_sym.*t25.*2.0;
    t41 = l_s_sym.*t15.*t20.*t30.*2.0;
    t42 = t9.*t25.*2.0;
    t43 = t9.*t15.*t20.*t30.*2.0;
    t44 = l_s_sym.*t9.*t25.*2.0;
    t45 = l_s_sym.*t9.*t15.*t20.*t30.*2.0;
    t46 = t10.*t25.*2.0;
    t47 = t10.*t15.*t20.*t30.*2.0;
    t48 = l_s_sym.*t31.*2.0;
    t49 = t9.*t31.*2.0;
    t50 = l_s_sym.*t9.*t31.*2.0;
    t51 = t10.*t31.*2.0;
    t52 = l_s_sym.*t15.*t25.*t30.*2.0;
    t53 = t9.*t15.*t25.*t30.*2.0;
    t54 = l_s_sym.*t9.*t15.*t25.*t30.*2.0;
    t55 = t10.*t15.*t25.*t30.*2.0;
    t56 = l_s_sym.*t15.*2.0;
    t57 = l_s_sym.*t20.*t25.*t30.*2.0;
    t58 = t9.*t15.*2.0;
    t59 = t9.*t20.*t25.*t30.*2.0;
    t60 = l_s_sym.*t9.*t15.*2.0;
    t61 = l_s_sym.*t9.*t20.*t25.*t30.*2.0;
    t62 = t10.*t15.*2.0;
    t63 = t10.*t20.*t25.*t30.*2.0;
    out2 = reshape([t9,0.0,0.0,0.0,0.0,0.0,l_s_sym.*t9,0.0,0.0,0.0,0.0,0.0,t10,0.0,0.0,0.0,0.0,0.0,l_s_sym.*t10,0.0,0.0,0.0,0.0,0.0,0.0,t9,0.0,0.0,0.0,0.0,0.0,l_s_sym.*t9,0.0,0.0,0.0,0.0,0.0,t10,0.0,0.0,0.0,0.0,0.0,l_s_sym.*t10,0.0,0.0,0.0,0.0,0.0,0.0,t9,0.0,0.0,0.0,0.0,0.0,l_s_sym.*t9,0.0,0.0,0.0,0.0,0.0,t10,0.0,0.0,0.0,0.0,0.0,l_s_sym.*t10,0.0,0.0,0.0,t36-l_f_sym.*l_s_sym.*t15.*t20.*t30,-t32+l_f_sym.*l_s_sym.*t26.*t30,l_f_sym.*l_s_sym.*t15.*-2.0,t48+l_s_sym.*t26.*t30.*2.0,-t40+t41,t52+l_s_sym.*t20.*2.0,t37-l_f_sym.*t9.*t15.*t20.*t30,-t33+l_f_sym.*t9.*t26.*t30,l_f_sym.*t9.*t15.*-2.0,t49+t9.*t26.*t30.*2.0,-t42+t43,t53+t9.*t20.*2.0,t38-l_f_sym.*l_s_sym.*t9.*t15.*t20.*t30,-t34+l_f_sym.*l_s_sym.*t9.*t26.*t30,l_f_sym.*l_s_sym.*t9.*t15.*-2.0,t50+l_s_sym.*t9.*t26.*t30.*2.0,-t44+t45,t54+l_s_sym.*t9.*t20.*2.0,t39-l_f_sym.*t10.*t15.*t20.*t30,-t35+l_f_sym.*t10.*t26.*t30,l_f_sym.*t10.*t15.*-2.0,t51+t10.*t26.*t30.*2.0,-t46+t47,t55+t10.*t20.*2.0,t32-l_f_sym.*l_s_sym.*t27.*t30,t36+l_f_sym.*l_s_sym.*t15.*t20.*t30,l_f_sym.*l_s_sym.*t20.*-2.0,t40+t41,t48+l_s_sym.*t27.*t30.*2.0,-t56+t57,t33-l_f_sym.*t9.*t27.*t30,t37+l_f_sym.*t9.*t15.*t20.*t30,l_f_sym.*t9.*t20.*-2.0,t42+t43,t49+t9.*t27.*t30.*2.0,-t58+t59,t34-l_f_sym.*l_s_sym.*t9.*t27.*t30,t38+l_f_sym.*l_s_sym.*t9.*t15.*t20.*t30,l_f_sym.*l_s_sym.*t9.*t20.*-2.0,t44+t45,t50+l_s_sym.*t9.*t27.*t30.*2.0,-t60+t61,t35-l_f_sym.*t10.*t27.*t30,t39+l_f_sym.*t10.*t15.*t20.*t30,l_f_sym.*t10.*t20.*-2.0,t46+t47,t51+t10.*t27.*t30.*2.0,-t62+t63,l_f_sym.*l_s_sym.*t15-l_f_sym.*l_s_sym.*t20.*t25.*t30,l_f_sym.*l_s_sym.*t20+l_f_sym.*l_s_sym.*t15.*t25.*t30,0.0,t52-l_s_sym.*t20.*2.0,t56+t57,t48+l_s_sym.*t28.*t30.*2.0,l_f_sym.*t9.*t15-l_f_sym.*t9.*t20.*t25.*t30,l_f_sym.*t9.*t20+l_f_sym.*t9.*t15.*t25.*t30,0.0,t53-t9.*t20.*2.0,t58+t59,t49+t9.*t28.*t30.*2.0,l_f_sym.*l_s_sym.*t9.*t15-l_f_sym.*l_s_sym.*t9.*t20.*t25.*t30,l_f_sym.*l_s_sym.*t9.*t20+l_f_sym.*l_s_sym.*t9.*t15.*t25.*t30,0.0,t54-l_s_sym.*t9.*t20.*2.0,t60+t61,t50+l_s_sym.*t9.*t28.*t30.*2.0,l_f_sym.*t10.*t15-l_f_sym.*t10.*t20.*t25.*t30,l_f_sym.*t10.*t20+l_f_sym.*t10.*t15.*t25.*t30,0.0,t55-t10.*t20.*2.0,t62+t63,t51+t10.*t28.*t30.*2.0],[6,24]);
end
if nargout > 2
    t64 = 1.0./t29.^(3.0./2.0);
    t65 = l_f_sym.*l_s_sym.*t9;
    t147 = l_f_sym.*l_s_sym.*t9.*t15.*t20.*t25.*t64;
    t66 = t65-t147;
    t67 = l_f_sym.*t10;
    t89 = l_f_sym.*t10.*t15.*t20.*t25.*t64;
    t68 = t67-t89;
    t69 = l_f_sym.*l_s_sym.*t10;
    t90 = l_f_sym.*l_s_sym.*t10.*t15.*t20.*t25.*t64;
    t70 = t69-t90;
    t71 = l_f_sym.*l_s_sym.*t9.*t15.*t30;
    t72 = l_f_sym.*l_s_sym.*t9.*t15.*t27.*t64;
    t73 = t71+t72;
    t74 = l_f_sym.*t10.*t15.*t30;
    t75 = l_f_sym.*t10.*t15.*t27.*t64;
    t76 = t74+t75;
    t77 = l_f_sym.*l_s_sym.*t10.*t15.*t30;
    t78 = l_f_sym.*l_s_sym.*t10.*t15.*t27.*t64;
    t79 = t77+t78;
    t80 = l_f_sym.*l_s_sym.*t9.*t20.*t30;
    t81 = l_f_sym.*l_s_sym.*t9.*t20.*t26.*t64;
    t82 = t80+t81;
    t83 = l_f_sym.*t10.*t20.*t30;
    t84 = l_f_sym.*t10.*t20.*t26.*t64;
    t85 = t83+t84;
    t86 = l_f_sym.*l_s_sym.*t10.*t20.*t30;
    t87 = l_f_sym.*l_s_sym.*t10.*t20.*t26.*t64;
    t88 = t86+t87;
    t91 = l_f_sym.*t9.*t10;
    t99 = l_f_sym.*t9.*t10.*t15.*t20.*t25.*t64;
    t92 = t91-t99;
    t93 = l_f_sym.*t9.*t10.*t15.*t30;
    t94 = l_f_sym.*t9.*t10.*t15.*t27.*t64;
    t95 = t93+t94;
    t96 = l_f_sym.*t9.*t10.*t20.*t30;
    t97 = l_f_sym.*t9.*t10.*t20.*t26.*t64;
    t98 = t96+t97;
    t100 = l_f_sym.*l_s_sym.*t9.*t10;
    t158 = l_f_sym.*l_s_sym.*t9.*t10.*t15.*t20.*t25.*t64;
    t101 = t100-t158;
    t102 = t10.^2;
    t103 = l_f_sym.*l_s_sym.*t9.*t10.*t15.*t30;
    t104 = l_f_sym.*l_s_sym.*t9.*t10.*t15.*t27.*t64;
    t105 = t103+t104;
    t106 = l_f_sym.*l_s_sym.*t9.*t10.*t20.*t30;
    t107 = l_f_sym.*l_s_sym.*t9.*t10.*t20.*t26.*t64;
    t108 = t106+t107;
    t109 = l_f_sym.*t9.*t15.*t30;
    t110 = l_f_sym.*t9.*t15.*t27.*t64;
    t111 = t109+t110;
    t112 = l_f_sym.*l_s_sym.*t9.*t20.*t30.*3.0;
    t113 = l_f_sym.*l_s_sym.*t9.*t20.*t27.*t64;
    t114 = t112+t113;
    t115 = l_f_sym.*t10.*t20.*t30.*3.0;
    t116 = l_f_sym.*t10.*t20.*t27.*t64;
    t117 = t115+t116;
    t118 = l_f_sym.*l_s_sym.*t10.*t20.*t30.*3.0;
    t119 = l_f_sym.*l_s_sym.*t10.*t20.*t27.*t64;
    t120 = t118+t119;
    t121 = l_f_sym.*l_s_sym.*t9.*t25.*t30;
    t122 = l_f_sym.*l_s_sym.*t9.*t25.*t27.*t64;
    t123 = t121+t122;
    t124 = l_f_sym.*t10.*t25.*t30;
    t125 = l_f_sym.*t10.*t25.*t27.*t64;
    t126 = t124+t125;
    t127 = l_f_sym.*l_s_sym.*t10.*t25.*t30;
    t128 = l_f_sym.*l_s_sym.*t10.*t25.*t27.*t64;
    t129 = t127+t128;
    t130 = l_f_sym.*t9.*t10.*t20.*t30.*3.0;
    t131 = l_f_sym.*t9.*t10.*t20.*t27.*t64;
    t132 = t130+t131;
    t133 = l_f_sym.*t9.*t10.*t25.*t30;
    t134 = l_f_sym.*t9.*t10.*t25.*t27.*t64;
    t135 = t133+t134;
    t136 = l_f_sym.*l_s_sym.*t9.*t10.*t20.*t30.*3.0;
    t137 = l_f_sym.*l_s_sym.*t9.*t10.*t20.*t27.*t64;
    t138 = t136+t137;
    t139 = l_f_sym.*t15.*t30.*t102;
    t140 = l_f_sym.*t15.*t27.*t64.*t102;
    t141 = t139+t140;
    t142 = l_f_sym.*l_s_sym.*t9.*t10.*t25.*t30;
    t143 = l_f_sym.*l_s_sym.*t9.*t10.*t25.*t27.*t64;
    t144 = t142+t143;
    t145 = l_f_sym.*t9;
    t198 = l_f_sym.*t9.*t15.*t20.*t25.*t64;
    t146 = t145-t198;
    t148 = l_f_sym.*t9.*t20.*t30;
    t149 = l_f_sym.*t9.*t25.*t30;
    t150 = l_f_sym.*t9.*t25.*t27.*t64;
    t151 = t149+t150;
    t152 = l_f_sym.*l_s_sym.*t9.*t20.*t28.*t64;
    t153 = t80+t152;
    t154 = l_f_sym.*t10.*t20.*t28.*t64;
    t155 = t83+t154;
    t156 = l_f_sym.*l_s_sym.*t10.*t20.*t28.*t64;
    t157 = t86+t156;
    t159 = l_f_sym.*t9.*t10.*t20.*t28.*t64;
    t160 = t96+t159;
    t161 = l_f_sym.*t102;
    t204 = l_f_sym.*t15.*t20.*t25.*t64.*t102;
    t162 = t161-t204;
    t163 = l_f_sym.*l_s_sym.*t9.*t10.*t20.*t28.*t64;
    t164 = t106+t163;
    t165 = l_f_sym.*t20.*t30.*t102;
    t166 = l_f_sym.*t25.*t30.*t102;
    t167 = l_f_sym.*t25.*t27.*t64.*t102;
    t168 = t166+t167;
    t169 = l_f_sym.*t9.*t20.*t26.*t64;
    t170 = t148+t169;
    t171 = l_f_sym.*l_s_sym.*t9.*t15.*t30.*3.0;
    t172 = l_f_sym.*l_s_sym.*t9.*t15.*t26.*t64;
    t173 = t171+t172;
    t174 = l_f_sym.*t10.*t15.*t30.*3.0;
    t175 = l_f_sym.*t10.*t15.*t26.*t64;
    t176 = t174+t175;
    t177 = l_f_sym.*l_s_sym.*t10.*t15.*t30.*3.0;
    t178 = l_f_sym.*l_s_sym.*t10.*t15.*t26.*t64;
    t179 = t177+t178;
    t180 = l_f_sym.*l_s_sym.*t9.*t25.*t26.*t64;
    t181 = t121+t180;
    t182 = l_f_sym.*t10.*t25.*t26.*t64;
    t183 = t124+t182;
    t184 = l_f_sym.*l_s_sym.*t10.*t25.*t26.*t64;
    t185 = t127+t184;
    t186 = l_f_sym.*t9.*t10.*t15.*t30.*3.0;
    t187 = l_f_sym.*t9.*t10.*t15.*t26.*t64;
    t188 = t186+t187;
    t189 = l_f_sym.*t9.*t10.*t25.*t26.*t64;
    t190 = t133+t189;
    t191 = l_f_sym.*l_s_sym.*t9.*t10.*t15.*t30.*3.0;
    t192 = l_f_sym.*l_s_sym.*t9.*t10.*t15.*t26.*t64;
    t193 = t191+t192;
    t194 = l_f_sym.*t20.*t26.*t64.*t102;
    t195 = t165+t194;
    t196 = l_f_sym.*l_s_sym.*t9.*t10.*t25.*t26.*t64;
    t197 = t142+t196;
    t199 = t65+t147;
    t200 = t67+t89;
    t201 = t69+t90;
    t202 = t91+t99;
    t203 = t100+t158;
    t205 = t145+t198;
    t206 = l_f_sym.*t9.*t25.*t26.*t64;
    t207 = t149+t206;
    t208 = l_f_sym.*l_s_sym.*t9.*t15.*t28.*t64;
    t209 = t71+t208;
    t210 = l_f_sym.*t10.*t15.*t28.*t64;
    t211 = t74+t210;
    t212 = l_f_sym.*l_s_sym.*t10.*t15.*t28.*t64;
    t213 = t77+t212;
    t214 = l_f_sym.*t9.*t10.*t15.*t28.*t64;
    t215 = t93+t214;
    t216 = t161+t204;
    t217 = l_f_sym.*l_s_sym.*t9.*t10.*t15.*t28.*t64;
    t218 = t103+t217;
    t219 = l_f_sym.*t25.*t26.*t64.*t102;
    t220 = t166+t219;
    t221 = l_s_sym.*t9.*t15.*t26.*t64.*2.0;
    t222 = l_s_sym.*t9.*t15.*t30.*2.0;
    t223 = t221+t222;
    t224 = t10.*t15.*t26.*t64.*2.0;
    t225 = t10.*t15.*t30.*2.0;
    t226 = t224+t225;
    t227 = l_s_sym.*t10.*t15.*t26.*t64.*2.0;
    t228 = l_s_sym.*t10.*t15.*t30.*2.0;
    t229 = t227+t228;
    t230 = l_s_sym.*t9.*t20.*t30.*2.0;
    t231 = l_s_sym.*t9.*t20.*t26.*t64.*2.0;
    t232 = t230+t231;
    t233 = t10.*t20.*t30.*2.0;
    t234 = t10.*t20.*t26.*t64.*2.0;
    t235 = t233+t234;
    t236 = l_s_sym.*t10.*t20.*t30.*2.0;
    t237 = l_s_sym.*t10.*t20.*t26.*t64.*2.0;
    t238 = t236+t237;
    t239 = l_s_sym.*t9.*t25.*t30.*2.0;
    t240 = l_s_sym.*t9.*t25.*t26.*t64.*2.0;
    t241 = t239+t240;
    t242 = t10.*t25.*t30.*2.0;
    t243 = t10.*t25.*t26.*t64.*2.0;
    t244 = t242+t243;
    t245 = l_s_sym.*t10.*t25.*t30.*2.0;
    t246 = l_s_sym.*t10.*t25.*t26.*t64.*2.0;
    t247 = t245+t246;
    t248 = t9.*t10.*t15.*t26.*t64.*2.0;
    t249 = t9.*t10.*t15.*t30.*2.0;
    t250 = t248+t249;
    t251 = t9.*t10.*t20.*t30.*2.0;
    t252 = t9.*t10.*t20.*t26.*t64.*2.0;
    t253 = t251+t252;
    t254 = t9.*t10.*t25.*t30.*2.0;
    t255 = t9.*t10.*t25.*t26.*t64.*2.0;
    t256 = t254+t255;
    t257 = l_s_sym.*t9.*t10.*t15.*t26.*t64.*2.0;
    t258 = l_s_sym.*t9.*t10.*t15.*t30.*2.0;
    t259 = t257+t258;
    t260 = l_s_sym.*t9.*t10.*t20.*t30.*2.0;
    t261 = l_s_sym.*t9.*t10.*t20.*t26.*t64.*2.0;
    t262 = t260+t261;
    t263 = l_s_sym.*t9.*t10.*t25.*t30.*2.0;
    t264 = l_s_sym.*t9.*t10.*t25.*t26.*t64.*2.0;
    t265 = t263+t264;
    t266 = t9.*t15.*t30.*2.0;
    t267 = t9.*t20.*t30.*2.0;
    t268 = t9.*t20.*t26.*t64.*2.0;
    t269 = l_s_sym.*t9.*2.0;
    t301 = l_s_sym.*t9.*t15.*t20.*t25.*t64.*2.0;
    t270 = t269-t301;
    t271 = t10.*2.0;
    t284 = t10.*t15.*t20.*t25.*t64.*2.0;
    t272 = t271-t284;
    t273 = l_s_sym.*t10.*2.0;
    t285 = l_s_sym.*t10.*t15.*t20.*t25.*t64.*2.0;
    t274 = t273-t285;
    t275 = l_s_sym.*t9.*t15.*t27.*t64.*2.0;
    t276 = t222+t275;
    t277 = t10.*t15.*t27.*t64.*2.0;
    t278 = t225+t277;
    t279 = l_s_sym.*t10.*t15.*t27.*t64.*2.0;
    t280 = t228+t279;
    t281 = t230-t231;
    t282 = t233-t234;
    t283 = t236-t237;
    t286 = t9.*t10.*2.0;
    t291 = t9.*t10.*t15.*t20.*t25.*t64.*2.0;
    t287 = t286-t291;
    t288 = t9.*t10.*t15.*t27.*t64.*2.0;
    t289 = t249+t288;
    t290 = t251-t252;
    t292 = l_s_sym.*t9.*t10.*2.0;
    t317 = l_s_sym.*t9.*t10.*t15.*t20.*t25.*t64.*2.0;
    t293 = t292-t317;
    t294 = l_s_sym.*t9.*t10.*t15.*t27.*t64.*2.0;
    t295 = t258+t294;
    t296 = t15.*t30.*t102.*2.0;
    t297 = t260-t261;
    t298 = t20.*t30.*t102.*2.0;
    t299 = t20.*t26.*t64.*t102.*2.0;
    t300 = t9.*2.0;
    t302 = t9.*t25.*t30.*2.0;
    t303 = t9.*t25.*t26.*t64.*2.0;
    t304 = t269+t301;
    t305 = t271+t284;
    t306 = t273+t285;
    t307 = l_s_sym.*t9.*t15.*t28.*t64.*2.0;
    t308 = t222+t307;
    t309 = t10.*t15.*t28.*t64.*2.0;
    t310 = t225+t309;
    t311 = l_s_sym.*t10.*t15.*t28.*t64.*2.0;
    t312 = t228+t311;
    t313 = t239-t240;
    t314 = t242-t243;
    t315 = t245-t246;
    t316 = t286+t291;
    t318 = t9.*t10.*t15.*t28.*t64.*2.0;
    t319 = t249+t318;
    t320 = t254-t255;
    t321 = t292+t317;
    t322 = t102.*2.0;
    t323 = l_s_sym.*t9.*t10.*t15.*t28.*t64.*2.0;
    t324 = t258+t323;
    t325 = t263-t264;
    t326 = t25.*t30.*t102.*2.0;
    t327 = t25.*t26.*t64.*t102.*2.0;
    t328 = t9.*t15.*t20.*t25.*t64.*2.0;
    t329 = t300+t328;
    t330 = t9.*t15.*t27.*t64.*2.0;
    t331 = t267+t268;
    t332 = t222-t275;
    t333 = t225-t277;
    t334 = t228-t279;
    t335 = t249-t288;
    t336 = t15.*t20.*t25.*t64.*t102.*2.0;
    t337 = t322+t336;
    t338 = t258-t294;
    t339 = t15.*t27.*t64.*t102.*2.0;
    t340 = t298+t299;
    t341 = t266+t330;
    t342 = l_s_sym.*t9.*t20.*t27.*t64.*2.0;
    t343 = t230+t342;
    t344 = t10.*t20.*t27.*t64.*2.0;
    t345 = t233+t344;
    t346 = l_s_sym.*t10.*t20.*t27.*t64.*2.0;
    t347 = t236+t346;
    t348 = l_s_sym.*t9.*t25.*t27.*t64.*2.0;
    t349 = t239+t348;
    t350 = t10.*t25.*t27.*t64.*2.0;
    t351 = t242+t350;
    t352 = l_s_sym.*t10.*t25.*t27.*t64.*2.0;
    t353 = t245+t352;
    t354 = t9.*t10.*t20.*t27.*t64.*2.0;
    t355 = t251+t354;
    t356 = t9.*t10.*t25.*t27.*t64.*2.0;
    t357 = t254+t356;
    t358 = l_s_sym.*t9.*t10.*t20.*t27.*t64.*2.0;
    t359 = t260+t358;
    t360 = t296+t339;
    t361 = l_s_sym.*t9.*t10.*t25.*t27.*t64.*2.0;
    t362 = t263+t361;
    t363 = t9.*t25.*t27.*t64.*2.0;
    t364 = l_s_sym.*t9.*t20.*t28.*t64.*2.0;
    t365 = t230+t364;
    t366 = t10.*t20.*t28.*t64.*2.0;
    t367 = t233+t366;
    t368 = l_s_sym.*t10.*t20.*t28.*t64.*2.0;
    t369 = t236+t368;
    t370 = t239-t348;
    t371 = t242-t350;
    t372 = t245-t352;
    t373 = t9.*t10.*t20.*t28.*t64.*2.0;
    t374 = t251+t373;
    t375 = t254-t356;
    t376 = l_s_sym.*t9.*t10.*t20.*t28.*t64.*2.0;
    t377 = t260+t376;
    t378 = t263-t361;
    t379 = t25.*t27.*t64.*t102.*2.0;
    t380 = t300-t328;
    t381 = t9.*t15.*t28.*t64.*2.0;
    t382 = t302+t303;
    t383 = t222-t307;
    t384 = t225-t309;
    t385 = t228-t311;
    t386 = t249-t318;
    t387 = t322-t336;
    t388 = t258-t323;
    t389 = t15.*t28.*t64.*t102.*2.0;
    t390 = t326+t327;
    t391 = t9.*t20.*t28.*t64.*2.0;
    t392 = t302+t363;
    t393 = t230-t364;
    t394 = t233-t366;
    t395 = t236-t368;
    t396 = t251-t373;
    t397 = t260-t376;
    t398 = t20.*t28.*t64.*t102.*2.0;
    t399 = t326+t379;
    t400 = t266+t381;
    t401 = t267+t391;
    t402 = l_s_sym.*t9.*t25.*t28.*t64.*2.0;
    t403 = t239+t402;
    t404 = t10.*t25.*t28.*t64.*2.0;
    t405 = t242+t404;
    t406 = l_s_sym.*t10.*t25.*t28.*t64.*2.0;
    t407 = t245+t406;
    t408 = t9.*t10.*t25.*t28.*t64.*2.0;
    t409 = t254+t408;
    t410 = l_s_sym.*t9.*t10.*t25.*t28.*t64.*2.0;
    t411 = t263+t410;
    t412 = t296+t389;
    t413 = t298+t398;
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t66.*u22+t68.*u23-t73.*u18+t70.*u24-t76.*u19-t82.*u14-t79.*u20-t85.*u15-t88.*u16-t111.*u17+t146.*u21-t170.*u13,t82.*u18+t85.*u19+t88.*u20+t170.*u17+t173.*u14+t176.*u15+t179.*u16+t181.*u22+t183.*u23+t185.*u24+t207.*u21+u13.*(l_f_sym.*t9.*t15.*t30.*3.0+l_f_sym.*t9.*t15.*t26.*t64),l_f_sym.*t9.*u13.*-2.0-l_f_sym.*t10.*u15.*2.0-l_f_sym.*l_s_sym.*t9.*u14.*2.0-l_f_sym.*l_s_sym.*t10.*u16.*2.0,t223.*u14+t226.*u15+t229.*u16+t232.*u18+t235.*u19+t238.*u20+t241.*u22+t244.*u23+t247.*u24+t331.*u17+t382.*u21+u13.*(t266+t9.*t15.*t26.*t64.*2.0),t232.*u14+t235.*u15+t238.*u16+t304.*u22+t305.*u23+t306.*u24+t331.*u13+t329.*u21-t332.*u18-t333.*u19-t334.*u20-u17.*(t266-t330),t241.*u14+t244.*u15+t247.*u16-t270.*u18-t272.*u19-t274.*u20+t382.*u13-t380.*u17-t383.*u22-t384.*u23-t385.*u24-u21.*(t266-t381),t66.*u21+t68.*u22-t73.*u17+t70.*u23-t76.*u18-t82.*u13-t79.*u19-t85.*u14-t88.*u15-t98.*u16-t95.*u20+t92.*u24,t82.*u17+t85.*u18+t88.*u19+t98.*u20+t173.*u13+t176.*u14+t179.*u15+t181.*u21+t188.*u16+t183.*u22+t185.*u23+t190.*u24,l_f_sym.*t10.*u14.*-2.0-l_f_sym.*l_s_sym.*t9.*u13.*2.0-l_f_sym.*l_s_sym.*t10.*u15.*2.0-l_f_sym.*t9.*t10.*u16.*2.0,t223.*u13+t226.*u14+t229.*u15+t232.*u17+t235.*u18+t238.*u19+t241.*u21+t244.*u22+t250.*u16+t247.*u23+t253.*u20+t256.*u24,t232.*u13+t235.*u14+t238.*u15+t253.*u16+t304.*u21+t305.*u22+t306.*u23+t316.*u24-t332.*u17-t333.*u18-t334.*u19-t335.*u20,t241.*u13+t244.*u14+t247.*u15+t256.*u16-t270.*u17-t272.*u18-t274.*u19-t287.*u20-t383.*u21-t384.*u22-t385.*u23-t386.*u24,t68.*u21+t70.*u22-t76.*u17-t79.*u18-t85.*u13-t88.*u14-t98.*u15-t95.*u19+t92.*u23-t108.*u16+t101.*u24-t105.*u20,t85.*u17+t88.*u18+t98.*u19+t108.*u20+t176.*u13+t179.*u14+t188.*u15+t183.*u21+t185.*u22+t193.*u16+t190.*u23+t197.*u24,l_f_sym.*t10.*u13.*-2.0-l_f_sym.*l_s_sym.*t10.*u14.*2.0-l_f_sym.*t9.*t10.*u15.*2.0-l_f_sym.*l_s_sym.*t9.*t10.*u16.*2.0,t226.*u13+t229.*u14+t235.*u17+t238.*u18+t244.*u21+t250.*u15+t247.*u22+t253.*u19+t259.*u16+t256.*u23+t262.*u20+t265.*u24,t235.*u13+t238.*u14+t253.*u15+t262.*u16+t305.*u21+t306.*u22+t316.*u23+t321.*u24-t333.*u17-t334.*u18-t335.*u19-t338.*u20,t244.*u13+t247.*u14+t256.*u15+t265.*u16-t272.*u17-t274.*u18-t287.*u19-t293.*u20-t384.*u21-t385.*u22-t386.*u23-t388.*u24,t70.*u21-t79.*u17-t88.*u13-t98.*u14-t95.*u18+t92.*u22-t108.*u15+t101.*u23-t105.*u19-t141.*u20+t162.*u24-t195.*u16,t88.*u17+t98.*u18+t108.*u19+t179.*u13+t188.*u14+t185.*u21+t193.*u15+t190.*u22+t195.*u20+t197.*u23+t220.*u24+u16.*(l_f_sym.*t15.*t30.*t102.*3.0+l_f_sym.*t15.*t26.*t64.*t102),l_f_sym.*t102.*u16.*-2.0-l_f_sym.*l_s_sym.*t10.*u13.*2.0-l_f_sym.*t9.*t10.*u14.*2.0-l_f_sym.*l_s_sym.*t9.*t10.*u15.*2.0,t229.*u13+t238.*u17+t250.*u14+t247.*u21+t253.*u18+t259.*u15+t256.*u22+t262.*u19+t265.*u23+t340.*u20+t390.*u24+u16.*(t296+t15.*t26.*t64.*t102.*2.0),t238.*u13+t253.*u14+t262.*u15+t306.*u21+t316.*u22+t321.*u23-t334.*u17-t335.*u18+t340.*u16-t338.*u19+t337.*u24-u20.*(t296-t339),t247.*u13+t256.*u14+t265.*u15-t274.*u17-t287.*u18-t293.*u19-t385.*u21+t390.*u16-t387.*u20-t386.*u22-t388.*u23-u24.*(t296-t389),-t73.*u14-t76.*u15-t79.*u16-t111.*u13-t114.*u18-t117.*u19-t120.*u20-t123.*u22-t126.*u23-t129.*u24-t151.*u21-u17.*(l_f_sym.*t9.*t20.*t30.*3.0+l_f_sym.*t9.*t20.*t27.*t64),t73.*u18+t76.*u19+t82.*u14+t79.*u20+t85.*u15+t88.*u16+t111.*u17+t170.*u13+t199.*u22+t200.*u23+t201.*u24+t205.*u21,l_f_sym.*t9.*u17.*-2.0-l_f_sym.*t10.*u19.*2.0-l_f_sym.*l_s_sym.*t9.*u18.*2.0-l_f_sym.*l_s_sym.*t10.*u20.*2.0,-t270.*u22+t276.*u18-t272.*u23-t281.*u14+t278.*u19-t282.*u15-t274.*u24-t283.*u16+t280.*u20+t341.*u17-u21.*(t300-t9.*t15.*t20.*t25.*t64.*2.0)-u13.*(t267-t268),t276.*u14+t278.*u15+t280.*u16+t341.*u13+t343.*u18+t345.*u19+t347.*u20+t349.*u22+t351.*u23+t353.*u24+t392.*u21+u17.*(t267+t9.*t20.*t27.*t64.*2.0),t304.*u14+t305.*u15+t306.*u16+t329.*u13+t349.*u18+t351.*u19+t353.*u20+t392.*u17-t393.*u22-t394.*u23-t395.*u24-u21.*(t267-t391),-t73.*u13-t76.*u14-t79.*u15-t95.*u16-t114.*u17-t117.*u18-t120.*u19-t123.*u21-t126.*u22-t129.*u23-t132.*u20-t135.*u24,t73.*u17+t76.*u18+t82.*u13+t79.*u19+t85.*u14+t88.*u15+t98.*u16+t95.*u20+t199.*u21+t200.*u22+t201.*u23+t202.*u24,l_f_sym.*t10.*u18.*-2.0-l_f_sym.*l_s_sym.*t9.*u17.*2.0-l_f_sym.*l_s_sym.*t10.*u19.*2.0-l_f_sym.*t9.*t10.*u20.*2.0,-t270.*u21+t276.*u17-t272.*u22-t281.*u13+t278.*u18-t282.*u14-t274.*u23-t283.*u15+t280.*u19-t290.*u16+t289.*u20-t287.*u24,t276.*u13+t278.*u14+t280.*u15+t289.*u16+t343.*u17+t345.*u18+t347.*u19+t349.*u21+t351.*u22+t355.*u20+t353.*u23+t357.*u24,t304.*u13+t305.*u14+t306.*u15+t316.*u16+t349.*u17+t351.*u18+t353.*u19+t357.*u20-t393.*u21-t394.*u22-t395.*u23-t396.*u24,-t76.*u13-t79.*u14-t95.*u15-t105.*u16-t117.*u17-t120.*u18-t126.*u21-t129.*u22-t132.*u19-t135.*u23-t138.*u20-t144.*u24,t76.*u17+t79.*u18+t85.*u13+t88.*u14+t98.*u15+t95.*u19+t108.*u16+t105.*u20+t200.*u21+t201.*u22+t202.*u23+t203.*u24,l_f_sym.*t10.*u17.*-2.0-l_f_sym.*l_s_sym.*t10.*u18.*2.0-l_f_sym.*t9.*t10.*u19.*2.0-l_f_sym.*l_s_sym.*t9.*t10.*u20.*2.0,-t272.*u21+t278.*u17-t282.*u13-t274.*u22-t283.*u14+t280.*u18-t290.*u15+t289.*u19-t287.*u23-t297.*u16+t295.*u20-t293.*u24,t278.*u13+t280.*u14+t289.*u15+t295.*u16+t345.*u17+t347.*u18+t351.*u21+t355.*u19+t353.*u22+t359.*u20+t357.*u23+t362.*u24,t305.*u13+t306.*u14+t316.*u15+t321.*u16+t351.*u17+t353.*u18+t357.*u19+t362.*u20-t394.*u21-t395.*u22-t396.*u23-t397.*u24,-t79.*u13-t95.*u14-t105.*u15-t120.*u17-t129.*u21-t132.*u18-t135.*u22-t138.*u19-t141.*u16-t144.*u23-t168.*u24-u20.*(l_f_sym.*t20.*t30.*t102.*3.0+l_f_sym.*t20.*t27.*t64.*t102),t79.*u17+t88.*u13+t98.*u14+t95.*u18+t108.*u15+t105.*u19+t141.*u20+t195.*u16+t201.*u21+t202.*u22+t203.*u23+t216.*u24,l_f_sym.*t102.*u20.*-2.0-l_f_sym.*l_s_sym.*t10.*u17.*2.0-l_f_sym.*t9.*t10.*u18.*2.0-l_f_sym.*l_s_sym.*t9.*t10.*u19.*2.0,-t274.*u21-t283.*u13+t280.*u17-t290.*u14+t289.*u18-t287.*u22-t297.*u15+t295.*u19-t293.*u23+t360.*u20-u24.*(t322-t15.*t20.*t25.*t64.*t102.*2.0)-u16.*(t298-t299),t280.*u13+t289.*u14+t295.*u15+t347.*u17+t355.*u18+t353.*u21+t360.*u16+t359.*u19+t357.*u22+t362.*u23+t399.*u24+u20.*(t298+t20.*t27.*t64.*t102.*2.0),t306.*u13+t316.*u14+t321.*u15+t337.*u16+t353.*u17+t357.*u18+t362.*u19-t395.*u21-t396.*u22+t399.*u20-t397.*u23-u24.*(t298-t398),-u21.*(t148+l_f_sym.*t9.*t20.*t28.*t64)+t66.*u14+t68.*u15+t70.*u16-t123.*u18-t126.*u19-t129.*u20+t146.*u13-t151.*u17-t153.*u22-t155.*u23-t157.*u24,u21.*(t109+l_f_sym.*t9.*t15.*t28.*t64)+t181.*u14+t183.*u15+t185.*u16+t199.*u18+t200.*u19+t207.*u13+t201.*u20+t205.*u17+t209.*u22+t211.*u23+t213.*u24,0.0,t304.*u18+t305.*u19+t306.*u20-t313.*u14-t314.*u15+t308.*u22-t315.*u16+t310.*u23+t312.*u24+t329.*u17+t400.*u21-u13.*(t302-t303),-t270.*u14-t272.*u15-t274.*u16+t365.*u22-t370.*u18+t367.*u23-t371.*u19-t372.*u20+t369.*u24-t380.*u13+t401.*u21-u17.*(t302-t363),t308.*u14+t310.*u15+t312.*u16+t365.*u18+t367.*u19+t369.*u20+t400.*u13+t401.*u17+t403.*u22+t405.*u23+t407.*u24+u21.*(t302+t9.*t25.*t28.*t64.*2.0),t66.*u13+t68.*u14+t70.*u15+t92.*u16-t123.*u17-t126.*u18-t129.*u19-t135.*u20-t153.*u21-t155.*u22-t157.*u23-t160.*u24,t181.*u13+t183.*u14+t185.*u15+t190.*u16+t199.*u17+t200.*u18+t201.*u19+t202.*u20+t209.*u21+t211.*u22+t213.*u23+t215.*u24,0.0,t304.*u17+t305.*u18+t306.*u19-t313.*u13-t314.*u14+t308.*u21-t315.*u15+t310.*u22+t312.*u23+t316.*u20-t320.*u16+t319.*u24,-t270.*u13-t272.*u14-t274.*u15-t287.*u16+t365.*u21-t370.*u17+t367.*u22-t371.*u18-t372.*u19+t369.*u23-t375.*u20+t374.*u24,t308.*u13+t310.*u14+t312.*u15+t319.*u16+t365.*u17+t367.*u18+t369.*u19+t374.*u20+t403.*u21+t405.*u22+t407.*u23+t409.*u24,t68.*u13+t70.*u14+t92.*u15+t101.*u16-t126.*u17-t129.*u18-t135.*u19-t144.*u20-t155.*u21-t157.*u22-t160.*u23-t164.*u24,t183.*u13+t185.*u14+t190.*u15+t197.*u16+t200.*u17+t201.*u18+t202.*u19+t203.*u20+t211.*u21+t213.*u22+t215.*u23+t218.*u24,0.0,t305.*u17+t306.*u18-t314.*u13-t315.*u14+t310.*u21+t312.*u22+t316.*u19-t320.*u15+t321.*u20-t325.*u16+t319.*u23+t324.*u24,-t272.*u13-t274.*u14-t287.*u15-t293.*u16+t367.*u21-t371.*u17-t372.*u18+t369.*u22-t375.*u19+t374.*u23-t378.*u20+t377.*u24,t310.*u13+t312.*u14+t319.*u15+t324.*u16+t367.*u17+t369.*u18+t374.*u19+t377.*u20+t405.*u21+t407.*u22+t409.*u23+t411.*u24,-u24.*(t165+l_f_sym.*t20.*t28.*t64.*t102)+t70.*u13+t92.*u14+t101.*u15-t129.*u17-t135.*u18-t144.*u19-t157.*u21+t162.*u16-t160.*u22-t164.*u23-t168.*u20,u24.*(t139+l_f_sym.*t15.*t28.*t64.*t102)+t185.*u13+t190.*u14+t197.*u15+t201.*u17+t202.*u18+t203.*u19+t213.*u21+t216.*u20+t220.*u16+t215.*u22+t218.*u23,0.0,t306.*u17-t315.*u13+t312.*u21+t316.*u18-t320.*u14+t321.*u19-t325.*u15+t319.*u22+t324.*u23+t337.*u20+t412.*u24-u16.*(t326-t327),-t274.*u13-t287.*u14-t293.*u15-t372.*u17+t369.*u21-t375.*u18+t374.*u22-t378.*u19+t377.*u23-t387.*u16+t413.*u24-u20.*(t326-t379),t312.*u13+t319.*u14+t324.*u15+t369.*u17+t374.*u18+t377.*u19+t407.*u21+t412.*u16+t409.*u22+t413.*u20+t411.*u23+u24.*(t326+t25.*t28.*t64.*t102.*2.0)],[6,24]);
end
if nargout > 3
    out4 = [g_xsym;g_ysym;g_zsym;0.0;0.0;0.0];
end
