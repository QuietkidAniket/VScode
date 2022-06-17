"""Write a program to check if the entered number is Armstrong or not"""
num = int(input("Enter the number : "))
sum = 0
no_of_digits = 0
copy = num
while int(copy) > 0:
    no_of_digits += 1
    copy /= 10
copy = num
for i in range(no_of_digits):
    digit = int(copy%10)
    sum += digit**3
    copy /= int(10)
if num == sum :
    print(num,"is an Armstrong number")
else:
    print(num,"is not an Armstrong number")
