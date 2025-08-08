function [x1,x2] = test18_quadratic(a,b,c)

%此函数返回
%二次方程。
%它需要3个输入参数
%x2，x和
%常数项
%它返回根
d = disc(a,b,c); 
x1 = (-b + d) / (2*a);
x2 = (-b - d) / (2*a);
end   % end of quadratic

function dis = disc(a,b,c) 
%函数计算判别式
dis = sqrt(b^2 - 4*a*c);
end   % end of sub-function