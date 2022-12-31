""" Change the class to XII of any record whose class is XIV. 
Show the no. of students in each class grouped by section."""
import pymysql
#Connector object
myconn = pymysql.connect(host="localhost", user="root", passwd ="12072004ani", database="sqldemo")
#cursor object
cursor = myconn.cursor()
#executing the sql query 
cursor.execute("Update student SET Class = 'XII' WHERE Class = 'XIV'")
cursor.execute("Select Class, Section, count(*) from student group by Class, Section")

#displaying the rows
data = cursor.fetchall()
for row in data:
    print(row)
#closing the connection
myconn.close()