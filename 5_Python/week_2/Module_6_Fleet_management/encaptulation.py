class Bank:
    def __init__(self,holder_name,inital_deposit) -> None:
        self.holder_name = holder_name
        self.__balance = inital_deposit #prive
        self._branch = 'banani 11' #0 protected

    def deposit(self,amount):
        self.__balance += amount

    def withdraw(self,amount):
        if(amount < self.__balance):
            self.__balance = self.__balance - amount
            return amount
        else:
            return f'Vag, Fokira'
        
    def get_balance(self):
        return self.__balance
        

sm = Bank('swapno', 100)
sm.deposit(20)
print(sm.get_balance())
print(sm._branch)
print(dir(sm)) # This can hack encaptulation