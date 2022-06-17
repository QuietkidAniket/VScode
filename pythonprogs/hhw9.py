"""Remove all the lines that contain the character "a" in a file and write it into 
another file"""
#a file handler
myfile = open(r"E:\VScode\pythonprogs\mytxtfile.txt", "r")
newfile = open(r"E:\VScode\pythonprogs\newtxtfile.txt","w+")
str = " "
print("Original file : ")
while str :    
    str =  myfile.readline()
    #printing the original file before adding lines to new file
    print(str, end = "")
    if 'a' not in list(str):
        newfile.writelines(str)
newfile.seek(0)
print("\n\nNew file without \'a\' - containing lines : ")
str = "".join(newfile.readlines())
print(str)
myfile.close()
newfile.close()