s = input("Enter the word : ").strip().upper()
reverse = ''.join((reversed(s)))
if reverse == s:
    print(s,"is a palindrome")
else :
    print(s,"is not a palindrome")