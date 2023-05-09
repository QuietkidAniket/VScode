def power(a,n):
    if n == 0:
        return 1
    return a * power(a, n-1)

#__main__
print(power(5,3))
