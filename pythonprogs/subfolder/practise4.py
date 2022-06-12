print("enter one string")
a = input()
print("enter the string to be compared")
b = input()
sum = 0
for i in range(0, len(a)):
    c = 0
    for j in range(0, len(b)):
        if(a[i] == (b[j])):c += 1
    if(c > 0):sum += 1
print(sum)
