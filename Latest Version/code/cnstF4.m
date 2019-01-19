function [out1,out2,out3] = cnstF4(in1,in2,s)
%CNSTF4
%    [OUT1,OUT2,OUT3] = CNSTF4(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    18-Jan-2019 00:48:39

q88 = in2(:,88);
q89 = in2(:,89);
q90 = in2(:,90);
q91 = in2(:,91);
q106 = in2(:,106);
u88 = in2(:,206);
u89 = in2(:,207);
u90 = in2(:,208);
u91 = in2(:,209);
u106 = in2(:,224);
out1 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,q88.*q89.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*-2.0+q88.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0,cos(q106./2.0).*1.0./sqrt(q88.^2+q89.^2+q90.^2+q91.^2).*2.0-q89.^2.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0+q89.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0,q89.*q90.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*-2.0+q90.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0,sin(q106./2.0).*1.0./sqrt(q88.^2+q89.^2+q90.^2+q91.^2).*-2.0+q91.^2.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q89.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-q91.*cos(q106./2.0).*1.0./sqrt(q88.^2+q89.^2+q90.^2+q91.^2)-q89.*sin(q106./2.0).*1.0./sqrt(q88.^2+q89.^2+q90.^2+q91.^2)];
if nargout > 1
    out2 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-u89.*(q88.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q88.*q89.^2.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q88.*q89.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)-u88.*(q89.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q88.^2.*q89.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q88.^2.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)+u90.*(q88.*q89.*q90.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0-q88.*q90.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)+u91.*(q88.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q88.*q91.^2.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q88.*q89.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)+u106.*(q88.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0)+q88.*q89.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0)),-u88.*(q88.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q88.*q89.^2.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q88.*q89.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)-u90.*(q90.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q89.^2.*q90.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q89.*q90.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)-u91.*(q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q89.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q89.^2.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q89.*q91.^2.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)-u89.*(q89.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*6.0-q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q89.^3.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q89.^2.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)+u106.*(-sin(q106./2.0).*1.0./sqrt(q88.^2+q89.^2+q90.^2+q91.^2)+q89.^2.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0)+q89.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0)),-u89.*(q90.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q89.^2.*q90.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q89.*q90.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)-u90.*(q89.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q89.*q90.^2.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q90.^2.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)+u88.*(q88.*q89.*q90.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0-q88.*q90.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)+u91.*(q90.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q90.*q91.^2.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q89.*q90.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)+u106.*(q90.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0)+q89.*q90.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0)),-u89.*(q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q89.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q89.^2.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q89.*q91.^2.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)+u88.*(q88.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q88.*q91.^2.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q88.*q89.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)+u90.*(q90.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q90.*q91.^2.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0+q89.*q90.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)-u91.*(q89.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*2.0-q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0).*6.0+q91.^3.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0-q89.*q91.^2.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(5.0./2.0).*6.0)+u106.*(-cos(q106./2.0).*1.0./sqrt(q88.^2+q89.^2+q90.^2+q91.^2)+q91.^2.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0)+q89.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0)),0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,u88.*(q88.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0)+q88.*q89.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0))+u90.*(q90.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0)+q89.*q90.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0))-u106.*((q89.*cos(q106./2.0).*1.0./sqrt(q88.^2+q89.^2+q90.^2+q91.^2))./2.0-(q91.*sin(q106./2.0).*1.0./sqrt(q88.^2+q89.^2+q90.^2+q91.^2))./2.0)+u91.*(-cos(q106./2.0).*1.0./sqrt(q88.^2+q89.^2+q90.^2+q91.^2)+q91.^2.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0)+q89.*q91.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0))+u89.*(-sin(q106./2.0).*1.0./sqrt(q88.^2+q89.^2+q90.^2+q91.^2)+q89.^2.*sin(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0)+q89.*q91.*cos(q106./2.0).*1.0./(q88.^2+q89.^2+q90.^2+q91.^2).^(3.0./2.0))];
end
if nargout > 2
    out3 = 0.0;
end