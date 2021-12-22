import serial  # import library serial
import time  # import library time
import requests  # import library requests
import json  # import library
arduino = serial.Serial('COM1', 9600)  # serial Port COM1


def ledControl(cmd):
    arduino.write(cmd.encode())


while True:
    rawArd = arduino.readline()
    data = rawArd[0:len(rawArd)-2].decode("utf-8")
    payload = {'username': data, 'password': 'ON'}
    resp = requests.get("http://localhost:800/iot/", params=payload)
    print(resp.text)
