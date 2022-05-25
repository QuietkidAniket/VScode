print("Enter the word : ")
s = input()
if(s.isalnum() and (not s.isalpha()) and (not s.isdigit())): print("True")
else : print("False")
