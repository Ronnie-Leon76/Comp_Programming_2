import serial
import sqlite3
import time


#Python code to be embedded in the machine to read sensor values from the serial ports
print("Welcome to the Heart Rate Monitoring System Interface")
print("Enter your name: ")
name = input()
#print("Opened Database successfully ")

print(" Measure your heart rate ")
ser = serial.Serial('/dev/ttyACM0',baudrate=9600,timeout=.1)
ser.flushInput()
while True:
    try:
        ser_bytes = ser.readline()
        decoded_bytes = float(ser_bytes[0:len(ser_bytes)-2].decode("utf-8"))
        print(decoded_bytes)
    except:
        print("Keyboard Interrupt")
        break


conn = sqlite3.connect('heartBPM.db')
#Insert data to the database
conn.execute("INSERT INTO HeartBeatPerMin (Name,BPM) \
      VALUES (name,decoded_value )");

conn.commit()
conn.close()





