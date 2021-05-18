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


#For example:

#can.soft_filter(CAN.FILTER_LIST, [0x100, 0x200, 0x300, 0x400])  # only accept identifiers from 0x100, 0x200, 0x300 and 0x400

#can.soft_filter(CAN.FILTER_RANGE, [(0x001, 0x010), (0x020, 0x030), (0x040, 0x050)])  # only accept identifiers from 0x001 to 0x010, from 0x020 to 0x030 and from 0x040 to 0x050.

#can.soft_filter(CAN.FILTER_MASK, [(0x100, 0x7FF), (0x200, 0x7FC)]) # more of the classic Filter and Mask method.

#can.soft_filter(None)   # disable soft filters, all messages are accepted