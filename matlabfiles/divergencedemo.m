clc
clear
syms x y z
f = input("Enter the 2 d vector function as [f1,f2] : ");
P(x,y) = f(1); Q(x,y) = f(2);
div(x,y) = divergence(f, [x,y]);
% forming a meshgrid
x = linspace(-4,4,20); y=x;
[X,Y] = meshgrid(x,y);
% transforming f in terms of X,Y
U = P(X,Y); V = Q(X,Y);
% plotting 
pcolor(X,Y,div(X,Y));
shading interp;
hold on;
quiver(X,Y,U,V,1);
axis on;
hold off;
title('Vector field of f(x,y) :')
