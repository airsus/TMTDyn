function r_jtip = rjtipF(in1,in2,s)
%RJTIPF
%    R_JTIP = RJTIPF(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    06-Jan-2019 07:54:24

l_f_sym = in1(:,17);
l_s_sym = in1(:,5);
q1 = in2(:,1);
q2 = in2(:,2);
q3 = in2(:,3);
q4 = in2(:,4);
q5 = in2(:,5);
q6 = in2(:,6);
q7 = in2(:,7);
q8 = in2(:,8);
q9 = in2(:,9);
q10 = in2(:,10);
q11 = in2(:,11);
q12 = in2(:,12);
t2 = l_s_sym./2.0;
t3 = q3+t2;
t4 = q5./2.0;
t5 = q4./2.0;
t6 = q6./2.0;
t7 = cos(t5);
t8 = cos(t6);
t9 = sin(t4);
t10 = t7.*t8.*t9;
t11 = cos(t4);
t12 = sin(t5);
t13 = sin(t6);
t18 = t11.*t12.*t13;
t14 = t10-t18;
t15 = t7.*t11.*t13;
t16 = t8.*t9.*t12;
t17 = t15+t16;
t19 = q9+t2;
t20 = t8.*t11.*t12;
t21 = t7.*t9.*t13;
t22 = t20+t21;
t23 = t7.*t8.*t11;
t25 = t9.*t12.*t13;
t24 = t23-t25;
t26 = -t23+t25;
t27 = q7.*t14;
t28 = q8.*t17;
t29 = t19.*t22;
t30 = t27+t28+t29;
t31 = q7.*t26;
t32 = q8.*t22;
t36 = t17.*t19;
t33 = t31+t32-t36;
t34 = q8.*t14;
t35 = q7.*t22;
t37 = q8.*t26;
t38 = t14.*t19;
t39 = -t35+t37+t38;
t40 = q7.*t17;
t41 = t19.*t26;
t42 = -t34+t40+t41;
t43 = t14.*t30;
t44 = t26.*t33;
t45 = t17.*t30;
t46 = t14.*t42;
t47 = t26.*t39;
t55 = t22.*t33;
t48 = q2+t45+t46+t47-t55;
t49 = t22.*t30;
t50 = t17.*t33;
t51 = t26.*t42;
t56 = t14.*t39;
t52 = q3+t2+t49+t50+t51-t56;
t53 = t22.*t39;
t57 = t17.*t42;
t54 = q1+t43+t44+t53-t57;
t58 = q12./2.0;
t59 = q10./2.0;
t60 = q11./2.0;
t61 = cos(t60);
t62 = cos(t58);
t63 = sin(t59);
t64 = cos(t59);
t65 = sin(t60);
t66 = sin(t58);
t67 = t61.*t62.*t64;
t77 = t63.*t65.*t66;
t68 = t67-t77;
t69 = t61.*t63.*t66;
t70 = t61.*t62.*t63;
t71 = t64.*t65.*t66;
t72 = t70+t71;
t73 = t61.*t64.*t66;
t74 = t62.*t63.*t65;
t75 = t73+t74;
t78 = t62.*t64.*t65;
t76 = t69-t78;
t79 = t17.*t75;
t80 = t22.*t72;
t81 = t17.*t72;
t82 = t14.*t68;
t83 = t26.*t76;
t84 = t17.*t76;
t85 = t22.*t68;
t86 = t14.*t75;
t87 = t14.*t72;
t88 = t26.*t75;
t94 = t26.*t72;
t89 = t84+t85+t86-t94;
t90 = t22.*t76;
t96 = t17.*t68;
t91 = t87+t88+t90-t96;
t92 = t26.*(t67-t77);
t93 = t79+t80+t92-t14.*t76;
t95 = t84+t85+t86-t94;
t97 = t87+t88-t96+t22.*(t69-t78);
t98 = t81+t82+t83-t22.*t75;
r_jtip = reshape([q1,q1+t43+t44+t17.*(t34-q7.*t17+t19.*t24)-t22.*(t35+q8.*t24-t14.*t19),t54,q2,t48,t48,t3,t52,t52,q1,t54,q1+t43+t44+t53-t57+l_f_sym.*t91.*(t79+t80-t14.*t76+t26.*t68).*2.0+l_f_sym.*t89.*(t81+t82+t83-t22.*t75).*2.0,q2,t48,q2+t45+t46+t47-t55+l_f_sym.*t93.*(t81+t82+t83-t22.*t75).*2.0-l_f_sym.*t89.*t91.*2.0,t3,t52,q3+t2+t49+t50+t51-t56+l_f_sym.*t93.^2+l_f_sym.*t95.^2-l_f_sym.*t97.^2-l_f_sym.*t98.^2],[3,6]);
