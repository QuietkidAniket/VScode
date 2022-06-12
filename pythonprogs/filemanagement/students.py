"""a python code to maintain stu.dat database file"""
import pickle


"""function to add new students to the database"""
def addstu():
    myfile = open("stu.dat","wb") #file handle
    ans = "y"
    try :
        while ans == "y":
            rollno = int(input("Enter roll number : "))
            name = input("Enter name : ")
            marks = int(input("Enter marks obtained out of 100 : "))
            stu = {"Rollno":rollno,"Name":name,"Marks":marks}
            pickle.dump(stu,myfile)
            ans = input("Do you want to continue? Enter y/n for yes/no")

    except ValueError :
        print("Enter correct and relevant values/data ..... Try again after re-running")
        myfile.close()
    print("Exiting addstu()")
    myfile.close()


"""a function to read the data of students by entering their rollno"""
def findstu():
    myfile = open("stu.dat","rb")
    stu = {# a dictionary to hold the student's data while searching and displaying
    }
    found = False
    try:
        roll = list(eval(input("Enter the roll numbers to be searched : (type roll_1, roll_2, and so on) ")))
        print(roll)
        while True:
            stu = pickle.load(myfile) #reads data line by line and stores each line into stu dictionary
            for r in roll:
                if r == stu["Rollno"]:
                    rollno = stu["Rollno"]
                    name = stu["Name"]
                    marks = stu["Marks"]
                    print(f"Roll NO. : {rollno} \nName : {name} \nMarks : {marks} ")
                    found = True
    except EOFError:
        if found:
            print("Search completed Successfully!")
        else :
            print("Search Failed :( ... Try re-entering the roll numbers")
        myfile.close()
    print("Exiting findstu()")


"""a function for updating the records such that students getting >81 marks are awarded a bonus of 2 marks"""
def update():
    myfile = open("stu.dat","rb+")
    stu = {# a dictionary to hold the student's data while searching and displaying
    }
    found = False
    try :
        while True:
            rpos = myfile.tell() # stores the current position of the file counter
            stu = pickle.load(myfile)
            if stu["Marks"] > 81 :
                stu["Marks"] += 2 
                myfile.seek(rpos) #bringing the file counter to the rpos location
                #updation
                pickle.dump(stu,myfile)#pickling 
                found = True
    except EOFError:
        if found : 
            print("Updation successful!")
        else : 
            print("Updation failed :(")
    myfile.close()               
