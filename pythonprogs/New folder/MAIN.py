'''Code by Cheesehead'''
import tkinter as tk
from tkinter import *
#global vars
user = 30 # user's marbles
comp = 30 #comp's marbles
userw = 0 #user wager
compw = 0 # comp  wager


mwindow = tk.Tk()
mwindow.title('Marble Dash')
mwindow.geometry("1200x720")
#...................widgets added below............
#labels
tablehead1 = tk.Label(mwindow, text = "PLAYER 1 (YOU)", fg = "blue", bg = "white", width = 40, highlightthickness = 1, highlightbackground = 'black')
tablehead2 = tk.Label(mwindow, text = "PLAYER 2 (CHALLENGER)", fg = "red", bg = "white", width = 40, highlightthickness = 1, highlightbackground = 'black')
table1a = tk.Label(mwindow, text = str(user) , fg = "blue", bg = "white", width = 40, highlightthickness = 1, highlightbackground = 'black')
table2a = tk.Label(mwindow, text = ".....", fg = "red", bg = "white", width = 40, highlightthickness = 1, highlightbackground = 'black')
side1 = tk.Label(mwindow, text = "MARBLES" , fg = "black", width = 10) 
side2 = tk.Label(mwindow, text = "WAGER" , fg = "black", width = 40)
side3 = tk.Message(mwindow, text = "Please choose your guess : " , fg = "black", width = 150).place(x = 50, y= 320)
#Text Boxes
wager = tk.Spinbox(mwindow, from_ = 1, to = 30, width = 30, wrap = True, textvariable = userw)

#BUTTONS
#odd = tk.Radiobutton(mwindow, text = 'ODD', width = 5, height = 0, )
text, choice, v = "", 0, StringVar(mwindow, '1')
odd = tk.Radiobutton(mwindow, text = "ODD", variable= "o",indicator = 0,background = "light blue", width = 10)
even = tk.Radiobutton(mwindow, text = "EVEN", variable = "e", indicator = 0,background = "light blue", width = 10)
wagerbutton = tk.Button(mwindow, text = "WAGER", font = 12, width = 20, height= 5, fg = "White", background = "Green" )
#placements and alignments
tablehead1.place(x = 200, y = 50)
tablehead2.place(x = 500, y = 50)
table1a.place(x = 200, y = 70)
table2a.place(x = 500, y = 70)
side1.place(x = 100, y = 70)
side2.place(x = 10, y = 100)
wager.place(x =200, y = 100)
odd.place(x = 300, y = 320)
even.place(x = 200, y = 320)
wagerbutton.place(x = 700, y = 500)
#infinite loop used to run the application

mwindow.mainloop()
#application continues to run until window is closed
