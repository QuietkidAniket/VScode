#remove all occurences of a given element from a list
print("Enter the length of the list : ")
n = int(input())
print("Enter the list : ")
a=[]
for i in range(0,n) :
    a.append(input())
print("Enter the element to be removed completely from the list : ")
b = input()
for i in range(0,n):
    if(a[i] == b): a.remove(b)
for i in a : print(i)
