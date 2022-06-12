#remove the duplicacy in the list
print("Enter the number of elements to be stored in the list : ")
n = int(input())
print("Enter the list ")
a = []
for i in range(0,n):
    a.append(input())
for i in range(0,n-1):
    x = a[i]
    for j in range(i+1,n):
        if(x == a[j]):
           a.remove(a[j])
for i in a :
    print(i)
