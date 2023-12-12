clc 
clear
syms x y t
F = input("Enter the vector function M(x,y)i + N(x,y)j in the form [M N] ");
M(x,y) = F(1); N(x,y) = F(2);
r = input("Enter the parametric form of the Curve c as [r1(t) r2(t)] : ");
r1 = r(1); r2 = r(2);
% transforming F in terms of r(t) = r1(t)i + r2(t)j
P = M(r1,r2); Q= N(r1,r2);  
% finding dr
dr = diff(r, t);
% F1 = <M(r(t)) , N(r(t)) > . < r1'(t), r2'(t) >
F1 = sum([P, Q] .* dr);
T = input("Enter the limits of t [t1, t2] : ");
t1 = T(1); t2 = T(2);
% integrating F1 wrt t
LHS = int(F1, t, t1, t2);
yl = input("Enter the limits of y as [y1, y2] : ");
y1= yl(1); y2 = yl(2);
xl = input("Enter the limits of x as [x1, x2] : ");
x1= yl(1); x2 = xl(2);
% F2 = dN/dx - dM/dy 
F2 = diff(N,x) - diff(M,y);
% integrating F2 wrt y and x
RHS = int(int(F2, y, y1,y2), x, x1, x2);
if(LHS == RHS)
    disp("LHS : ")
    disp(LHS);
    disp("RHS : ")
    disp(RHS);
    disp("Hence, LHS = RHS proved! ")
end