print("Enter three numbers : ")
a,b,c = int(input()), int(input()), int(input())
gn = int()
if(a>b):
    if(a>c): gn = a
    else : gn = c
else :
    if(b>c):gn = b
    else : gn = c
print("Greatest number : ", gn)
