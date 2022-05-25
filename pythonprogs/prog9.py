print("Enter the number : ", end = ' ')
num = int(input())
rev = int(0)
copy = int(num)
while(copy > 0):
    dig = copy % 10
    rev = (rev*10) + dig
    copy //= 10
print("In reversed number : ", str(rev))
