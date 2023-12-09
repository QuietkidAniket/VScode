clc 
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
legend('location', 'north east outside')