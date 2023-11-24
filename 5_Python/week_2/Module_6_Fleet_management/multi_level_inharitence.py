class Vehicle:
    def __init__(self,name,price) -> None:
        self.name = name
        self.price = price

    def move(self):
        pass

    def __repr__(self) -> str:
        return f'{self.name} {self.price}'



class Bus(Vehicle):
    def __init__(self, name, price,seat) -> None:
        super().__init__(name, price)
        self.seat = seat

    def __repr__(self) -> str:
        return super().__repr__()


class Truck(Vehicle):
    def __init__(self, name, price,weight) -> None:
        super().__init__(name, price)
        self.weight = weight

    
class PickUpTruck(Truck):
    def __init__(self, name, price, weight) -> None:
        super().__init__(name, price, weight)
    

class AcBus(Bus):
    def __init__(self, name, price, seat,temperature) -> None:
        super().__init__(name, price, seat)
        self.temparature = temperature

    def __repr__(self) -> str:
        print(f'{self.seat}')
        return super().__repr__()
    



green_line = AcBus('Green',5000000,22,16)
print(green_line)



