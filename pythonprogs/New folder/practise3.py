#input : geeksforgeek
#output : geeksfORGEEK
print("word : ", end= ' ')
s = input()
length = int(len(s)/2)
result = ""
for i in range(0, len(s)):
    if(i < length):result = result + s[i]
    if(i>= length):result = result + s[i].upper()
print(result)
