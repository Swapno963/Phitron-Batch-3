class Shopping:
    def __init__(self,name):
        self.name = name
        self.cart = []
    
    def add_add_to_cart(self,item,price,quantity):
        product = {'item':item,'price':price,'quantity':quantity}
        self.cart.append(product)

    def checkout(self,amount):
        total = 0
        for item in self.cart:
            total += item['price'] * item['quantity']
            print('Your total is {total}')
            if amount < total:
                print(f'Please provide {total - amount} more')
            else:
                extra = amount - total
                print(f'Hear is your items and extra money : {extra}')

swapno = Shopping('swapno')
swapno.add_add_to_cart('alu',43,3)