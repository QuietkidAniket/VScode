import re
txt =  "hello planet hemsous gogle"
x = re.findall(r"\b[A-z]{5}\b", txt)
print(x)