filehandler = open(r'E:\VScode\pythonprogs\filemanagement\file.txt','r+')
print(filehandler.read(43))
print(filehandler.read(180))#reads next 50 bytes
filehandler.close()