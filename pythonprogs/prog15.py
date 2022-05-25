print("Enter 5 words : ")
s = " "
for i in range(1, 5+1):
    if(i == 1):
        s = s + input()
        continue
    s = s+  "_"+ input()
print("Sentence : ", s)
