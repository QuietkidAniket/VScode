import pyperclip as pp
circle = """X = input("Enter the x coordinate of the circle : ");
Y = input("Enter the y coordinate of the circle : "); 
r = input("Enter the radius of the circle : ");
theta = linspace(0, 2*pi, 1000);
x =  X + r*cos(theta);
y = Y + r*sin(theta);
plot(x,y,'r'); """

maximaminima = """
clc 
clear all
syms x real
f = input('Enter the function: ');
fx=diff(f,x);
fxx=diff(fx,x);
c=solve(fx);
c=double(c);
% iterates through solutions to fx , i.e., c
for i=1 : length(c)
    % T1 = fxx(c[i])
    T1=subs(fxx,x,c(i));
    T1=double(T1);
    % T3 = fxx(c[i])
    T3=subs(f,x,c(i));
    T3=double(T3);
    if(T1==0)
        sprintf('The inflection point is x = %d',c(i));
    else
        if (T1<0)
            sprintf('The maximum point x is %d',c(i));
            sprintf('The maximum value of the function is %d',T3);
        else
            sprintf('The minimum point is x is %d',c(i));
            sprintf('The minimum value of the function is %d',T3);
        end
    end
    cmin=min(c);
    cmax=max(c);
    D=[cmin-2,cmax+2];
    ezplot(f,D)
    hold on
    plot(c(i),T3,'g*','markersize',15);
end"""

lagrange = """%Modified program for Lagranges Multiplier Method
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
F(i)=subs(f,{x,y},{S.x(i),S.y(i)});%Finding values of f at all the stationary points
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
title('Constrained Maxima/Minima')"""

volumeofsolidofrevolution = """clc
clc
clear all
syms x

f=input('Enter the function: ');
fL=input('Enter the interval on which the function is defined');
yr=input('Enter the axis of rotation y=c(Enter only c value): ');
iL=input('Enter the integration limits: ');
Volume=pi*int((f-yr)^2, iL(1), iL(2));
disp(['Volume is: ', num2str(double(Volume))])

fx=inline(vectorize(f));
xvals=linspace(fL(1),fL(2),201);
xvalsr=fliplr(xvals);
xivals=linspace(iL(1),iL(2),201);
xivalsr=fliplr(xivals);
xlim=[fL(1) fL(2)+0.5];
ylim=fx(xlim);

figure('Position',[100 200 560 420])
subplot(2,1,1)
hold on;
plot(xvals,fx(xvals), '-b','Linedth',2)

[X,Y,Z]=cylinder(fx(xivals)-yr,100);
figure('Position',[799 299 550 420])
Z=iL(1) +Z.*(iL(2)-iL(1));
surf(Z,Y+yr,X,'EdgeColor','none','FaceColor','flat','FaceAlpha', 0.6)
hold on;
plot([iL(1), iL(2)], [yr yr], '-r', 'LineWidth',2);
xlabel('X-axis');
ylabel('Y-axis');
zlabel('Z-axis');
view(22,11);

"""
area = """clc
clear
syms x
y1 = input('Enter the upper curve as a function of x')
y2 = input('Enter the lower curve as a function of x')
t = solve(y1 - y2,x);
t = double(t);
A = int(y1-y2, t(1), t(2))
D = [t(1) - 0.2, t(2) - 0.2];
ez1 = ezplot(y1, D);
set(ez1, 'color', 'r')
hold on
ezz = ezplot(y2, D);
set(ezz, 'color', 'g')
xv = linspace(t(1),t(2));
y1v = subs(y1, x, xv);
y2v = subs(y2, x, xv);
x = [xv, xv];
y = [y1v, y2v];
fill(x,y, 'b')"""

derivatives = """clc 
clear all
syms x real
f = input('Enter the function f(x) : ');
fx = diff(f,x)
fxx = diff(fx,x)
D = [0,5];
L = ezplot(f,D)
set(L,'color','b');
hold on
h = ezplot(fx, D);
set(h, 'color', 'g');
hold on
e = ezplot(fxx,D);
legend('f', 'fx', 'fxx')
legend('location', 'north east outside')"""

lagrange = 
"""
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
"""

i = input()
try:
    pp.copy(eval(i))
except:
    print("Invalid File name")
