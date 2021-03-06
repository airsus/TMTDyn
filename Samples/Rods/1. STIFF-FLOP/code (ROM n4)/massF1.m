function [out1,out2,out3,out4] = massF1(in1,in2,s)
%MASSF1
%    [OUT1,OUT2,OUT3,OUT4] = MASSF1(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    05-Jan-2019 01:25:15

g_xsym = in1(:,13);
g_ysym = in1(:,14);
g_zsym = in1(:,15);
gamma_sym = in1(:,21);
lambda_sym = in1(:,34);
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
r_o_sym = in1(:,20);
r_p1_sym = in1(:,19);
r_s1_sym = in1(:,3);
r_s2_sym = in1(:,4);
sigma_s_sym = in1(:,1);
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
t2 = r_p1_sym.^2;
t3 = t2.*6.0;
t4 = r_s1_sym.^2;
t5 = r_s2_sym.^2;
t6 = t3+t4-t5;
t7 = sin(gamma_sym);
t8 = 1.0./t7.^2;
t9 = cos(gamma_sym);
t10 = lambda_sym.^2;
t11 = t9.^2;
t12 = t10.*t11;
t13 = t12-1.0;
t14 = t4-t5;
t15 = t4./4.0;
t16 = t5./4.0;
t17 = t15-t16;
t18 = sigma_s_sym.*t14.*t17.*pi;
t19 = 1.0./lambda_sym;
t20 = r_o_sym.^2;
t21 = t2.*t8.*t13.*(3.0./2.0);
out1 = reshape([-sigma_s_sym.*t6.*pi,0.0,0.0,0.0,0.0,0.0,0.0,-sigma_s_sym.*t6.*pi,0.0,0.0,0.0,0.0,0.0,0.0,-sigma_s_sym.*t6.*pi,0.0,0.0,0.0,0.0,0.0,0.0,t18-sigma_s_sym.*t2.*t8.*t13.*pi.*(t21+t19.*t20.*3.0),0.0,0.0,0.0,0.0,0.0,0.0,t18-sigma_s_sym.*t2.*t8.*t13.*pi.*(t21+t19.*t20.*3.0),0.0,0.0,0.0,0.0,0.0,0.0,sigma_s_sym.*t14.*pi.*(t4./2.0-t5./2.0)-sigma_s_sym.*t2.^2.*1.0./t7.^4.*t13.^2.*pi.*3.0],[6,6]);
if nargout > 1
    t22 = s.^2;
    t23 = t22.^2;
    t27 = q13.*s;
    t28 = q14.*t22;
    t29 = q15.*s.*t22;
    t30 = q16.*t23;
    t24 = t27+t28+t29+t30;
    t32 = q17.*s;
    t33 = q18.*t22;
    t34 = q19.*s.*t22;
    t35 = q20.*t23;
    t25 = t32+t33+t34+t35;
    t37 = q21.*s;
    t38 = q22.*t22;
    t39 = q23.*s.*t22;
    t40 = q24.*t23;
    t26 = t37+t38+t39+t40;
    t31 = t24.^2;
    t36 = t25.^2;
    t41 = t26.^2;
    t42 = -t31-t36-t41+1.0;
    t43 = sqrt(t42);
    t44 = 1.0./sqrt(t42);
    t45 = s.*t26.*2.0;
    t46 = s.*t24.*t25.*t44.*2.0;
    t47 = t22.*t26.*2.0;
    t48 = t22.*t24.*t25.*t44.*2.0;
    t49 = s.*t22.*t26.*2.0;
    t50 = s.*t22.*t24.*t25.*t44.*2.0;
    t51 = t23.*t26.*2.0;
    t52 = t23.*t24.*t25.*t44.*2.0;
    t53 = s.*t43.*2.0;
    t54 = t22.*t43.*2.0;
    t55 = s.*t22.*t43.*2.0;
    t56 = t23.*t43.*2.0;
    t57 = s.*t24.*t26.*t44.*2.0;
    t58 = t22.*t24.*t26.*t44.*2.0;
    t59 = s.*t22.*t24.*t26.*t44.*2.0;
    t60 = t23.*t24.*t26.*t44.*2.0;
    t61 = s.*t24.*2.0;
    t62 = s.*t25.*t26.*t44.*2.0;
    t63 = t22.*t24.*2.0;
    t64 = t22.*t25.*t26.*t44.*2.0;
    t65 = s.*t22.*t24.*2.0;
    t66 = s.*t22.*t25.*t26.*t44.*2.0;
    t67 = t23.*t24.*2.0;
    t68 = t23.*t25.*t26.*t44.*2.0;
    out2 = reshape([t22,0.0,0.0,0.0,0.0,0.0,s.*t22,0.0,0.0,0.0,0.0,0.0,t23,0.0,0.0,0.0,0.0,0.0,s.*t23,0.0,0.0,0.0,0.0,0.0,0.0,t22,0.0,0.0,0.0,0.0,0.0,s.*t22,0.0,0.0,0.0,0.0,0.0,t23,0.0,0.0,0.0,0.0,0.0,s.*t23,0.0,0.0,0.0,0.0,0.0,0.0,t22,0.0,0.0,0.0,0.0,0.0,s.*t22,0.0,0.0,0.0,0.0,0.0,t23,0.0,0.0,0.0,0.0,0.0,s.*t23,0.0,0.0,0.0,0.0,0.0,0.0,t53+s.*t31.*t44.*2.0,-t45+t46,t57+s.*t25.*2.0,0.0,0.0,0.0,t54+t22.*t31.*t44.*2.0,-t47+t48,t58+t22.*t25.*2.0,0.0,0.0,0.0,t55+s.*t22.*t31.*t44.*2.0,-t49+t50,t59+s.*t22.*t25.*2.0,0.0,0.0,0.0,t56+t23.*t31.*t44.*2.0,-t51+t52,t60+t23.*t25.*2.0,0.0,0.0,0.0,t45+t46,t53+s.*t36.*t44.*2.0,-t61+t62,0.0,0.0,0.0,t47+t48,t54+t22.*t36.*t44.*2.0,-t63+t64,0.0,0.0,0.0,t49+t50,t55+s.*t22.*t36.*t44.*2.0,-t65+t66,0.0,0.0,0.0,t51+t52,t56+t23.*t36.*t44.*2.0,-t67+t68,0.0,0.0,0.0,t57-s.*t25.*2.0,t61+t62,t53+s.*t41.*t44.*2.0,0.0,0.0,0.0,t58-t22.*t25.*2.0,t63+t64,t54+t22.*t41.*t44.*2.0,0.0,0.0,0.0,t59-s.*t22.*t25.*2.0,t65+t66,t55+s.*t22.*t41.*t44.*2.0,0.0,0.0,0.0,t60-t23.*t25.*2.0,t67+t68,t56+t23.*t41.*t44.*2.0],[6,24]);
end
if nargout > 2
    t69 = 1.0./t42.^(3.0./2.0);
    t70 = s.*t22.*t24.*t44.*2.0;
    t71 = s.*t22.*t24.*t31.*t69.*2.0;
    t72 = t70+t71;
    t73 = t23.*t24.*t44.*2.0;
    t74 = t23.*t24.*t31.*t69.*2.0;
    t75 = t73+t74;
    t76 = s.*t23.*t24.*t44.*2.0;
    t77 = s.*t23.*t24.*t31.*t69.*2.0;
    t78 = t76+t77;
    t79 = s.*t22.*t25.*t44.*2.0;
    t80 = s.*t22.*t25.*t31.*t69.*2.0;
    t81 = t79+t80;
    t82 = t23.*t25.*t44.*2.0;
    t83 = t23.*t25.*t31.*t69.*2.0;
    t84 = t82+t83;
    t85 = s.*t23.*t25.*t44.*2.0;
    t86 = s.*t23.*t25.*t31.*t69.*2.0;
    t87 = t85+t86;
    t88 = s.*t22.*t26.*t44.*2.0;
    t89 = s.*t22.*t26.*t31.*t69.*2.0;
    t90 = t88+t89;
    t91 = t23.*t26.*t44.*2.0;
    t92 = t23.*t26.*t31.*t69.*2.0;
    t93 = t91+t92;
    t94 = s.*t23.*t26.*t44.*2.0;
    t95 = s.*t23.*t26.*t31.*t69.*2.0;
    t96 = t94+t95;
    t97 = t22.*t23.*t24.*t44.*2.0;
    t98 = t22.*t23.*t24.*t31.*t69.*2.0;
    t99 = t97+t98;
    t100 = t22.*t23.*t25.*t44.*2.0;
    t101 = t22.*t23.*t25.*t31.*t69.*2.0;
    t102 = t100+t101;
    t103 = t22.*t23.*t26.*t44.*2.0;
    t104 = t22.*t23.*t26.*t31.*t69.*2.0;
    t105 = t103+t104;
    t106 = s.*t22.*t23.*t24.*t44.*2.0;
    t107 = s.*t22.*t23.*t24.*t31.*t69.*2.0;
    t108 = t106+t107;
    t109 = t23.^2;
    t110 = s.*t22.*t23.*t25.*t44.*2.0;
    t111 = s.*t22.*t23.*t25.*t31.*t69.*2.0;
    t112 = t110+t111;
    t113 = s.*t22.*t23.*t26.*t44.*2.0;
    t114 = s.*t22.*t23.*t26.*t31.*t69.*2.0;
    t115 = t113+t114;
    t116 = t22.*t24.*t44.*2.0;
    t117 = t22.*t25.*t44.*2.0;
    t118 = t22.*t25.*t31.*t69.*2.0;
    t119 = s.*t22.*t24.*t36.*t69.*2.0;
    t120 = t70+t119;
    t121 = t23.*t24.*t36.*t69.*2.0;
    t122 = t73+t121;
    t123 = s.*t23.*t24.*t36.*t69.*2.0;
    t124 = t76+t123;
    t125 = t79-t80;
    t126 = t82-t83;
    t127 = t85-t86;
    t128 = s.*t22.*2.0;
    t153 = s.*t22.*t24.*t25.*t26.*t69.*2.0;
    t129 = t128-t153;
    t130 = t23.*2.0;
    t137 = t23.*t24.*t25.*t26.*t69.*2.0;
    t131 = t130-t137;
    t132 = s.*t23.*2.0;
    t138 = s.*t23.*t24.*t25.*t26.*t69.*2.0;
    t133 = t132-t138;
    t134 = t22.*t23.*t24.*t36.*t69.*2.0;
    t135 = t97+t134;
    t136 = t100-t101;
    t139 = t22.*t23.*2.0;
    t147 = t22.*t23.*t24.*t25.*t26.*t69.*2.0;
    t140 = t139-t147;
    t141 = s.*t22.*t23.*t24.*t36.*t69.*2.0;
    t142 = t106+t141;
    t143 = t24.*t44.*t109.*2.0;
    t144 = t110-t111;
    t145 = t25.*t44.*t109.*2.0;
    t146 = t25.*t31.*t69.*t109.*2.0;
    t148 = s.*t22.*t23.*2.0;
    t170 = s.*t22.*t23.*t24.*t25.*t26.*t69.*2.0;
    t149 = t148-t170;
    t150 = t22.*t26.*t44.*2.0;
    t151 = t22.*t26.*t31.*t69.*2.0;
    t152 = t22.*2.0;
    t154 = s.*t22.*t24.*t41.*t69.*2.0;
    t155 = t70+t154;
    t156 = t23.*t24.*t41.*t69.*2.0;
    t157 = t73+t156;
    t158 = s.*t23.*t24.*t41.*t69.*2.0;
    t159 = t76+t158;
    t160 = t88-t89;
    t161 = t91-t92;
    t162 = t94-t95;
    t163 = t128+t153;
    t164 = t130+t137;
    t165 = t132+t138;
    t166 = t22.*t23.*t24.*t41.*t69.*2.0;
    t167 = t97+t166;
    t168 = t103-t104;
    t169 = t139+t147;
    t171 = s.*t22.*t23.*t24.*t41.*t69.*2.0;
    t172 = t106+t171;
    t173 = t113-t114;
    t174 = t26.*t44.*t109.*2.0;
    t175 = t26.*t31.*t69.*t109.*2.0;
    t176 = t148+t170;
    t177 = t109.*2.0;
    t178 = t22.*t24.*t36.*t69.*2.0;
    t179 = t117+t118;
    t180 = t22.*t24.*t25.*t26.*t69.*2.0;
    t181 = t152+t180;
    t182 = t70-t119;
    t183 = t73-t121;
    t184 = t76-t123;
    t185 = t97-t134;
    t186 = t106-t141;
    t187 = t24.*t36.*t69.*t109.*2.0;
    t188 = t145+t146;
    t189 = t24.*t25.*t26.*t69.*t109.*2.0;
    t190 = t177+t189;
    t191 = t116+t178;
    t192 = s.*t22.*t25.*t36.*t69.*2.0;
    t193 = t79+t192;
    t194 = t23.*t25.*t36.*t69.*2.0;
    t195 = t82+t194;
    t196 = s.*t23.*t25.*t36.*t69.*2.0;
    t197 = t85+t196;
    t198 = s.*t22.*t26.*t36.*t69.*2.0;
    t199 = t88+t198;
    t200 = t23.*t26.*t36.*t69.*2.0;
    t201 = t91+t200;
    t202 = s.*t23.*t26.*t36.*t69.*2.0;
    t203 = t94+t202;
    t204 = t22.*t23.*t25.*t36.*t69.*2.0;
    t205 = t100+t204;
    t206 = t22.*t23.*t26.*t36.*t69.*2.0;
    t207 = t103+t206;
    t208 = s.*t22.*t23.*t25.*t36.*t69.*2.0;
    t209 = t110+t208;
    t210 = t143+t187;
    t211 = s.*t22.*t23.*t26.*t36.*t69.*2.0;
    t212 = t113+t211;
    t213 = t22.*t26.*t36.*t69.*2.0;
    t214 = s.*t22.*t25.*t41.*t69.*2.0;
    t215 = t79+t214;
    t216 = t23.*t25.*t41.*t69.*2.0;
    t217 = t82+t216;
    t218 = s.*t23.*t25.*t41.*t69.*2.0;
    t219 = t85+t218;
    t220 = t88-t198;
    t221 = t91-t200;
    t222 = t94-t202;
    t223 = t22.*t23.*t25.*t41.*t69.*2.0;
    t224 = t100+t223;
    t225 = t103-t206;
    t226 = s.*t22.*t23.*t25.*t41.*t69.*2.0;
    t227 = t110+t226;
    t228 = t113-t211;
    t229 = t26.*t36.*t69.*t109.*2.0;
    t230 = t22.*t24.*t41.*t69.*2.0;
    t231 = t150+t151;
    t232 = t152-t180;
    t233 = t70-t154;
    t234 = t73-t156;
    t235 = t76-t158;
    t236 = t97-t166;
    t237 = t106-t171;
    t238 = t24.*t41.*t69.*t109.*2.0;
    t239 = t174+t175;
    t240 = t177-t189;
    t241 = t22.*t25.*t41.*t69.*2.0;
    t242 = t150+t213;
    t243 = t79-t214;
    t244 = t82-t216;
    t245 = t85-t218;
    t246 = t100-t223;
    t247 = t110-t226;
    t248 = t25.*t41.*t69.*t109.*2.0;
    t249 = t174+t229;
    t250 = t116+t230;
    t251 = t117+t241;
    t252 = s.*t22.*t26.*t41.*t69.*2.0;
    t253 = t88+t252;
    t254 = t23.*t26.*t41.*t69.*2.0;
    t255 = t91+t254;
    t256 = s.*t23.*t26.*t41.*t69.*2.0;
    t257 = t94+t256;
    t258 = t22.*t23.*t26.*t41.*t69.*2.0;
    t259 = t103+t258;
    t260 = s.*t22.*t23.*t26.*t41.*t69.*2.0;
    t261 = t113+t260;
    t262 = t143+t238;
    t263 = t145+t248;
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t72.*u14+t75.*u15+t78.*u16+t81.*u18+t84.*u19+t87.*u20+t90.*u22+t93.*u23+t96.*u24+t179.*u17+t231.*u21+u13.*(t116+t22.*t24.*t31.*t69.*2.0),t81.*u14+t84.*u15+t87.*u16+t163.*u22+t164.*u23+t165.*u24+t179.*u13-t182.*u18+t181.*u21-t183.*u19-t184.*u20-u17.*(t116-t178),t90.*u14+t93.*u15+t96.*u16-t129.*u18-t131.*u19-t133.*u20+t231.*u13-t232.*u17-t233.*u22-t234.*u23-t235.*u24-u21.*(t116-t230),0.0,0.0,0.0,t72.*u13+t75.*u14+t78.*u15+t81.*u17+t84.*u18+t87.*u19+t90.*u21+t93.*u22+t99.*u16+t96.*u23+t102.*u20+t105.*u24,t81.*u13+t84.*u14+t87.*u15+t102.*u16+t163.*u21+t164.*u22+t165.*u23+t169.*u24-t182.*u17-t183.*u18-t184.*u19-t185.*u20,t90.*u13+t93.*u14+t96.*u15+t105.*u16-t129.*u17-t131.*u18-t133.*u19-t140.*u20-t233.*u21-t234.*u22-t235.*u23-t236.*u24,0.0,0.0,0.0,t75.*u13+t78.*u14+t84.*u17+t87.*u18+t93.*u21+t99.*u15+t96.*u22+t102.*u19+t108.*u16+t105.*u23+t112.*u20+t115.*u24,t84.*u13+t87.*u14+t102.*u15+t112.*u16+t164.*u21+t165.*u22+t169.*u23+t176.*u24-t183.*u17-t184.*u18-t185.*u19-t186.*u20,t93.*u13+t96.*u14+t105.*u15+t115.*u16-t131.*u17-t133.*u18-t140.*u19-t149.*u20-t234.*u21-t235.*u22-t236.*u23-t237.*u24,0.0,0.0,0.0,t78.*u13+t87.*u17+t99.*u14+t96.*u21+t102.*u18+t108.*u15+t105.*u22+t112.*u19+t115.*u23+t188.*u20+t239.*u24+u16.*(t143+t24.*t31.*t69.*t109.*2.0),t87.*u13+t102.*u14+t112.*u15+t165.*u21+t169.*u22+t176.*u23-t184.*u17-t185.*u18+t188.*u16-t186.*u19+t190.*u24-u20.*(t143-t187),t96.*u13+t105.*u14+t115.*u15-t133.*u17-t140.*u18-t149.*u19+t239.*u16-t235.*u21-t236.*u22-t237.*u23-t240.*u20-u24.*(t143-t238),0.0,0.0,0.0,t120.*u18-t125.*u14+t122.*u19-t126.*u15-t127.*u16+t124.*u20-t129.*u22-t131.*u23-t133.*u24+t191.*u17-u21.*(t152-t22.*t24.*t25.*t26.*t69.*2.0)-u13.*(t117-t118),t120.*u14+t122.*u15+t124.*u16+t191.*u13+t193.*u18+t195.*u19+t197.*u20+t199.*u22+t201.*u23+t203.*u24+t242.*u21+u17.*(t117+t22.*t25.*t36.*t69.*2.0),t163.*u14+t164.*u15+t165.*u16+t181.*u13+t199.*u18+t201.*u19+t203.*u20+t242.*u17-t243.*u22-t244.*u23-t245.*u24-u21.*(t117-t241),0.0,0.0,0.0,t120.*u17-t125.*u13+t122.*u18-t126.*u14-t127.*u15+t124.*u19-t129.*u21-t136.*u16-t131.*u22+t135.*u20-t133.*u23-t140.*u24,t120.*u13+t122.*u14+t124.*u15+t135.*u16+t193.*u17+t195.*u18+t197.*u19+t199.*u21+t201.*u22+t205.*u20+t203.*u23+t207.*u24,t163.*u13+t164.*u14+t165.*u15+t169.*u16+t199.*u17+t201.*u18+t203.*u19+t207.*u20-t243.*u21-t244.*u22-t245.*u23-t246.*u24,0.0,0.0,0.0,t122.*u17-t126.*u13-t127.*u14+t124.*u18-t136.*u15-t131.*u21+t135.*u19-t133.*u22-t144.*u16+t142.*u20-t140.*u23-t149.*u24,t122.*u13+t124.*u14+t135.*u15+t142.*u16+t195.*u17+t197.*u18+t201.*u21+t205.*u19+t203.*u22+t209.*u20+t207.*u23+t212.*u24,t164.*u13+t165.*u14+t169.*u15+t176.*u16+t201.*u17+t203.*u18+t207.*u19+t212.*u20-t244.*u21-t245.*u22-t246.*u23-t247.*u24,0.0,0.0,0.0,-t127.*u13+t124.*u17-t136.*u14+t135.*u18-t133.*u21-t144.*u15+t142.*u19-t140.*u22-t149.*u23+t210.*u20-u24.*(t177-t24.*t25.*t26.*t69.*t109.*2.0)-u16.*(t145-t146),t124.*u13+t135.*u14+t142.*u15+t197.*u17+t205.*u18+t203.*u21+t210.*u16+t209.*u19+t207.*u22+t212.*u23+t249.*u24+u20.*(t145+t25.*t36.*t69.*t109.*2.0),t165.*u13+t169.*u14+t176.*u15+t190.*u16+t203.*u17+t207.*u18+t212.*u19-t245.*u21-t246.*u22+t249.*u20-t247.*u23-u24.*(t145-t248),0.0,0.0,0.0,-t160.*u14-t161.*u15+t155.*u22-t162.*u16+t157.*u23+t163.*u18+t159.*u24+t164.*u19+t165.*u20+t181.*u17+t250.*u21-u13.*(t150-t151),-t129.*u14-t131.*u15-t133.*u16+t215.*u22-t220.*u18+t217.*u23-t221.*u19-t222.*u20+t219.*u24-t232.*u13+t251.*u21-u17.*(t150-t213),t155.*u14+t157.*u15+t159.*u16+t215.*u18+t217.*u19+t219.*u20+t250.*u13+t251.*u17+t253.*u22+t255.*u23+t257.*u24+u21.*(t150+t22.*t26.*t41.*t69.*2.0),0.0,0.0,0.0,-t160.*u13-t161.*u14+t155.*u21-t162.*u15+t157.*u22+t163.*u17+t159.*u23+t164.*u18+t165.*u19-t168.*u16+t169.*u20+t167.*u24,-t129.*u13-t131.*u14-t133.*u15-t140.*u16+t215.*u21-t220.*u17+t217.*u22-t221.*u18-t222.*u19+t219.*u23-t225.*u20+t224.*u24,t155.*u13+t157.*u14+t159.*u15+t167.*u16+t215.*u17+t217.*u18+t219.*u19+t224.*u20+t253.*u21+t255.*u22+t257.*u23+t259.*u24,0.0,0.0,0.0,-t161.*u13-t162.*u14+t157.*u21+t159.*u22+t164.*u17+t165.*u18-t168.*u15+t169.*u19-t173.*u16+t167.*u23+t172.*u24+t176.*u20,-t131.*u13-t133.*u14-t140.*u15-t149.*u16+t217.*u21-t221.*u17-t222.*u18+t219.*u22-t225.*u19+t224.*u23-t228.*u20+t227.*u24,t157.*u13+t159.*u14+t167.*u15+t172.*u16+t217.*u17+t219.*u18+t224.*u19+t227.*u20+t255.*u21+t257.*u22+t259.*u23+t261.*u24,0.0,0.0,0.0,-t162.*u13+t159.*u21+t165.*u17-t168.*u14+t169.*u18-t173.*u15+t167.*u22+t172.*u23+t176.*u19+t190.*u20+t262.*u24-u16.*(t174-t175),-t133.*u13-t140.*u14-t149.*u15-t222.*u17+t219.*u21-t225.*u18+t224.*u22-t228.*u19+t227.*u23-t240.*u16+t263.*u24-u20.*(t174-t229),t159.*u13+t167.*u14+t172.*u15+t219.*u17+t224.*u18+t227.*u19+t257.*u21+t262.*u16+t259.*u22+t263.*u20+t261.*u23+u24.*(t174+t26.*t41.*t69.*t109.*2.0)],[6,24]);
end
if nargout > 3
    out4 = [g_xsym;g_ysym;g_zsym;0.0;0.0;0.0];
end
