import time
#program that computes the sum of numbers 1 to n.

def compute(num):
    if num ==1:
        return 1
    else:
        return (num + compute(num - 1))

#__main__
n = int(input("Enter the number  n : "))
sum = compute(n)
print(sum)



