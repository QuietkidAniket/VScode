#dictionary
d1 = {1:"A", 2:"B", 3 : "C", 4:"D", 5:"E"}
for i in d1 :
	print("% i : % s "%(i,d1[i]))
print(d1.keys()," <-- keys, ",d1.values()," <-- values")
d2 = dict(zip([1, 2], ["Aniket", "Kundu"]))
print(d2)
d2.pop(1)
print(d2)
d1.update(d2)
print("Updated : ",d1)