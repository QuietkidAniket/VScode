clc
clear all
syms x y
f(x,y) = input("Enter the function f(x,y) : ");
p = diff(f,x); q = diff(f,y);
[ax, ay] = solve(p,q);
ax = double(ax);
ay = double(ay);
r = diff(p,x); s= diff(p,y); t = diff(q,y); D= r*t- s^2;
figure
fsurf(f);
legstr = {'Function Plot'};
for i = 1:size(ax)
    T1= D(ax(i), ay(i));
    T2= r(ax(i), ay(i));
    T3= f(ax(i), ay(i));
    if(double(T1) ==0)
        sprintf('At (%f, %f) further investigation is required', ax(i),ay(i))
        legstr= [legstr, {'case of further investigation'}];
        mkr = 'bv';
    elseif(double(T1) <0)
        sprintf('At point(%f, %f) is a saddle point', ax(i),ay(i))
        legstr = [legstr, {'saddle point'}];
        mkr = 'bv';

    else
        if(double(T2) < 0)
            sprintf('The maximum value of the funciton is f(%f,%f) = %f:',ax(i),ay(i),T3);
            legstr = [legstr, {'Maximum value of the function'}];
            mkr = 'g+';
        else
            sprintf('The minimum value of the funciton is f(%f,%f) = %f:',ax(i),ay(i),T3);
            legstr = [legstr, {'Minimum value of the function'}]
            mkr = 'r*';
        end
    end
    hold on 
    plot3(ax(i), ay(i), T3, mkr, 'LineWidth',4);
end
legend(legstr, 'Location', 'best');


