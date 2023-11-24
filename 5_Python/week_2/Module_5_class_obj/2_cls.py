class pen:
    def __init__(self,name,price,color):
        self.name = name
        self.price = price
        self.color = color
    def full_detail(self):
        print(f'Your pen name is {self.name} It\'s price only {self.price} and it\'s color is {self.color}')


my_pen = pen('Matador',10,'red')
my_pen.full_detail()