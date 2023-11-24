class Company:
    def __init__(self,name,address):
        self.name = name
        self.bus = []
        self.routes = []
        self.drivers = []
        self.counter = []
        self.manager = []
        self.supervisor = []

class Driver:
    def __init__(self,name,license,age) -> None:
        self.licence = license
        self.name = name 
        self.age = age


class Counter:
    def __init__(self) -> None:
        pass

    def purchse_a_ticket(self,start,destination):
        pass    

class Passenger:
    pass


class Supervisor:
    pass


red_miae = Driver('a','232',323)
