%Modified program for Lagranges Multiplier Method
clear
clc
syms x y z L
f=input('Enter the function f(x,y):');
g=input('Enter the constrained funtion g(x,y):');
F=f+L*g;
gradF=jacobian(F,[x y]);
S=solve(g,gradF(1),gradF(2),'Real',true); %Solving only for real L,x,y 
St_pts=double([S.x,S.y]); %Matrix with stationary points in rows.
h1=St_pts(:,1);
h2=St_pts(:,2);
X=[h1];
Y=[h2];
disp('Stationary points are:')
STP=table(X,Y);
range=double([min(S.x)-3 max(S.x)+3 min(S.y)-3 max(S.y)+3]);%setting plot range 
[n,m]=size(St_pts);
for i = 1:n
F(i)=subs(f,{x,y},{S.x(i),S.y(i)});
%Finding values of f at all the stationary points
end
if n>1
F_max=max(F);
disp(['The maximum value of f under the given constraint g is:' char(F_max)]);
F_min=min(F);
disp(['The minimum value of f under the given constraint g is:' char(F_min)]);
else
disp(['The extremum value of f under the given constraint g is:' char(F)]);
end
fmesh(f,range);
hold on
h=ezplot(g,range);
tmp = get(h,'contourMatrix');
xdt = tmp(1,2:end);% Avoiding first x-data point
ydt = tmp(2,2:end);% Avoiding first y-data point
zdt = double(subs(f,{x,y},{xdt,ydt}));
plot3(xdt,ydt,zdt,'-r','LineWidth',2);
axis(range);
for i = 1:numel(x)
plot3(S.x(i),S.y(i),F(i),'*k','MarkerSize',20);
end
hold off
title('Constrained Maxima/Minima')