clc
clear all
syms x
f = input('Enter the function: ');
fL = input('Enter the interval on which the function is defined: '); 
yr = input('Enter the axis of rotation y = c (enter only c value): '); 
iL = input('Enter the integration limits: ');
volume = pi * int((f-yr)^2, iL(1), il(2));
disp(['Volume is :',num2str(double(volume))])
f(x) = inline(vectorize(f));
xvals = linspace(fL(1), fL(2), 201);
xvalr = flipr(rivals);
xlivs = fx(xlim);
figure("Position", [100 200 560 420])
subplot(2,1,1)
hold on;
plot(rvals, fx(xvals), '-b', 'linewidth',2);
[x, y, z ]= cylinder(fx(xvals) - yr, 100);
figure('Position', [700 200 560 420])

