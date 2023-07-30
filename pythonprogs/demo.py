n = int(input())
arr = list()
try:
    while True:
        arr.append(int(input()))
except:
    check = False
    if n>= 2 and n <= 10:
        for i in arr:
            if i >= -100 and i<=100:
                check = True
    if check == True:
        print(sorted(arr)[len(arr) - 2]) 


