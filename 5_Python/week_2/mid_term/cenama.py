class Star_Cinema:
    __hall_list = []
    def __init__(self) -> None:
        pass

    def entry_hall(self,hall):
        self.__hall_list.append(hall)
    

class Hall(Star_Cinema):
    def __init__(self,rows,cols,hall_no) -> None:
        # Star_Cinema.entry_hall(self)

        self._seats = {} # dictonary
        self._show_list = [] # list of tuples
        self._rows = rows
        self._cols = cols
        self._hall_no = hall_no
        Star_Cinema.entry_hall(self,(rows,cols,hall_no))

    def entry_show(self,id,movie_name,time):
        info = (id,movie_name,time)
        self._show_list.append(info)
        my_matrix = [[0] * self._cols for _ in range(self._rows)]
        self._seats[id]= my_matrix

    def book_seats(self,id,seat_list):
        if id not in self._seats:
            print('\nPlease enter a valid show id.\n')
            return

        if not(1 <= row <= self._rows and 1 <= col <= self._cols):
            print('Please select a valid seat.')
            return
            
        if self._seats[id][row-1][col-1] == 0:
            self._seats[id][row - 1][col - 1] = 1
            print(f'Seat {row,col} booked successfully for the show {id}.')
        else:
            print('Sorry, this seat already booked.')
        


    def view_show_list(self):
        for id,movie_name,time in self._show_list:
            print(f'{id}\t{movie_name}\t{time}')
        print('\n')

    def view_available_seats(self,id):
        # if id in self.seats:
        for a in self._seats[id]:
            print(a)
            






bdara = Star_Cinema()
andd = Hall(10,10,111)
andd.entry_show(111,'AVATER','today 9:30pm')
andd.entry_show(151,'JAVAN','today 6:30pm')

while True:
    print('1. VIEW ALL SHOW TODAY')
    print('2. VIEW AVAILABLE SEATS')
    print('3. BOOK TICKET')
    print('4. EXIT')

    ch = int(input("Enter Option : "))
    if ch == 1: 
        andd.view_show_list()
    if ch == 2:
        id = int(input("Pleaase Enter Movie ID :"))
        andd.view_available_seats(id)
    if ch == 3:
        id = int(input("Pleaase Enter Movie ID :"))
        row = int(input("Pleaase Enter seat row :"))
        col = int(input("Pleaase Enter seat col :"))
        lst = (row,col)
        andd.book_seats(id,lst)
    if ch == 4:
        break
