import sqlite3
import pytz
import datetime

conn = sqlite3.connect("./Databases in Python/Rolling_Back/bank_db.sqlite")
conn.execute("CREATE TABLE IF NOT EXISTS accounts (name TEXT PRIMARY KEY NOT NULL, balance INTEGER NOT NULL)")
conn.execute("CREATE TABLE IF NOT EXISTS transaction_history (time TIMESTAMP NOT NULL, account TEXT NOT NULL,"
             "amount INTEGER NOT NULL,  PRIMARY KEY (time, account))")


class Account(object):

    @staticmethod
    def _current_time():
        return pytz.utc.localize(datetime.datetime.utcnow())

    def __init__(self, name: str, opening_balance: float = 0.0):
        cursor = conn.execute("SELECT name, balance FROM accounts WHERE name=?",(name, ))
        record = cursor.fetchone()
        if record:
            self.name, self._balance = record
            print("Retrieved record for {}".format(self.name))
        else:
            self.name = name
            self._balance = opening_balance
            cursor.execute("INSERT INTO accounts VALUES(?, ?)", (self.name, self._balance))
            cursor.connection.commit()
            print("Account created for {}".format(self.name))
        self.show_balance()

    def _save_update(self, amount):
        new_balance = self._balance + amount
        current_time = Account._current_time()
        conn.execute("UPDATE accounts SET balance=? WHERE name=?", (new_balance, self.name))
        conn.execute("INSERT INTO transaction_history VALUES (?, ?, ?)", (current_time, self.name, amount))
        conn.commit()
        self._balance = new_balance

    def withraw(self, amount: float = 0.0) -> float:
        if 0 < amount <= self._balance:
            # self._balance -= amount
            self._save_update(-(amount))
            print(f"{amount} withrawn")
            return amount
        else:
            print("Please try again, with valid input!!!")
            return 0

    def deposit(self, amount: float = 0.0) -> float:
        if amount > 0:
            # self._balance += amount
            self._save_update(amount)
            print(f"{amount} deposited.")
            return amount
        else:
            print("Please deposit amount greater than ZERO")
            return 0
    
    def show_balance(self):
        print("BALANCE -> ", end="")
        print(f"{self.name}: ", end="")
        cursor = conn.execute("SELECT balance FROM accounts WHERE name=?", (self.name, ))
        balance, = cursor.fetchone()
        print(balance)





if __name__ == "__main__":
    #TODO: TESTING
    nd = Account("Nikhil", 10.0)
    nd.withraw(.10)
    nd.deposit(.20)
    nd.withraw(.10)
    nd.deposit(.50)
    nd.deposit(100)
    nd.withraw(50)
    nd.show_balance()
    abc = Account("Nikhil")