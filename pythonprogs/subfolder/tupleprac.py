#exam question
t = tuple(eval(input("Enter the tuple : ")))
l = list(t)
maximum = max(l)
l.remove(maximum)
s_max = max(l)
print("The second greatest element in the tuple is : ",s_max)