function r_jtip = rjtipF(in1,in2,s)
%RJTIPF
%    R_JTIP = RJTIPF(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    05-Jan-2019 21:11:28

l_f_sym = in1(:,17);
l_s_sym = in1(:,5);
q1 = in2(:,1);
q2 = in2(:,2);
q3 = in2(:,3);
q4 = in2(:,4);
q5 = in2(:,5);
q6 = in2(:,6);
t2 = l_s_sym+q3;
t3 = q6./2.0;
t4 = q4./2.0;
t5 = q5./2.0;
t6 = sin(t4);
t7 = sin(t5);
t8 = sin(t3);
t9 = cos(t4);
t10 = cos(t5);
t11 = cos(t3);
t12 = t8.*t9.*t10;
t13 = t6.*t7.*t11;
t14 = t12+t13;
t15 = t6.*t10.*t11;
t16 = t7.*t8.*t9;
t17 = t15+t16;
t18 = t6.*t8.*t10;
t19 = t6.*t7.*t8;
t24 = t9.*t10.*t11;
t20 = t19-t24;
t22 = t7.*t9.*t11;
t21 = t18-t22;
t23 = t18-t22;
r_jtip = reshape([q1,q1,q2,q2,t2,t2,q1,q1-l_f_sym.*t14.*t20.*2.0-l_f_sym.*t17.*t21.*2.0,q2,q2+l_f_sym.*t14.*t17.*2.0-l_f_sym.*t20.*t21.*2.0,t2,l_s_sym+q3-l_f_sym.*t14.^2+l_f_sym.*t17.^2+l_f_sym.*t20.^2-l_f_sym.*t23.^2],[2,6]);
