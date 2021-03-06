function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF7(in1,in2,s)
%SPRDMPF7
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF7(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    05-Jan-2019 22:38:44

E_s_sym = in1(:,2);
gamma_sym = in1(:,21);
l_s_sym = in1(:,5);
lambda_sym = in1(:,34);
mu_x_sym = in1(:,6);
mu_pow_sym = in1(:,12);
q7 = in2(:,7);
r_p1_sym = in1(:,19);
r_s1_sym = in1(:,3);
r_s2_sym = in1(:,4);
u7 = in2(:,19);
out1 = [0.0;0.0;0.0;0.0;0.0;0.0;1.0;0.0;0.0;0.0;0.0;0.0];
if nargout > 1
    out2 = (E_s_sym.*q7.*pi.*((r_s1_sym.^2-r_s2_sym.^2)./lambda_sym-r_p1_sym.^2.*1.0./sin(gamma_sym).^2.*(lambda_sym.^2.*cos(gamma_sym).^2-1.0).*6.0).*(2.0./3.0))./(l_s_sym.*lambda_sym);
end
if nargout > 2
    out3 = -mu_x_sym.*u7.*abs(u7).^(mu_pow_sym-1.0);
end
if nargout > 3
    out4 = 0.0;
end
if nargout > 4
    out5 = q7;
end
if nargout > 5
    out6 = [0.0,0.0,0.0,0.0,0.0,0.0,(E_s_sym.*pi.*((r_s1_sym.^2-r_s2_sym.^2)./lambda_sym-r_p1_sym.^2.*1.0./sin(gamma_sym).^2.*(lambda_sym.^2.*cos(gamma_sym).^2-1.0).*6.0).*(-2.0./3.0))./(l_s_sym.*lambda_sym),0.0,0.0,0.0,0.0,0.0];
end
if nargout > 6
    out7 = [0.0,0.0,0.0,0.0,0.0,0.0,-mu_x_sym.*u7.^(mu_pow_sym-1.0),0.0,0.0,0.0,0.0,0.0];
end
if nargout > 7
    out8 = 1.0;
end
