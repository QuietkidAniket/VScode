"""calculate the number of students in each class"""
import pymysql
#Connector object
myconn = pymysql.connect(host="localhost", user="root", passwd ="12072004ani", database="sqldemo")
#cursor object
cursor = myconn.cursor()
#executing the sql query 
cursor.execute("Select Class, COUNT(*) As 'No_of_Students' from student group by Class;")

#displaying the rows
data = cursor.fetchall()
for row in data:
    print(row)
#closing the connection
myconn.close()