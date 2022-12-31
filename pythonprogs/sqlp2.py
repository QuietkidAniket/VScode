"""Change the phone number of roll number 3"""
import pymysql
#Connector object
myconn = pymysql.connect(host="localhost", user="root", passwd ="12072004ani", database="sqldemo")
#cursor object
cursor = myconn.cursor()
#executing the sql query 
cursor.execute("UPDATE student SET Phn_No = '9454728837' where Student_id = 3;")
cursor.execute("Select * from student;")
myconn.commit()
#displaying the rows
data = cursor.fetchall()
for row in data:
    print(row)
#closing the connection
myconn.close()