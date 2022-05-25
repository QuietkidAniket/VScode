print("Enter the coefficients a,b,c if ax^2 + bx + c is a quadratic equation : ", end = ' ')
a,b,c = int(input()), int(input()), int(input())
root1 = float ((-b + (b * b - 4*a*c)**1/2)/(2*a))
root2 = float ((-b - (b * b - 4*a*c)**1/2)/(2*a))
print("\n Roots : ", root1,", ", root2)

