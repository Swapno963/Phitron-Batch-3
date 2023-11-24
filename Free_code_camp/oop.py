import csv
class Item:
    pay_rate = 0.8
    all = []
    def __init__(self,name: str,price: float,quantity= 0) -> None:
        # name must be string, price can be both int and float and quantiy can't be other then int

        #Run validations to the received arguments
        assert price >=0, f"Price {price} is not grater than or equal to zero!"
        assert quantity>=0, f"Qunatity {quantity} is not grater than or qual to zero!"

        #Assign to self object
        self.name = name
        self.price = price
        self.quantity = quantity

        # Action to execute
        Item.all.append(self)

    def calculate_total_price(self):
        return self.price * self.quantity
    
    def apply_discount(self):
        self.price = self.price * self.pay_rate
    
    @classmethod
    def instantiate_from_csv(cls):
        with open("items.csv",'r') as f:
            reader = csv.DictReader(f)
            items = list(reader)
        for item in items:
            Item(
                name = item.get("name"),
                price = float(item.get("price")),
                quantity = int(item.get("quantity")),
            )
        
    @staticmethod    
    def is_integer(num):
        # we will count out that floats athat are point zero : 5.0,6.0
        if isinstance(num, float):
            return num.is_integer()
        elif isinstance(num,int):
            return True
        else: 
            return False
            



    def __repr__(self) -> str:
        return f"{__class__.__name__}('{self.name}', {self.price}, {self.quantity})"
    


# print(Item.pay_rate) # class attribute
# print(item1.pay_rate) # py first try to bring from instance leve, if it doesn't find then goes to class level



# print(Item.__dict__) # All the attribute for class level
# print(item1.__dict__) # All the attribute for instance level

# item1.apply_discount() # apply discount from class level
# print(item1.price)

# item2.pay_rate = 0.7
# item2.apply_discount() # it won't go for class level
# print(item2.price)
        
# print(Item.all)
# for instance in Item.all:
#     print(instance.name)

# Item.instantiate_from_csv()
# print(Item.all)

print(Item.is_integer(7.5))