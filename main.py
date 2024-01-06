import os

import serial

from playsound import playsound



if __name__ == '__main__':
    ser = serial.Serial(
        'COM12', 9600
    )
    print("Serial connected")
    while True:
        s = ser.readline().decode("utf-8")
        action = int(s[:s.find('\r')])
        print(action)
        if action !=0 and os.path.exists(f"data/{action}.wav"):
            playsound(f"data/{action}.wav")
