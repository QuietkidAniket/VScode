"""Given a roman numeral convert it into integer and display (Range - 0< roman numeral value <5000)"""

s = input("Enter the Roman Number : ").upper().strip()
roman = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
digit = 0
number = 0
prev = roman[s[0]]
for ch in s:
    digit = roman[ch]
    if prev < digit:  number = number + digit - 2 * prev  
    else:   number = number + digit
    prev = digit
print(number)
    