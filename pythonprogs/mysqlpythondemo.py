import pymysql as sqltor
""" Demonstrating the MYSQL - Python connector """

#Connector object
mycon = sqltor.connect(host="localhost", user="root", passwd = "12072004ani", database="sqldemo")

#checking whether the database connection is working fine and valid
if mycon.open:
    print("Hehe its working fine!")

#The resultset refers to the logical set of records that are fetched from the database by executing an SQL query and made 
#available to the application program

#A database cursor is a special control object structure that facilitates the row by row processing of records in the resultset
cursor = mycon.cursor()
#The code below will execute the SQL Query and store the retrieved records (the resultset) in the cursor object.
cursor.execute("Select * from student;")

#extracting the data from resultset
data = cursor.fetchall() #returns the rows in tuple form as per the query 
print("Total number of rows received in resultset : ", cursor.rowcount)
for row in data:
    print(row)
print("Cursor at : row ",cursor.rowcount)

#closing the connection
mycon.close()

