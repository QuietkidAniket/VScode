#input : aniket is a good boy
#output : boy good is aniket
print("enter a sentence with atleast two words")
s = input()
b = s.split(' ')
c = ' '.join(reversed(b))
print(c)
