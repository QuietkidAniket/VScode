""" Create a binary file with roll number, name and marks. Input a roll number and update the marks """
import pickle 

stu1 = {'roll' : 1, 'name' : 'Brian', 'marks' : 97}
stu2 = {'roll' : 2, 'name' : 'Blanca', 'marks' : 98}
stu3 = {'roll' : 3, 'name' : 'Alexandra', 'marks' : 100}

#a file handler in 'append binary +' mode
myfile = open(r'E:\\VScode\pythonprogs\binaryfiledemo.dat','ab+')

#writing records
pickle.dump(stu1, myfile)
pickle.dump(stu2, myfile)
pickle.dump(stu3, myfile)
myfile.close()

#updating a record
myfile2 = open(r'E:\\VScode\pythonprogs\binaryfiledemo.dat','rb+')
myfile2.seek(0)
found = False
try:
    roll = int(input("Enter the roll number to be searched : "))
    marks = int(input("Enter the new marks : "))
    while True:
        location = myfile2.tell()
        rec = dict(pickle.load(myfile2))
        
        if rec['roll'] == roll:
            print(rec, 'updated to -> ', end = '')
            rec['marks'] = marks
            myfile2.seek(location)
            pickle.dump(rec, myfile2) 
            print(rec)
            print("Record updated!")
            found = True
            
            break
        
except EOFError:
    if not found:
        print("Roll Number not found!")
    myfile2.close()
    
     

