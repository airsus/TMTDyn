function [out1,out2,out3] = cnstF5(in1,in2,s)
%CNSTF5
%    [OUT1,OUT2,OUT3] = CNSTF5(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    09-Jan-2019 03:36:04

q76 = in2(:,76);
q77 = in2(:,77);
q78 = in2(:,78);
q91 = in2(:,91);
u76 = in2(:,179);
u77 = in2(:,180);
u78 = in2(:,181);
u91 = in2(:,194);
t2 = q91./2.0;
t3 = sin(t2);
t4 = q76.^2;
t5 = q77.^2;
t6 = q78.^2;
t7 = -t4-t5-t6+1.0;
t8 = 1.0./sqrt(t7);
t9 = cos(t2);
t10 = 1.0./t7.^(3.0./2.0);
t11 = q77-t3;
t12 = sqrt(t7);
t13 = t9-t12;
out1 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,q76.*t3.*t8.*2.0,t9.*2.0+q77.*t3.*t8.*2.0,q78.*t3.*t8.*2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-t3.*t11+t9.*t13-t3.^2-t9.^2];
if nargout > 1
    t14 = t3-q77.*t8.*t9;
    out2 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t3.*t8.*u76.*2.0+q76.*t8.*t9.*u91+t3.*t4.*t10.*u76.*2.0+q76.*q77.*t3.*t10.*u77.*2.0+q76.*q78.*t3.*t10.*u78.*2.0,u77.*(t3.*t8.*2.0+t3.*t5.*t10.*2.0)-t14.*u91+q76.*q77.*t3.*t10.*u76.*2.0+q77.*q78.*t3.*t10.*u78.*2.0,t3.*t8.*u78.*2.0+q78.*t8.*t9.*u91+t3.*t6.*t10.*u78.*2.0+q76.*q78.*t3.*t10.*u76.*2.0+q77.*q78.*t3.*t10.*u77.*2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-t14.*u77-u91.*((t3.*t13)./2.0+(t9.*t11)./2.0)+q76.*t8.*t9.*u76+q78.*t8.*t9.*u78];
end
if nargout > 2
    out3 = 0.0;
end
