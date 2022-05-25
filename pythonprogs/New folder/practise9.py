#dictionary
a ={
    2:40,
    5:80,
    1:70,
    3:10,
    4:75,
    6:100
}
#sort on basis of key
for i in sorted(a.keys()):
    print(i,end = " ")
print()
for i in sorted(a.values()):
    print(i,end=" ")
print()
for i in sorted(a):
    print(i,end = " ")
print()
for i in sorted(a.items()):
    print(i,end = " ")


