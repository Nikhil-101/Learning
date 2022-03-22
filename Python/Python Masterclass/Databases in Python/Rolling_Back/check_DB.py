import sqlite3

conn = sqlite3.connect("./Databases in Python/Rolling_Back/bank_db.sqlite", detect_types=sqlite3.PARSE_DECLTYPES)
for name, balance in conn.execute("SELECT * FROM accounts"):
    print(name, balance)

print("-" * 50)
for time, account, amount in conn.execute("SELECT * FROM transaction_history"):
    print(time, account, amount)