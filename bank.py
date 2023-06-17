class User:
    def __init__(self,name,id,password) :
        self.name=name
        self.id=id
        self.ac_balance=0
        self.transicition_to=[]
        self.__password=password

    def deposit_amount(self,amount,nominee):
     self.amount=amount
     self.nominee=nominee
    def get_password(self):
       return self.__password
    
    
    def withdraw_amount(self,withdraw_tk):
       if withdraw_tk>self.ac_balance:
          return "bank is bankrupt"
       else:
        self.ac_balance -=withdraw_tk
    def transfer(self,transfer_tk,reciever):
       if transfer_tk>self.ac_balance:
          return "tk nai tui fokir"
       else:
          self.ac_balance -=transfer_tk
          self.transicition_to.append(f"{transfer_tk} to {reciever}")
    def balance_check(self):
       return self.ac_balance
    def req_for_loan(self):
       loan_tk=self.ac_balance*2
       self.ac_balance+=loan_tk
       return f"loan newa hoise {loan_tk}"
class Bank:
    def _init_(self):
        self.users = []
        self.total_tk = 0
        self.loan_tk = 0
        self.loan_enabled = True

    def user_info(self, name):
        new_user = User(name)
        self.users.append(new_user)
        return new_user

    def get_total_tk(self):
        return self.total_tk

    def get_loan_tk(self):
        return self.loan_tk

bank = Bank()
Tanjim = bank.create_user("tanjim")
Rosdania = bank.create_user("rosdania")

Tanjim.deposit_amount(2000)
Tanjim.withdraw_amount(1000)
print(Tanjim.get_password())

Tanjim.transfer(500, Rosdania)

balance = Tanjim.balance_check()
print(f"Tanjim balance: {balance}")


history = Tanjim.get_transaction_to()
print(f"Tanjim transaction history: {history}")
loan_appeal = Tanjim.request_loan()
print(loan_appeal)
admin = User("Admin")
total_balance = bank.get_total_tk()
print(f"Total bank balance: {total_balance}")
loan_tk = bank.req_for_loan()
print(f"Total loan amount: {loan_tk}")
