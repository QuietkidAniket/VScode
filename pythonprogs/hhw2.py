num = int(input("Enter the number : "))
sum_of_divisors = 0
for i in range(1,int(num/2)+1):
    if num % i == 0 :
        sum_of_divisors += i
if sum_of_divisors == num :
    print(num,"is a perfect number")
else:
    print(num,"is not a perfect number")
