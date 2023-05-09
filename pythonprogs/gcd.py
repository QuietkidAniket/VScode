#prints the greatest common divisor of two numbers
# algorithm : Using Euclid's continuous division method :-
# let a.b be the two numbers such that a>b
# a is first divided by b and then the remainder a%b becomes the divisor for the next division where the dividend would be b.
# similarly this process continues in a fashion where the remainder from the previous division becomes the divisor for the next division
# and the divisor of the previous division becomes the dividend for the next division
# this process continues till the remainder becomes zero
# and the dividend of that division becomes the GCD

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b , a%b)

#__main__
print(gcd(120,90))

