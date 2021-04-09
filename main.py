# Coba LoPy Read Canbus Arduino
# dokumentasi : https://docs.pycom.io/firmwareapi/pycom/machine/can/#constructors

import machine
from machine import CAN


# Init CANBUS

canbus = CAN(mode=CAN.NORMAL, baudrate=500000, pins=('P22', 'P23'))


def can_callback(can_o):
    print('Canbus RX : ', can_o.recv())


canbus.callback(handler=can_callback, trigger=CAN.RX_FRAME)
