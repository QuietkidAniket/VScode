"""Create a CSV file by entering user-id and password, read and search the password for given userid"""

import csv 

myfile = open(r"E:\\VScode\pythonprogs\users.csv", "a+", newline='\r\n')
#csv writer object
csvwriter = csv.writer(myfile, delimiter ='|')
#writing records onto the file
csvwriter.writerow(['user-id','password'])
records = [
    ['user1', 'password1'],
    ['user2', 'password2'],
    ['user3', 'password3'],
    ['user4', 'password4'],
    ['user5', 'password5']
]
csvwriter.writerows(records)

#reading and displaying the csv file just created and stored
myfile.seek(0)
csvreader = csv.reader(myfile, delimiter='|')
print("\t CSV file : ")
for record in csvreader:
    print(record)
    
#searching for an inputted user-id
userid = input("Enter the user-id to be searched : ")
myfile.seek(0)
found = False
for record in csvreader:
    if record[0] == userid:
        print(f"{userid} : {record[1]}")
        found = True
        break
if not found:
    print("user-id doesn\'t exist! ")

#closing the file handler
myfile.close()