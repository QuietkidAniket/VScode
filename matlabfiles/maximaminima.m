
t = str(input('Enter the function: '));
f = str2func( ['@', t] )
fx=diff(f,x);
fxx=diff(fx,x);
c=solve(fx);
c=double(c);
for i=1,length(c)
    T1=subs(fxx,x,c(i));
    T1=double(T1);
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
end