#a file handle
myfile = open(r"E:\VScode\pythonprogs\students.txt","r+")
str = " " #a space is included in the string
while str:
    str = myfile.readline()
    print(str,end="")