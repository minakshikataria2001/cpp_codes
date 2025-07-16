class Bank:
    def __init__(self,acc_no,balance):
        self.balance = balance
        self.acc_no = acc_no
        
        print(f"you are successfully logined your current ammount is {self.balance}")
    
    
        else:    
            self.balance -= self.balance
            print(f"your current balance is {self.balance}")

    def creadit(self,ammount):
        if ammount > self.balance:
            print("insufficient balance")

        else:
            self.balance += self.balance
            print(f"your current balance is {self.balance}")


try_1 = Bank(12345,1200)
try_1.debit(1000)
