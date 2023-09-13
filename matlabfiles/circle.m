X = input("Enter the x coordinate of the circle : ");
Y = input("Enter the y coordinate of the circle : ");
r = input("Enter the radius of the circle : ");
theta = linspace(0, 2*pi, 1000);
x =  X + r*cos(theta);
y = Y + r*sin(theta);
plot(x,y,'r');