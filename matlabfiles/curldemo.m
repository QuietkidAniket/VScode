clear
clc
syms x y z
f = input("Enter the 3D vector function in the form [f1, f2, f3] : ");
P(x,y,z) = f(1); Q(x,y,z) = f(2); R(x,y,z) = f(3);
%Calculating the curl
crl = curl(f, [x y z]);
% storing the components of curl(f)
C1(x,y,z) = crl(1); C2(x,y,z) = crl(2); C3(x,y,z) = crl(3);
% forming a meshgrid 
x = linspace(4,-4,10); y =x; z=x;
[X, Y, Z] = meshgrid(x,y,z);
% transforming components of f in terms of X, Y, Z
U = P(X,Y,Z); V = Q(X,Y,Z); W = R(X,Y,Z);
% transforming components of curl(f) in terms of X,Y,Z
CR1 = C1(X,Y,Z);CR2 = C2(X,Y,Z);CR3 = C3(X,Y,Z);
% plotting
figure
subplot(1,2,1)
quiver3(X,Y,Z, U, V, W);
title("3 d view of the vector field : ");
subplot(1,2,2)
quiver3(X,Y,Z,CR1,CR2,CR3);
title("3 d view of the curl field : ");