"""Given two non-negative integers num1 and num2 represented as strings, display the product of num1 and num2, 
also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

--- source Leetcode.com ---

"""
num1 = input("Enter the first number :  ")
num2 = input("Enter the second number : ")
num1,num2 =  num1.strip(), num2.strip() 
#converting the strings into list of characters
l_num1, l_num2= list(num1), list(num2)
num_num1, num_num2 = 0,0
#converting the charlist-converted-strings into the corresponding numbers
for ch in l_num1:
    num_num1 = num_num1 * 10 + (ord(ch) - 48)  # ASCII code of 0 is 48 and 9 is 57
      
for ch in l_num2:
    num_num2 = num_num2 * 10 + (ord(ch) - 48) 
    
product = num_num1 * num_num2
result = str()
#converting the resultant integer into a string
while True:
    digit = product % 10
    if digit == 0:
        result = "0" + result
    else:
        result =  chr(digit+48) + result
    product //= 10
    if product <= 0 : 
        break
print("The product : ",result)