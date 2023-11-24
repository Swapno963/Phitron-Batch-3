import mysql.connector
mydbconnector = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="password"
)

print(mydbconnector)

db_name = 'python_test_db'
mycurson = mydbconnector.cursor()
sql_query = "CREATE DATABASE " + db_name
mycurson.execute(sql_query)