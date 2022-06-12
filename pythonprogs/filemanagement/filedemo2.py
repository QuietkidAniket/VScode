myfile = open(r"E:\VScode\pythonprogs\filemanagement\file.txt","r+")
str = " "
while str:
    str = myfile.readline()
    print(str,end='')
print('')
myfile = open(r"E:\VScode\pythonprogs\filemanagement\file.txt","r+")
for line in myfile :
    print(line)
myfile = open(r"E:\VScode\pythonprogs\filemanagement\file.txt","r+")
print(myfile.read())
myfile.close()