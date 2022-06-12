import tkinter as tk
from tkinter import filedialog, Text
import os

#setting the root i.e. window
root = tk.Tk()
root.title("File Opener")

apps = []#holds all the filenames of files opened in the current session

#checks is there exists a file named "save.txt" and reads it
#and storing the previously opened files' locations in 'app'-list
if os.path.isfile("save.txt") : 
	with open("save.txt", "r") as f:
		prevApps = f.read()
		prevApps = prevApps.split(",")
		#important line of code :-
		apps = [x for x in prevApps if x.strip()] #strips the filename containing a space


def addApp():
	#refreshes the frame by deleting all the newly added widgets
	for widget in frame.winfo_children():
		widget.destroy()
	#stores file name of the file opened through file explorer window
	filename = filedialog.askopenfilename(initialdir = "/", title = "Select File",
	 filetypes =(("executables","*.exe"),("all files","*.*")))
	apps.append(filename)#stores the file name into 'app'-variable
	print(filename)
	#shows all the file names, contained in 'app'-variable, as labels in window
	for app in apps: 
		label = tk.Label(frame, text = app, bg = "grey")
		label.pack()

def runApps():
	#runs all the files whose filenames are stored in the 'app'-variable
	for app in apps:
		os.startfile(app) #runs the app in the file

#creates a background canvas
canvas = tk.Canvas(root, height = 600, width = 	700, bg = "#263D42")
canvas.pack()

#creates a frame to hold the labels to be displayed
frame = tk.Frame(root, bg = "white")
frame.place(relwidth = 0.8, relheight = 0.7, relx = 0.1, rely = 0.1)

#creates a button with text = 'Open File'
openFile = tk.Button(root, text = "Open File", padx = 10, pady = 5, fg= "white", bg = "#263D42", command = addApp)
openFile.pack()

#creates a button with text = "Run Apps"
runApps = tk.Button(root, text = "Run Apps", padx =10, pady = 5, fg = "white",
	bg = "#263D42", command = runApps)
runApps.pack()

#displays all the apps as labels inside the frame - 'frame'
for app in apps : 
	label = tk.Label(frame, text = app)
	label.pack()
root.mainloop()

#writes the filenames stored in 'app'-var into a file called 'save.txt' just after the window is closed
with open("save.txt", "w") as f:
	for app in apps:
		f.write(app+',')