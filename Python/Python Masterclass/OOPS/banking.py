class BANK:
    """
        A Banking and accounting testing program for fun
    
    Attributes:
        name (str): store name of the account holder
        __balance (int): the savings account balance
        acc_log (list): stores the transactional history of the account
    """

    def __init__(self, name, amount):
        """BANK init method
        
        Args:
            name (str): initialize the 'name' attribute
            __balance (int): initialize the balance of the account with oppening funds
            acc_log (list):  
        """
        self.name = name
        self.__balance = 0
        self.acc_log = []
        if amount > 0:
            print("Initial ", end="")
            self.deposit(amount)

    def deposit(self, amount):
        if amount > 0:
            print("Money Deposited: {}".format(amount))
            self.__balance += amount
            self.acc_logging(amount, self.__balance)
            self.show_balance()

    def withraw(self, amount):
        if 0 < amount < self.__balance:
            print("Money Withrawn: {}".format(amount))
            self.__balance -= amount
            self.acc_logging(-amount, self.__balance)
            self.show_balance()
        else:
            print("Transaction Cancelled: Not Enough Money")

    def show_balance(self):
        print("Balance: {}".format(self.__balance))

    def acc_logging(self, amount, balance):
        if amount > 0:
            self.acc_log.append(('Deposited', amount, balance))
        elif amount < 0:
            self.acc_log.append(('Withrawn ', -amount, balance))
    
    def show_log(self):
        print("Logs of Name: {}".format(self.name))
        i = 1
        for method, amount, balance in self.acc_log:
            print("{}. {}: {:4} || Balance: {}".format(i, method, amount, balance))
            i += 1

nd = BANK("Nikhil", 1000)
nd.deposit(500)
nd.deposit(500)
nd.withraw(1000)
nd.show_log()
nd.__balance = 10
# nd._BANK__balance = 10
nd.show_balance()
print(nd.__dict__)
a = nd

# ques = True
# choice = 10
# # print("Welcome to our BANK")
# while ques == True:
#     print("Choose the option to continue")
#     if choice == 1:
#         object_ref = 2
help(BANK)