# Coba LoPy Read Canbus Arduino
# dokumentasi : https://docs.pycom.io/firmwareapi/pycom/machine/can/#constructors
import utime
import pycom
pycom.heartbeat(False)
pycom.rgbled(0xf00)
# pycom.pybytes_on_boot(False)

# Init CANBUS

can = CAN(mode=CAN.NORMAL, baudrate=500000, pins=('P22', 'P23'))


def can_cb(can_o):
    utime.sleep(1)
    print('CAN Rx:', can_o.recv())

can.callback(handler=can_cb, trigger=CAN.RX_FRAME)
