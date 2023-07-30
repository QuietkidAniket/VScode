x =  int(input())
copy = x
rev = 0
while(copy > 0):
    rev = rev * 10   +  copy%10
    copy //= 10
if(rev == x):
    print(f"{x} is a palindrome number")
else:
    print(f"{x} is not a palindrome number")

