import mysql.connector

db_name = "python_test_db"
mydbconnector = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="password",
    database=db_name
)

# print(mydbconnector)

mycurson = mydbconnector.cursor()
sql_query = '''
            CREATE TABLE STUDENT(
                ROLL CHAR(4),
                NAME VARCHAR(50)
            )
            '''
mycurson.execute(sql_query)
print('DONE!')