import time
import sys
from termcolor import colored, cprint
print("...........Here is the text ..........")
print("Hello")

text = colored('This text is in red color', 'green', attrs=['reverse','blink'])
print(text)

print("Now wait",end=" ")
for i in range(6):
	print(".",end=" ")
	time.sleep(1)
print("<< Now ready >>")