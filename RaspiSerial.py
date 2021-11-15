import serial
import time
ser = serial.Serial('/dev/ttyACM0',9600)
#s = [0,1]
while True:
    read_serial=ser.readline()
    read_serial=str(read_serial)
    read_serial = read_serial.replace("b'","").replace("\\r\\n'","")
    print(read_serial)
    ser.write(str.encode('handshake'))
