class User:
    def __init__(self,name,age,money) -> None:
        self._name = name
        self.__age = age
        self.__money = money
    

    def age(self):
        return self.__age
    
    @property
    def money(self):
        return self.__money
    
    @money.setter
    def money(self,tk):
        if tk < 0:
            return 'Can not be neg'
        self.__money += tk
    
    
samsu = User('kopa',21,900)
# print(samsu.__age) # we can not access, we need to access
print(samsu.age())

# print(samsu.money())  # decorator (property) ar jonno akn r call kora jabe nah
print(samsu.money)

samsu.money = 234
print(samsu.money)