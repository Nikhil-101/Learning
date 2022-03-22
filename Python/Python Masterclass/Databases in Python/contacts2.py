# Second SQLITE Program with Python
import sqlite3

db = sqlite3.connect("contacts.db")

# udpating DB value using cursor & get count for number of row changes
update_sql = "UPDATE contacts SET email = 'update@update.com'"
update_cursor = db.cursor()
update_cursor.execute(update_sql)
print("{0} rows updated.".format(update_cursor.rowcount))


# executing querry DB without cursor
for name, number, email in db.execute("SELECT * FROM contacts"):
    print(name, number, email)

db.close()