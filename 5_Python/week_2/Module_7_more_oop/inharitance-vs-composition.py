class Animal:
    pass

class Dog(Animal): # hear we can say dog is a animal
    pass

# composition
class Engi:
    def __init__(self) -> None:
        pass

    def start(self):
        return 'started'
    
class Driver:
    def __init__(self) -> None:
        pass
        

class Car:# car has a engin
    def __init__(self) -> None:
        self.engin = Engi()
        self.driver = Driver

    def start(self):
        self.engin.start()



# another example
class CPU:
    def __init__(self,cors) -> None:
        self.cors = cors

class RAM:
    def __init__(self,size) -> None:
        self.size = size

# computer has a cpu and ran
class Computer:
    def __init__(self,cor,size) -> None:
        self.cpu = CPU(cor)
        self.ram = RAM(size)

mac = Computer(12,16)