function [x1,x2] = test18_quadratic2(a,b,c)
d = 0 % 嵌套函数内部声明的变量只能内部用
function disc  %嵌套函数
d = sqrt(b^2 - 4*a*c);
end   % 结束函数disc

disc;
x1 = (-b + d) / (2*a);
x2 = (-b - d) / (2*a);
end   %结束函数 quadratic2