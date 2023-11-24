class Acount:
    accounts = []
    def __init__(self,name,email,address,account_num,account_type,) -> None:
        self.name = name
        self.email = email
        self.address = address
        self.account_number = account_num
        self.account_type = account_type

        self.balance = 0
        self.loan = []
        self.transfer_history = []
        self.can_take_loan = 2
        self.is_backrupt = False
        self.load_feature = True


    # saving account
        Acount.accounts.append(self)
    def deposit(self,amount):
        self.balance += amount
        print(f"{amount} added to your balance, Now your balance is {self.balance}")

    def withdraw(self,amount):
        if self.is_backrupt:
            print("bank is bankrupt")
            return
        if amount > self.balance:
            print("Withdrawal amount exceeded")
        else:
            self.balance -= amount
            print(f"{amount} withdraw successfully. Now your balance is : {self.balance}")

    def check_balance(self):
        print(f"\n{self.name} your available blance is {self.balance}\n")

    def take_loan(self,amount):
        if self.can_take_loan >= 1:
            print(f'\n{amount}, Loan taken')
            self.can_take_loan -= 1
            self.loan.append({'name':self.name,'amount':amount})
            print(f'\n{amount} Loan taken, You Can take Only {self.can_take_loan} Times.\n')
        else:
            print("\n\nYou can't take loan!\n\n")


    def show_tranaction_history(self):
        # print("Not implemented")
        if len(self.transfer_history) == 0:
            print("\n-----------------There is no transaction history--------------\n\n")
        else:
            for ts in self.transfer_history:
                print(f"From : {ts['From']}, To : {ts['To']}, Transfer Amount : {ts['Amount']}\n")


    def transfer_amount(self,name,amount):
        is_send = False
        for account in Acount.accounts:
            if account.name == name:
                account.balance += amount
                self.balance -= amount
                is_send = True
                self.transfer_history.append({'From':self.name,'To':name,'Amount':amount})
        if is_send == False:
            print("\nSorry, Account does not exist\n")



    #admin feature
    def declear_bankrupt(self,status):
        self.is_backrupt = status
    
    def Bank_status(self):
        print("\n---------------BANK STATUS----------------")
        if(self.is_backrupt == True):
            print(f"Currently :Bank is Banrupt!")
        else:
            print(f"Currently :Bank is Not Banrupt!")


    def delete_account(self,account_name):
        is_deleted = False
        for acount in Acount.accounts:
            if acount.name == account_name:
                Acount.accounts.remove(acount)
                is_deleted = True
            
        if is_deleted == True:
            print(f"\nAccount: {account_name} is deleted")
        else:
            print(f'\nThere is no account named :{account_name}')

    def see_all_user_account(self):
        print("\n################ ALL USER ACCOUNTS ###############\n")
        count  = 1
        for account in Acount.accounts:
            print(f'{count} : {account.name}\t{account.address}\t{account.account_type}')
            count += 1
        print("\n\n")

    def check_total_balance(self):
        total_balance = 0
        for account in Acount.accounts:
            total_balance += account.balance

        print(f"\nTotal Balance of The Bank is {total_balance}\n")

    def check_total_loan(self):
        # print("Not Implemented")
        total = 0
        for lo in self.loan:
            total += lo['amount']
        print(f"\n\nWe have Total Loan of {total}\n\n")


    def loan_feature_status(self,status):
        self.load_feature = status
        if self.load_feature == True:
            print("\nLoan feature Activated\n")
        else:
            print("\nLoan feature De-activated\n")





current_user = None
user = 1
while True:
    if current_user == None:
        print("\n\n\nLet's Login To BANK!!\n")
        name = input('Enter Name : ')
        email = input('Enter Email : ')
        address = input('Enter Address : ')
        op = input("Account type? saving or current or admin? (sa/cu/ad)")
        if op == "sa":
            current_user = Acount(name,email,address,name+"-"+str(user),"saving")
            user += 1
        elif op == "cu":
            current_user = Acount(name,email,address,name+"-"+str(user),"current") 
            user += 1  
        elif op == "ad":
            current_user = Acount(name,email,address,name+"-"+str(user),"admin")
            user += 1
        else:
            print("\nInvalid choice\n")




    else: # have current user
        if current_user.account_type == 'admin':
            print("\n\nWelcome back Admin,\n")
            print("1. Delete Account ")
            print("2. See All User Account ")
            print("3. Check Total available Balance ")
            print("4. Check Total Loan ")
            print("5. Edit Loan Feature (on/off)")
            print("6. Delaear Bankrup")
            print("7. Log Out")
            op = int(input("Select An Option :- "))
            if op == 1:
                print("\nYour Can Delete : \n")
                for account in Acount.accounts:
                    print(f"{account.name}---{account.email}\n")
                    
                print("\n")
                name = input('Plese Enter Delete Acount Name : ')
                current_user.delete_account(name)
            elif op == 2:
                current_user.see_all_user_account()
            elif op == 3:
                current_user.check_total_balance()
            elif op == 4:
                current_user.check_total_loan()
            elif op == 5:
                status = input('(on/off): ')
                if status =='on':
                    current_user.loan_feature_status(True)
                if status =='off':
                    current_user.loan_feature_status(False)
                else:
                    print("Plese enter between (on/off)")
            elif op == 6:
               
                current_user.Bank_status()

                status = input('(on/off): ')
                if status =='on':
                    current_user.declear_bankrupt(True)
                    current_user.Bank_status()
                if status =='off':
                    current_user.declear_bankrupt(False)
                    current_user.Bank_status()
                else:
                    print("Plese enter between (on/off)")
            elif op == 7:
                current_user = None
            else:
                print("You gave wrong input!")


        else: # hear user is not adming
            print("1. Check Balance ")
            print("2. Deposit ")
            print("3. Withdraw ")
            print("4. Check Transfer History ")
            print("5. Take Loan ")
            print("6. Transfer Amount ")
            print("7. Log Out")


            op = int(input("Select An Option :- "))
            if op == 1:
                current_user.check_balance()
            elif op == 2:
                amount = int(input('Plese Enter Deposit Amount : '))
                current_user.deposit(amount)
            elif op == 3:
                amount = int(input('Plese Enter Withdraw Amount : '))
                current_user.withdraw(amount)
            elif op == 4:
                current_user.show_tranaction_history()
            elif op == 5:
                loan_amount = int(input('Enter load amount : '))
                current_user.take_loan(loan_amount)
            elif op == 6:

                print("\nYour can send to \n")
                for account in Acount.accounts:
                    if current_user.name != account.name:
                        print(f"{account.name}---{account.email}\n")

            
                name = input('Plese Enter Transfer Amount Name : ')

                amount = int(input('Plese Enter Transfer Amount : '))
                current_user.transfer_amount(name,amount)
            elif op == 7:
                current_user = None
                print("\n\nLog Out Successfully!!\n\n\n")
            else:
                print("You gave wrong input!")

