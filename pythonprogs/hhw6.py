"""Write a program to enter the string and to check if it's palindrome or not
using a loop"""
s = input("Enter the word : ").strip().lower()
reverse = ""
#reverse = ''.join((reversed(s)))
#using a loop instead of the above statement
for i in list(s):
    reverse = i + reverse
if reverse == s:
    print(s,"is a palindrome")
else :
    print(s,"is not a palindrome")