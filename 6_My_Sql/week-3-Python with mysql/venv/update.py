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
            UPDATE STUDENT
            SET NAME='SIMANTO'
            WHERE NAME='Swapno Mondol'
            '''
mycurson.execute(sql_query)
mydbconnector.commit()
print('DONE!')