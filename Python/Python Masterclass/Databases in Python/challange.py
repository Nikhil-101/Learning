import sqlite3
# retrieve row for a user from sqlite

conn = sqlite3.connect("contacts.sqlite")
c = conn.cursor()

name = input("Enter a name: ")
sqlite_query = "SELECT * FROM contacts WHERE name LIKE ?"
c.execute(sqlite_query, (name,))


c.close()
conn.close()