""" Write a random number generator that generates random numbers between 1 and 6 (simulates a dice) """

import random

#provding the range of values from which a number is to be selected randomly
dice_numbers = (1,2,3,4,5,6)

ans = 'Y'
while True:
    # random.choice() is a function which returns a random selection from the sequence of elements 
    print(f'Dice rolled . . . . we got {random.choice(dice_numbers)}')
    ans = input('Enter \'Y\' if you want to roll again. Enter anything else if you want to exit ').strip().upper()
    if ans != 'Y':
        print('Invalid input!   Exiting program . . . . . . . . . . . . . . .')
        break


