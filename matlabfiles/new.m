clc
close all
clear all
x = [0:0.001: 10];
subplot(2,2,1)
plot(x,x.^2,'r','linewidth',2.0)
legend('x^2')
hold on
subplot(2,2,2)
plot(x,sin(x),'b','linewidth',2.0)
legend('sin(x)')
hold on
subplot(2,2,3)
plot(x,cos(x),'g','linewidth',2.0)
legend('cos(x)')
hold on
subplot(2,2,4)
plot(x,exp(x),'c','linewidth',2.0)
legend('exp(x)')
