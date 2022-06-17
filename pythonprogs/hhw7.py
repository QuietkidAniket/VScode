"""Recursivly find the factorial of a natural number"""
#a recursive function which returns the factorial of a number
def factorial(n):
    if n == 1:
        return 1
    return n * factorial(n-1)
#main code
num = int(input("Enter the number : "))
print(f"The factorial of {num} is",factorial(num))