""" Display the records of the already existing Employee table (name, salary, date of joining).
    Then join the employee table and the student table
    and show the name, class, section and salary for each individual. 
    Then show the average salary of each section """
import pymysql
#Connector object
myconn = pymysql.connect(host="localhost", user="root", passwd ="12072004ani", database="sqldemo")
#cursor object
cursor = myconn.cursor()

cursor.execute("SELECT FROM employee;")
#display the rows from employee
data = cursor.fetchall()
print("display the rows from employee : ")
for row in data:
    print(row)

cursor.execute("SELECT employee.name, student.Class, student.Section, employee.salary FROM student, employee "
 " WHERE employee.name = student.Std_Name;")
#display the rows from employee - student join
data = cursor.fetchall()
print("display the rows from employee - student join : ")
for row in data:
    print(row)

cursor.execute("SELECT Section, Avg(employee.salary) FROM employee, student"
 " WHERE employee.name = student.Std_Name GROUP BY Section")
#display the average salary from employee - student join grouped by section
data = cursor.fetchall()
print("display the average salary from employee - student join grouped by section : ")
for row in data:
    print(row)
#closing the connection
myconn.close()