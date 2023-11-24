from abc import ABC, abstractmethod
class Animal(ABC):
    @abstractmethod # Enforce all derived class to have a method
    def eat(self):
        print('I am eating')

    @abstractmethod
    def move(self):
        pass


class Monkey(Animal):
    def __init__(self,name) -> None:
        self.categori = 'monky'
        self.name = name
        super().__init__()
        
    def eat(self):
        print("eating")

    def move(self):
        print('Moving')

ab = Monkey('pm')
ab.eat()