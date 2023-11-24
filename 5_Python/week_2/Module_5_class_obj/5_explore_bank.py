class Bank:
    def __init__(self,balance):
        self.balance = balance
        self.min_widthdraw = 100
        self.max_widthdraw = 100000

    def get_balance(self):
        return self.balance
    
    def deposit(self,amount):
        if amount > 0:
            self.balance += amount
            print(f'Now your balance is {self.get_balance()}')
    
    def widthdraw(self,amount):
        if amount < self.min_widthdraw:
            print(f'You can not widthdraw less then {self.min_widthdraw}')

        elif amount > self.max_widthdraw:
            print(f"You can not widthdraw more then {self.max_widthdraw} at a time")

        else:
            self.balance -= amount
            print(f'Now your amount is {self.get_balance()}')


brack = Bank(12000)
brack.deposit(3232)