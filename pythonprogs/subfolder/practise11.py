#merging two dictionaries
a ={
    2:40,
    5:80,
    1:70,
    3:10,
    4:75,
    6:100
}
b = {
    7:10,
    8:16,
    9:40,
    10:50
}
#a.update(b)
#print(a)
#or
c = {**a,**b}
print(c.items())
