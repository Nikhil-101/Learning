# First SQLITE Program with Python
import sqlite3
print("DB Opened")
db = sqlite3.connect("contacts.db")
db.execute("CREATE TABLE IF NOT EXISTS contacts (name TEXT, number TEXT, email TEXT)")
db.execute("INSERT INTO contacts VALUES('Nikhil', '7018419491', 'nikhil@gmail.com')")
db.execute("INSERT INTO contacts VALUES('Chhaya', '9736120027', 'chhaya@gmail.com')")

c = db.cursor()
c.execute("SELECT * FROM contacts")
# print(c.fetchall())
print(c.fetchone())
print(c.fetchone())
for row in c:
    print(row)

c.close()
db.commit()
print("DB Closing")
db.close()
print("DB Closed")