function [x1,x2] = test18_quadratic3(a,b,c)

% 这个函数返回
% 一元二次方程。它需要3个输入参数
% 它们是 x2，x 和
% 常数项
% 它返回根
d = disc(a,b,c); 

x1 = (-b + d) / (2*a);
x2 = (-b - d) / (2*a);
end      %结束 quadratic3