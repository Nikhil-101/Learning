import sqlite3

conn = sqlite3.connect("contacts.sqlite")

c = conn.cursor()
newName = "XYZ"
newNumber = "45678"
newEmail = "xyz@email.com"
c.execute("CREATE TABLE IF NOT EXISTS contacts (name TEXT, number TEXT, email TEXT)")
c.execute("INSERT INTO contacts VALUES(?, ?, ?)", (newName, newNumber, newEmail))

print("\n{} number of changes happened\n".format(c.rowcount))

for row in conn.execute("SELECT * FROM contacts"):
    print(row)
# for name, number, email in conn.execute("SELECT * FROM contacts"):
#     print(name:.2f, " | ", number, " | ", email)

c.connection.commit()
c.close()
conn.close()
