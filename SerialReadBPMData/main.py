import serial
import sqlite3

ser = serial.Serial('/dev/ttyACM0', baudrate=9600, timeout=.1)

ser.flushInput()

# BPMValues = []

while True:
    try:

        ser_bytes = ser.readline()
        decoded_bytes = float(ser_bytes[0:len(ser_bytes) - 2].decode("utf-8"))
        print(decoded_bytes)
        # BPMValues.append(decoded_bytes)


    except:
        print("Keyboard Interrupt")
        break

"""

for m in BPMValues:
    total = total + m

average = total / (len(BPMValues)


"""


def login(username, password):
    for n in range(3):
        with sqlite3.connect('BPMMonitor.db') as db:
            cursor = db.cursor()
        find_user = "SELECT * FROM UsersBPM WHERE Username = ? AND Password = ?"
        cursor.execute(find_user, [username, password])
        results = cursor.fetchall()

        if results:
            for m in results:
                print("Welcome, " + m[2])
            break
        else:
            again = input("Do you want to try again? [y/n] ")
            if again.lower() == 'n':
                print("Goodbye")
                break
            else:
                continue


def signup(username):
    found = 0
    while found == 0:
        with sqlite3.connect('BPMMonitor.db') as db:
            cursor = db.cursor()
        findUser = "SELECT * FROM UsersBPM WHERE Username = ?"
        cursor.execute(findUser, [username])

        if cursor.fetchall():
            print("User already exists, please try again. ")
        else:
            found = 1

    firstname = input("Enter your firstname: ")
    lastname = input("Enter your lastname: ")
    password1 = input("Enter your password: ")
    password2 = input("Re enter your password once again: ")

    while password2 != password1:
        print("Sorry the two passwords don't match, please try again ")
        password1 = input("Enter your password: ")
        password2 = input("Re enter your password once again: ")
    insert_data = '''INSERT INTO UsersBPM (Username,Firstname,Secondname,Password) VALUES(?, ?, ?, ?)'''
    cursor.execute(insert_data, [username, firstname, lastname, password1])
    db.commit()
    print("Welcome you can now sign in to heart rate monitoring system ")
    username = input("Enter your username: ")
    password = input("Enter your password: ")
    login(username, password)


def main():
    print(" Welcome to the Heart Rate Monitoring System ")
    response = input(" Choose 1 to log in or choose 2 to sign up ")
    if int(response) == 1:
        username = input("Enter your username: ")
        password = input("Enter your password: ")
        login(username, password)
    else:
        username = input("Enter your username: ")
        signup(username)
    conn = sqlite3.connect('BPMMonitor.db')

    # create a cursor
    c = conn.cursor()

    # Update data to the database
    c.execute("UPDATE UsersBPM SET Bpm=? WHERE username=?", (decoded_bytes, username))

    conn.commit()
    conn.close()


main()
