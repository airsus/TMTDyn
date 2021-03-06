function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF7(in1,in2,s)
%SPRDMPF7
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF7(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    04-Jan-2019 13:21:30

E_s_sym = in1(:,2);
gamma_sym = in1(:,21);
lambda_sym = in1(:,34);
mu_x_sym = in1(:,6);
mu_y_sym = in1(:,7);
mu_z_sym = in1(:,8);
mu_xx_sym = in1(:,9);
mu_yy_sym = in1(:,10);
mu_zz_sym = in1(:,11);
mu_pow_sym = in1(:,12);
p1_sym = in1(:,22);
p2_sym = in1(:,23);
p3_sym = in1(:,24);
p4_sym = in1(:,25);
p5_sym = in1(:,26);
p6_sym = in1(:,27);
q1 = in2(:,1);
q2 = in2(:,2);
q3 = in2(:,3);
q4 = in2(:,4);
q5 = in2(:,5);
q6 = in2(:,6);
r_o_sym = in1(:,20);
r_p1_sym = in1(:,19);
r_s1_sym = in1(:,3);
r_s2_sym = in1(:,4);
u1 = in2(:,7);
u2 = in2(:,8);
u3 = in2(:,9);
u4 = in2(:,10);
u5 = in2(:,11);
u6 = in2(:,12);
t2 = s.^2;
t3 = q4.^2;
t4 = q5.^2;
t5 = q6.^2;
t6 = t2.*t3;
t7 = t2.*t4;
t8 = t2.*t5;
t9 = -t6-t7-t8+1.0;
t10 = sqrt(t9);
t11 = q4.*q5.*s.*t2.*4.0;
t12 = s.*t2.*t3.*2.0;
t13 = t6+t7+t8-1.0;
t14 = q4.*q6.*s.*t2.*4.0;
t15 = q5.*t2.*t10.*4.0;
t16 = q5.*q6.*s.*t2.*4.0;
t17 = s.*t2.*t4.*2.0;
t18 = q3.*s.*2.0;
t19 = t18+1.0;
t20 = 1.0./sqrt(t9);
t21 = s.*t19;
t29 = q2.*q4.*s.*t2.*t20.*2.0;
t22 = t21-t29;
t23 = q2.*t2.*2.0;
t24 = q4.*t2.*t19.*t20;
t25 = t23+t24;
t26 = q2.*s.*t10.*2.0;
t27 = q4.*s.*t19;
t53 = q1.*q6.*t2.*2.0;
t28 = t26+t27-t53;
t30 = t10.*t19;
t31 = q1.*q5.*t2.*2.0;
t39 = q2.*q4.*t2.*2.0;
t32 = t30+t31-t39;
t33 = t2.^2;
t34 = s.*t3.*2.0;
t35 = s.*t4.*2.0;
t36 = s.*t5.*2.0;
t37 = t34+t35+t36;
t38 = 1.0./t9.^(3.0./2.0);
t40 = s.*t32;
t41 = q1.*s.*t10.*2.0;
t42 = q2.*q6.*t2.*2.0;
t55 = q5.*s.*t19;
t43 = t41+t42-t55;
t44 = q1.*q4.*t2.*2.0;
t45 = q2.*q5.*t2.*2.0;
t46 = q6.*s.*t19;
t47 = t44+t45+t46;
t48 = s.*t47;
t49 = q1.*t2.*2.0;
t54 = q5.*t2.*t19.*t20;
t50 = t49-t54;
t51 = q1.*q5.*s.*t2.*t20.*2.0;
t52 = t21+t51;
t56 = q4.*q5.*t2.*t20.*2.0;
t57 = q4.*q5.*s.*t2.*t37.*t38;
t58 = t56+t57;
t59 = t10.*2.0;
t60 = s.*t20.*t37;
t61 = q2.*q6.*s.*t2.*t20.*2.0;
t62 = t49+t61;
t63 = s.*t43;
t65 = q1.*q6.*s.*t2.*t20.*2.0;
t64 = t23-t65;
t66 = q4.*q6.*t2.*t20.*2.0;
t67 = q4.*q6.*s.*t2.*t37.*t38;
t68 = t66+t67;
t69 = q5.*q6.*t2.*t20.*2.0;
t70 = q5.*q6.*s.*t2.*t37.*t38;
t71 = t69+t70;
t72 = 1.0./lambda_sym;
t73 = cos(gamma_sym);
t74 = r_s1_sym.^2;
t75 = r_s2_sym.^2;
t76 = t74-t75;
t77 = t72.*t76;
t78 = r_p1_sym.^2;
t79 = sin(gamma_sym);
t80 = 1.0./t79.^2;
t81 = lambda_sym.^2;
t82 = t73.^2;
t83 = t81.*t82;
t84 = t83-1.0;
t86 = t78.*t80.*t84.*6.0;
t85 = t77-t86;
t87 = 1.0./lambda_sym.^2;
t88 = t74.^2;
t89 = t75.^2;
t90 = t88-t89;
t91 = t87.*t90;
t92 = t78.^2;
t93 = 1.0./t79.^4;
t94 = t84.^2;
t95 = t92.*t93.*t94.*6.0;
t96 = t91+t95;
t97 = (t96.*pi)./4.0;
t98 = r_o_sym.^2;
t99 = t10.*t64;
t100 = s.*t28;
t101 = q4.*t2.*t19;
t102 = q5.*q6.*s.*t2.*t19.*t20;
t117 = q6.*s.*t62;
t118 = q6.*t2.*t20.*t43;
t103 = t99+t100+t101+t102-t117-t118;
t104 = s.*t2.*t5.*2.0;
t105 = q5.*s.*t25;
t106 = q6.*s.*t22;
t122 = q4.*t2.*t20.*t43;
t107 = t48+t105+t106-t122;
t108 = q2.*q4.*s.*t2.*2.0;
t109 = q6.*t2.*t10.*4.0;
t110 = t11+t109;
t111 = t14-t15;
t112 = t10.*t52;
t113 = q5.*s.*t50;
t114 = q5.*t2.*t20.*t43;
t115 = q2.*q5.*q6.*t20.*t33.*2.0;
t116 = t40-t108+t112+t113+t114+t115;
t119 = t103.*u6;
t120 = s.*t13.*2.0;
t121 = -t12+t17+t104+t120;
t123 = t107.*u4;
t124 = t110.*u2;
t125 = t111.*u3;
t130 = t121.*u1;
t131 = t116.*u5;
t126 = t119+t123+t124+t125-t130-t131;
t127 = abs(t126);
t128 = mu_pow_sym-1.0;
t129 = t127.^t128;
t132 = q5.*t2.*t19;
t133 = q4.*s.*t50;
t134 = q6.*s.*t52;
t150 = q5.*t2.*t20.*t28;
t135 = t48+t133+t134-t150;
t136 = t10.*t22;
t137 = q1.*q5.*s.*t2.*2.0;
t138 = q1.*q4.*q6.*t20.*t33.*2.0;
t142 = q4.*s.*t25;
t143 = q4.*t2.*t20.*t28;
t139 = t40+t136+t137+t138-t142-t143;
t140 = q4.*t2.*t10.*4.0;
t141 = t16+t140;
t144 = t10.*t62;
t145 = q6.*s.*t64;
t146 = q6.*t2.*t20.*t28;
t147 = q4.*q6.*s.*t2.*t19.*t20;
t148 = t63-t132+t144+t145+t146+t147;
t149 = t12-t17+t104+t120;
t151 = t135.*u5;
t152 = t139.*u4;
t153 = t11-t109;
t154 = t153.*u1;
t155 = t141.*u3;
t159 = t148.*u6;
t160 = t149.*u2;
t156 = t151+t152+t154+t155-t159-t160;
t157 = abs(t156);
t158 = t157.^t128;
t161 = q4.*s.*t62;
t162 = q5.*s.*t64;
t170 = q6.*t2.*t20.*t32;
t163 = t48+t161+t162-t170;
t164 = q1.*q6.*s.*t2.*2.0;
t165 = t10.*t50;
t166 = q2.*q6.*s.*t2.*2.0;
t167 = q2.*q4.*q5.*t20.*t33.*2.0;
t178 = q5.*s.*t52;
t179 = q5.*t2.*t20.*t32;
t168 = t63+t165+t166+t167-t178-t179;
t169 = t14+t15;
t171 = t163.*u6;
t172 = t12+t17-t104+t120;
t173 = t10.*t25;
t174 = q4.*s.*t22;
t175 = q4.*t2.*t20.*t32;
t176 = q1.*q4.*q5.*t20.*t33.*2.0;
t177 = t100-t164+t173+t174+t175+t176;
t180 = t168.*u5;
t181 = t169.*u1;
t182 = t16-t140;
t183 = t182.*u2;
t187 = t172.*u3;
t188 = t177.*u4;
t184 = t171+t180+t181+t183-t187-t188;
t185 = abs(t184);
t186 = t185.^t128;
t189 = t2.*t3.*t20.*2.0;
t190 = s.*t2.*t3.*t37.*t38;
t191 = t59+t60+t189+t190;
t192 = t191.*u4;
t193 = t58.*u5;
t194 = t68.*u6;
t195 = t192+t193+t194;
t196 = abs(t195);
t197 = t196.^t128;
t198 = t2.*t4.*t20.*2.0;
t199 = s.*t2.*t4.*t37.*t38;
t200 = t59+t60+t198+t199;
t201 = t200.*u5;
t202 = t58.*u4;
t203 = t71.*u6;
t204 = t201+t202+t203;
t205 = abs(t204);
t206 = t205.^t128;
t207 = t2.*t5.*t20.*2.0;
t208 = s.*t2.*t5.*t37.*t38;
t209 = t59+t60+t207+t208;
out1 = reshape([t12-s.*t13.*2.0-s.*t2.*t4.*2.0-s.*t2.*t5.*2.0,t110,t111,t107,-t40+t108-t10.*t52-q5.*s.*t50-q5.*t2.*t20.*t43-q2.*q5.*q6.*t20.*t33.*2.0,t103,t11-q6.*t2.*t10.*4.0,-t12+t17-s.*t13.*2.0-s.*t2.*t5.*2.0,t141,t139,t135,-t63+t132-t10.*t62-q6.*s.*t64-q6.*t2.*t20.*t28-q4.*q6.*s.*t2.*t19.*t20,t169,t16-q4.*t2.*t10.*4.0,-t12-t17+t104-s.*t13.*2.0,t164-s.*t28-t10.*t25-q4.*s.*t22-q4.*t2.*t20.*t32-q1.*q4.*q5.*t20.*t33.*2.0,t168,t163,0.0,0.0,0.0,t191,t58,t68,0.0,0.0,0.0,t58,t200,t71,0.0,0.0,0.0,t68,t71,t209],[6,6]);
if nargout > 1
    t210 = t209.*u6;
    t211 = t68.*u4;
    t212 = t71.*u5;
    t213 = t210+t211+t212;
    t214 = abs(t213);
    t215 = t214.^t128;
    t216 = 1.0./sqrt(lambda_sym);
    t218 = t72.*t78.*t80.*t84.*t98.*pi.*3.0;
    t217 = t97-t218;
    t220 = t72.*t78.*t80.*t84.*t98.*pi.*2.999999999999999;
    t219 = t97-t220;
    out2 = [(E_s_sym.*t72.*t85.*pi.*(t10.*t43+q6.*s.*t28-q5.*s.*t32+q4.*s.*t47))./3.0;(E_s_sym.*t72.*t85.*pi.*(t10.*t28+q4.*s.*t32-q6.*s.*t43+q5.*s.*t47))./3.0;E_s_sym.*t72.*t85.*pi.*(t10.*t32-q4.*s.*t28+q5.*s.*t43+q6.*s.*t47-1.0);E_s_sym.*t72.*t217.*(q4.*t10.*2.0+q4.*s.*t20.*t37);E_s_sym.*t72.*t219.*(q5.*t10.*2.0+q5.*s.*t20.*t37);(E_s_sym.*t72.*t96.*pi.*(q6.*t10.*2.0+q6.*s.*t20.*t37))./6.0];
end
if nargout > 2
    out3 = [-mu_x_sym.*t103.*t129.*u6-mu_x_sym.*t107.*t129.*u4-mu_x_sym.*t110.*t129.*u2-mu_x_sym.*t111.*t129.*u3+mu_x_sym.*t116.*t129.*u5+mu_x_sym.*t121.*t129.*u1;-mu_y_sym.*t135.*t158.*u5-mu_y_sym.*t139.*t158.*u4-mu_y_sym.*t141.*t158.*u3+mu_y_sym.*t149.*t158.*u2+mu_y_sym.*t148.*t158.*u6-mu_y_sym.*t153.*t158.*u1;-mu_z_sym.*t163.*t186.*u6-mu_z_sym.*t169.*t186.*u1-mu_z_sym.*t168.*t186.*u5+mu_z_sym.*t172.*t186.*u3+mu_z_sym.*t177.*t186.*u4-mu_z_sym.*t182.*t186.*u2;-mu_xx_sym.*t58.*t197.*u5-mu_xx_sym.*t68.*t197.*u6-mu_xx_sym.*t191.*t197.*u4;-mu_yy_sym.*t58.*t206.*u4-mu_yy_sym.*t71.*t206.*u6-mu_yy_sym.*t200.*t206.*u5;-mu_zz_sym.*t68.*t215.*u4-mu_zz_sym.*t71.*t215.*u5-mu_zz_sym.*t209.*t215.*u6];
end
if nargout > 3
    out4 = [0.0;0.0;-t78.*t80.*t84.*pi.*(p1_sym+p2_sym+p3_sym+p4_sym+p5_sym+p6_sym);p1_sym.*r_o_sym.*t78.*t80.*t84.*t216.*pi.*(-5.29e2./5.78e2)-p2_sym.*r_o_sym.*t78.*t80.*t84.*t216.*pi.*(5.29e2./5.78e2)+p3_sym.*r_o_sym.*t78.*t80.*t84.*t216.*pi.*1.086532638769295e-1+p4_sym.*r_o_sym.*t78.*t80.*t84.*t216.*pi.*8.065716496178801e-1+p5_sym.*r_o_sym.*t78.*t80.*t84.*t216.*pi.*8.065716496178799e-1+p6_sym.*r_o_sym.*t78.*t80.*t84.*t216.*pi.*1.086532638769295e-1;p1_sym.*r_o_sym.*t78.*t80.*t84.*t216.*pi.*(-4.029433678799268e-1)+p2_sym.*r_o_sym.*t78.*t80.*t84.*t216.*pi.*4.029433678799269e-1+p3_sym.*r_o_sym.*t78.*t80.*t84.*t216.*pi.*9.940797092028839e-1+p4_sym.*r_o_sym.*t78.*t80.*t84.*t216.*pi.*5.911363413229571e-1-p5_sym.*r_o_sym.*t78.*t80.*t84.*t216.*pi.*5.911363413229574e-1-p6_sym.*r_o_sym.*t78.*t80.*t84.*t216.*pi.*9.940797092028839e-1;0.0];
end
if nargout > 4
    out5 = [q1.*s.*2.0,q2.*s.*2.0,t19];
end
if nargout > 5
    out6 = reshape([(E_s_sym.*t72.*t85.*t121.*pi)./3.0,E_s_sym.*t72.*t85.*t153.*pi.*(-1.0./3.0),-E_s_sym.*t72.*t85.*t169.*pi,0.0,0.0,0.0,E_s_sym.*t72.*t85.*t110.*pi.*(-1.0./3.0),(E_s_sym.*t72.*t85.*t149.*pi)./3.0,-E_s_sym.*t72.*t85.*t182.*pi,0.0,0.0,0.0,E_s_sym.*t72.*t85.*t111.*pi.*(-1.0./3.0),E_s_sym.*t72.*t85.*t141.*pi.*(-1.0./3.0),E_s_sym.*t72.*t85.*t172.*pi,0.0,0.0,0.0,E_s_sym.*t72.*t85.*t107.*pi.*(-1.0./3.0),E_s_sym.*t72.*t85.*t139.*pi.*(-1.0./3.0),E_s_sym.*t72.*t85.*t177.*pi,-E_s_sym.*t72.*t191.*t217,-E_s_sym.*t58.*t72.*t219,E_s_sym.*t68.*t72.*t96.*pi.*(-1.0./6.0),(E_s_sym.*t72.*t85.*t116.*pi)./3.0,E_s_sym.*t72.*t85.*t135.*pi.*(-1.0./3.0),-E_s_sym.*t72.*t85.*t168.*pi,-E_s_sym.*t58.*t72.*t217,-E_s_sym.*t72.*t200.*t219,E_s_sym.*t71.*t72.*t96.*pi.*(-1.0./6.0),E_s_sym.*t72.*t85.*t103.*pi.*(-1.0./3.0),(E_s_sym.*t72.*t85.*t148.*pi)./3.0,-E_s_sym.*t72.*t85.*t163.*pi,-E_s_sym.*t68.*t72.*t217,-E_s_sym.*t71.*t72.*t219,E_s_sym.*t72.*t96.*t209.*pi.*(-1.0./6.0)],[6,6]);
end
if nargout > 6
    out7 = reshape([mu_x_sym.*t121.*t129,-mu_y_sym.*t153.*t158,-mu_z_sym.*t169.*t186,0.0,0.0,0.0,-mu_x_sym.*t110.*t129,mu_y_sym.*t149.*t158,-mu_z_sym.*t182.*t186,0.0,0.0,0.0,-mu_x_sym.*t111.*t129,-mu_y_sym.*t141.*t158,mu_z_sym.*t172.*t186,0.0,0.0,0.0,-mu_x_sym.*t107.*t129,-mu_y_sym.*t139.*t158,mu_z_sym.*t177.*t186,-mu_xx_sym.*t191.*t197,-mu_yy_sym.*t58.*t206,-mu_zz_sym.*t68.*t215,mu_x_sym.*t116.*t129,-mu_y_sym.*t135.*t158,-mu_z_sym.*t168.*t186,-mu_xx_sym.*t58.*t197,-mu_yy_sym.*t200.*t206,-mu_zz_sym.*t71.*t215,-mu_x_sym.*t103.*t129,mu_y_sym.*t148.*t158,-mu_z_sym.*t163.*t186,-mu_xx_sym.*t68.*t197,-mu_yy_sym.*t71.*t206,-mu_zz_sym.*t209.*t215],[6,6]);
end
if nargout > 7
    out8 = 1.0;
end
