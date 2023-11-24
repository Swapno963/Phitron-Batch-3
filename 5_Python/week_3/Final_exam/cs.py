from abc import ABC,abstractmethod;
class Account(ABC):
    accounts = []

    def __init__(self,name,accNumber,password,type) -> None:
        self.name = name
        self.accNo = accNumber
        self.passW = password
        self.type = type

        self.balance = 0

        Account.accounts.append(self)

    def deposti(self,amount):
        if amount >=0:
            self.balance += amount
        else:
            print("\nInvalid Amount\n")

    def withdraw(self,amount):
        if amount >=0 and amount <= self.balance:
            self.balance -= amount
        else:
            print("\nInvalid Amount\n")

    #method overloading : akta parameter dial aita activate hobe
    def changeInfo(self,name):
        self.name = name
    
    def changeInfo(self,name,password):
        self.name = name
        self.passW = password

    @abstractmethod #
    def showInfo(self):
        pass




class SavingsAccount(Account):
    def __init__(self, name, accNumber, password, interetRate) -> None:
        super().__init__(name, accNumber, password, "savings")
        self.interestRate = interetRate


    def showInfo(self):
        print(f"Infos of account : {self.name}\nAccount type is {self.type}\nand balance is {self.balance}")

    def applyInterest(self):
        interest = self.balance *(self.iRate/100)
        print(f"Applied interest of {interest}")
        self.deposti(interest)



class SpecialAccount(Account):
    def __init__(self, name, accNumber, password, limit) -> None:
        super().__init__(name, accNumber, password, "special")
        self.limit = limit

    def withdraw(self, amount):
        if amount >=0 and amount <= self.limit:
            self.balance -= amount
        else:
            print("\nInvalid amount\n")

    def showInfo(self):
        print(f"Infos of account{self.name}\nAccount type is {self.type}\nand balance is {self.balance}")

        

currentuser = None
while(True):
    if currentuser == None:
        print("No user loggedin!")
        ch = input("\nLogin Or Regester : (L/R)")
        if ch == 'R':
            name = input("Name : ")
            nu = input("Acc No : ")
            pa = input("Password : ")
            a = input("Saving or Special ? (sv/sp)")
            if a== "sv":
                irate = int(input("Interest rate : "))
                currentuser = SavingsAccount(name,nu,pa,irate)
            elif a =="sp":
                lim = int(input("Limit  : "))
                currentuser = SpecialAccount(name,nu,pa,lim)
            else:
                print("\nInvalid choice\n")
        
        else:
            nu = input("Account num  : ")
            for account in Account.accounts:
                if nu == account.accNo:
                    currentuser = account
                    break


    else:
        print(f"\nWlcome, {currentuser.name}\n")
        if currentuser.type == "savings":
            print("1. Show Info ")
            print("2. Deposit ")
            print("3. Widthdraw ")
            print("4. Apply Intarest ")
            print("5. Change Information ")
            print("6. Log Out ")

            op = int(input("Choose Option : "))
            if op == 1:
                currentuser.showInfo()
            elif op ==2:
                am = int(input("Enter Deposit Amount : "))
                currentuser.deposti(am)
            elif op ==3:
                am = int(input("Enter Deposit Amount : "))
                currentuser.withdraw(am)
            elif op ==4:
                currentuser.applyInterest()
            elif op ==6:
                currentuser = None

        else:
            print("1. Show Info ")
            print("2. Deposit ")
            print("3. Widthdraw ")
            print("5. Change Information ")
            print("6. Log Out ")

            op = int(input("Choose Option : "))
            if op == 1:
                currentuser.showInfo()
            elif op ==2:
                am = int(input("Enter Deposit Amount : "))
                currentuser.deposti(am)
            elif op ==3:
                am = int(input("Enter Deposit Amount : "))
                currentuser.withdraw(am)
            elif op ==6:
                currentuser = None




            

