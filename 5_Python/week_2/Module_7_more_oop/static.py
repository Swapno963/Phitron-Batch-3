class Shoping:
    cart = [] # class atribute or static attribute

    def __init__(self,name) -> None:
        self.name = name
    
    def purches(self,item):
        print(f'Your item is {item}')

    @classmethod
    def sudu_dake(self,item):
        print(f'Dakche {item}')
        print(self.name) #But hear We can  access anything of this class

    @staticmethod
    def multi(a,b):
        print(a,b)
        # print(self.name) # We can not access anything of this class

    
bd_city = Shoping('bd_city')
bd_city.purches('lungi')
Shoping.sudu_dake('la la la')