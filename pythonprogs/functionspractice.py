def calcsum(x,y,z=12):
    print("Name : ",__name__)
    return x + y +z
#_main_ : -
num1 = int(input("Enter the first number : "))
num2 = int(input("Enter the second number : "))
print(calcsum(1,2))
print(calcsum(1,2,0))
print(calcsum(1,2,z = 10))
print("Name : ",__name__)
