class Book:
    def __init__(self,id,name,quantity) -> None:
        self.id = id
        self.name = name
        self.quantity = quantity


class User:
    def __init__(self,id,name,password) -> None:
        self.name = name
        self.id = id
        self.password = password
        self.borrowedBooks = []
        self.returnedBook = []


class Llibrary:
    def __init__(self,name) -> None:
        self.name = name
        self.users = []
        self.books = []

    def addBook(self,id,name,quantity): # add books to library
        book = Book(id,name,quantity)
        self.books.append(book)
        print(f'{name} added successfully! \n')
        
    def addUser(self,id,name,password): # add user to library
        user = User(id,name,password)
        self.users.append(user)
        return user
    
    def borrowBook(self,user,token):
        for book in self.books:
            if book.name == token:
                if book in user.borrowedBooks:
                    print("Already borrowed !\n")
                    return
                elif book.quantity == 0:
                    print("No Copy Available !\n")
                    return
                else:
                    user.borrowedBooks.append(book)
                    book.quantity -= 1
                    print("Borrowed Book Successfull!\n")
                    return
        print(f'Not found any book with name {token}')

    def returnBook(self,user,token):
        for book in self.books:
            if book.name == token:
                if book in user.borrowedBooks:
                    book.quantity += 1
                    user.returnedBook.append(book)
                    user.borrowedBooks.remove(book)
                    print("Returned Book Successfull!\n")
                    
                elif book.quantity == 0:
                    print("No Copy Available !\n")
                    return
        print(f'Not found any book with name {token}')
        




bsk = Llibrary('Biswa shahita slkd')
admin = bsk.addUser(1000,'admin','admin')
ratin = bsk.addUser(17,'ratin',123)
cpBook = bsk.addBook(11,'cp book',5)

currentUser = admin
while True:
    if currentUser == None:
        print('No logged in user\n')

        option = input('Login or Reister : (L/R) :')
        if option == "L":
            id = int(input('Enter id : '))
            password = input('Enter password : ')
            
            match = False
            for user in bsk.users:
                if user.id == id and user.password == password:
                    currentUser = user
                    match = True
                    break
            if match == False:
                print("No user found \n")

        elif option == 'R':
            id = int(input('Enter id : '))
            name = input('Enter name : ')
            password = input('Enter password : ')

            # wheather a user already exist
            for user in bsk.users:
                if user.id == id:
                    print("User already exists \n")

            user1 = bsk.addUser(id,name,password)
            currentUser = user

    else:
        print(f"\nWelcome Back, {currentUser.name}!\n")
        if currentUser.name == 'admin':
            print('Options : \n')
            print('1: add book')
            print('2: add user')
            print('3: Show All Books')
            print('4: Logout')

            ch = int(input("Enter Option : "))
            if ch == 1:
                id = int(input("Enter book id : "))
                name = input('Enter name : ')
                quantity = input('Enter Quantity : ')
                bsk.addBook(id,name,quantity)
            
            if ch == 3:
                for book in bsk.books:
                    print(f'{book.id}\t{book.name}\t{book.quantity}')
                print('\n')

            if ch == 4:
                currentUser = None
        else:
            print('Options : \n')
            print('1: Borrow book')
            print('2: Return Book')
            print('3: Show Borrowed Books')
            print('4: Show History')
            print('5: Logout')

            ch = int(input("Enter Option : "))
            if  ch == 1:
                name = input('Enter Book Name : ')
                bsk.borrowBook(currentUser,name)

            elif ch ==2:
                name = input('Enter Book Name : ')
                bsk.returnBook(currentUser,name)

            elif ch == 3:
                print('\nBorrowed books are : \n')
                for book in currentUser.borrowedBooks:
                    print(f'{book.id}\t{book.name}\t{book.quantity}')
                print('\n')

            elif ch == 4:
                print('\n History : \n')
                for book in currentUser.returnedBook:
                    print(f'{book.id}\t{book.name}\t{book.quantity}')
                print('\n')

            elif ch == 5:
                currentUser = None





            



