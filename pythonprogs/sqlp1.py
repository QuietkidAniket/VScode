"""Insert 1 more row into the student table"""
import pymysql
#Connector object
myconn = pymysql.connect(host="localhost", user="root", passwd ="12072004ani", database="sqldemo")
#cursor object
cursor = myconn.cursor()
#executing the sql query 
cursor.execute("INSERT INTO student"+
 "Values (5,'Katyusha', 'XIV', 'Hacienda Apartment room 67, brooklyn, New york', 7828829802, 'Science');")
#commiting changes to the database 
myconn.commit()
cursor.execute("select * from student;")
#displaying the rows
data = cursor.fetchall()
for row in data:
    print(row)
#closing the connection
myconn.close()