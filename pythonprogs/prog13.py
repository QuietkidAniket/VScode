print("Enter 10 nubers : ")
min,max = 0,0
for i in range (1 , 10+1):
    num = int(input())
    if(num > max):max = num
    if(i == 1):
        min = num
        continue
    if(num < min):min = num
print("Smallest number : ", min," Greatest number : ", max)
