class Person:
    def __init__(self,name,age) -> None:
        self.name = name
        self.age = age
    
    def eat(self):
        print('vat murgi')

    def exercise(self): 
        raise NotImplementedError # This will give error if I don't apply in child class


class Cricketer(Person):
    def __init__(self, name, age,team) -> None:
        self.team = team
        super().__init__(name, age)

    def eat(self): # This is called overloading
        print('vegetable')

    def exercise(self):
        print('gam jorca')

    #dander method
    def __add__(self,other):
        return self.age + other.age
    
    #dander method
    def __mul__(self,other):
        return self.age * other.age


sakib = Cricketer('sakib',46,'bd')
musi = Cricketer('musi',36,'bd')
# sakib.eat()
# sakib.exercise()

print(sakib + musi) 
print(sakib * musi) 