# finding the nth number in the Fibonacci sequence
# 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ... 
def fib(num):
    if num == 1:
        return 1
    if num == 2:
        return 2
    return fib(num -1) + fib(num - 2)

#__main__
print(fib(5))   #prints 8 as the 5th term of the fibonacci series