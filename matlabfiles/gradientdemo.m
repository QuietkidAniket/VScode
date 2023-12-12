clc
clear
syms x y z
f = input("Enter the scalar function : ");
%calculating the gradient
grad = gradient(f, [x,y,z]);
% storing the components of gradient
g1(x,y,z) = grad(1); g2(x,y,z) = grad(2); g3(x,y,z) = grad(3);
% forming a meshgrid 
x = linspace(-2,2,10); y =x; z=x;
[X, Y, Z] = meshgrid(x,y,z);
% transforming components of gradient vector in terms of X Y Z
gr1 = g1(X,Y,Z);gr2 = g2(X,Y,Z); gr3=g3(X,Y,Z);
% plotting
figure
quiver3(X,Y,Z, gr1,gr2,gr3);
hold on
fcontour(f, [-2,2]);
title("3 d view of the gradient function : ")

