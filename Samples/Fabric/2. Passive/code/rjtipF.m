function r_jtip = rjtipF(in1,in2,s)
%RJTIPF
%    R_JTIP = RJTIPF(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    09-Jan-2019 03:36:15

q1 = in2(:,1);
q2 = in2(:,2);
q3 = in2(:,3);
q7 = in2(:,7);
q8 = in2(:,8);
q9 = in2(:,9);
q13 = in2(:,13);
q14 = in2(:,14);
q15 = in2(:,15);
q19 = in2(:,19);
q20 = in2(:,20);
q21 = in2(:,21);
q25 = in2(:,25);
q26 = in2(:,26);
q27 = in2(:,27);
q31 = in2(:,31);
q32 = in2(:,32);
q33 = in2(:,33);
q37 = in2(:,37);
q38 = in2(:,38);
q39 = in2(:,39);
q43 = in2(:,43);
q44 = in2(:,44);
q45 = in2(:,45);
q49 = in2(:,49);
q50 = in2(:,50);
q51 = in2(:,51);
q55 = in2(:,55);
q56 = in2(:,56);
q57 = in2(:,57);
q61 = in2(:,61);
q62 = in2(:,62);
q63 = in2(:,63);
q67 = in2(:,67);
q68 = in2(:,68);
q69 = in2(:,69);
q73 = in2(:,73);
q74 = in2(:,74);
q75 = in2(:,75);
q79 = in2(:,79);
q80 = in2(:,80);
q81 = in2(:,81);
q85 = in2(:,85);
q86 = in2(:,86);
q87 = in2(:,87);
q91 = in2(:,91);
t2 = q91./2.0;
t3 = cos(t2);
t4 = sin(t2);
r_jtip = reshape([0.0,q1,q7,q13,q19,q25,q31,q37,q43,q49,q55,q61,q67,q73,q79,q85,0.0,q2,q8,q14,q20,q26,q32,q38,q44,q50,q56,q62,q68,q74,q80,q86,0.0,q3,q9,q15,q21,q27,q33,q39,q45,q51,q57,q63,q69,q75,q81,q87,t3.*t4.*(-2.7e1./5.0e1),q1,q7,q13,q19,q25,q31,q37,q43,q49,q55,q61,q67,q73,q79,q85,0.0,q2,q8,q14,q20,q26,q32,q38,q44,q50,q56,q62,q68,q74,q80,q86,t3.^2.*(-2.7e1./1.0e2)+t4.^2.*(2.7e1./1.0e2),q3,q9,q15,q21,q27,q33,q39,q45,q51,q57,q63,q69,q75,q81,q87],[16,6]);
