num = int(input("Enter the number of terms to be displayed : "))
a,b = 0,1
for i in range(num):
    print(a,end=" ")
    c = a+b
    a = b 
    b = c