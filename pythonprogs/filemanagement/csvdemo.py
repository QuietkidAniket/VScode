import csv
def writecsv():
    #creating a file handle
    myfile = open(r"E:\VScode\pythonprogs\filemanagement\stu.csv", "w+")
    #creating a csv writer object 
    csvwriter =  csv.writer(myfile, delimiter = "|")
    #writing the first row
    csvwriter.writerow(['Roll no. ','Name ', 'Marks '])
    for i in range(20):
        print(f"Student record {i+1}")
        rollno = int(input("Enter the roll no. : "))
        name = input("Enter the name : ")
        marks = input("Enter the marks : ")
        sturec =  [rollno, name, marks]
        #writing next rows
        csvwriter.writerow(sturec)
        if input("Do you want to enter more values? y/n : ").lower() == "n":
            break
    myfile.close()


def readcsv():
    #creating a file handle
    myfile = open(r"E:\VScode\pythonprogs\filemanagement\stu.csv","r")
    #creating a csv reader object
    csvreader = csv.reader(myfile,delimiter="|")
    for rec in csvreader:
        print(rec)
    myfile.close()

readcsv()