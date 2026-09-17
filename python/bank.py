class Bank:
    def openAccount(self,acno,cname,balance):
        self.acno=acno
        self.cname=cname
        self.balance=balance
        print("hello",cname,"your acc no",acno,"is open with",balance,"Rs:")
    def deposit(self,amount):
        self.balance=self.balance+amount
        if amount<=self.balance+amount
    def withdraw(self,amount):
        if amount<=self.balance:
            self.balance=self..balance-amount
        else:
            print("sorry you required" amount-self.balance,"Rs")
        def checkBalance(self):
            print("current balance is:,",self.balance)
