#include <SPI.h> //Library for using SPI Communication
#include <mcp2515.h> //Library for using CAN Communication

struct can_frame canMsg;
MCP2515 mcp2515(10);


void setup() {
  while (!Serial);

  Serial.begin(9600);
  SPI.begin(); //Begins SPI communication

  mcp2515.reset();
  mcp2515.setBitrate(CAN_500KBPS, MCP_8MHZ); //Sets CAN at speed 500KBPS and Clock 8MHz
  mcp2515.setNormalMode();
}

void loop() {
  int val0  = random(100, 500);
  int val1 = random(1, 10);
  int val2  = random(100, 500);
  int val3  = random(100, 500);
  int val4  = random(100, 500);
  int val5  = random(100, 500);
  int val6  = random(100, 500);
  int val7  = random(100, 500);

  canMsg.can_id = 0x024; //CAN id as 0x036
  canMsg.can_dlc = 8; //CAN data length as 8
  canMsg.data[0] = val0; //Update humidity value in [0]
  canMsg.data[1] = val1; //Update temperature value in [1]
  canMsg.data[2] = val2; //Rest all with 0
  canMsg.data[3] = val3;
  canMsg.data[4] = val4;
  canMsg.data[5] = val5;
  canMsg.data[6] = val6;
  canMsg.data[7] = val7;
  mcp2515.sendMessage(&canMsg); //Sends the CAN message'

  delay(500);

  canMsg.can_id = 0x062;
  canMsg.can_dlc = 8; //CAN data length as 8
  canMsg.data[0] = val0; //Update humidity value in [0]
  canMsg.data[1] = val1; //Update temperature value in [1]
  canMsg.data[2] = val2; //Rest all with 0
  canMsg.data[3] = val3;
  canMsg.data[4] = val4;
  canMsg.data[5] = val5;
  canMsg.data[6] = val6;
  canMsg.data[7] = val7;
  mcp2515.sendMessage(&canMsg); //Sends the CAN message'

  canMsg.can_id = 0x092;
  canMsg.can_dlc = 8; //CAN data length as 8
  canMsg.data[0] = val0; //Update humidity value in [0]
  canMsg.data[1] = val1; //Update temperature value in [1]
  canMsg.data[2] = val2; //Rest all with 0
  canMsg.data[3] = val3;
  canMsg.data[4] = val4;
  canMsg.data[5] = val5;
  canMsg.data[6] = val6;
  canMsg.data[7] = val7;
  mcp2515.sendMessage(&canMsg); //Sends the CAN message'

  canMsg.can_id = 0x018;
  canMsg.can_dlc = 8; //CAN data length as 8
  canMsg.data[0] = val0; //Update humidity value in [0]
  canMsg.data[1] = val1; //Update temperature value in [1]
  canMsg.data[2] = val2; //Rest all with 0
  canMsg.data[3] = val3;
  canMsg.data[4] = val4;
  canMsg.data[5] = val5;
  canMsg.data[6] = val6;
  canMsg.data[7] = val7;
  mcp2515.sendMessage(&canMsg); //Sends the CAN message'

  canMsg.can_id = 0x10;
  canMsg.can_dlc = 8; //CAN data length as 8
  canMsg.data[0] = val0; //Update humidity value in [0]
  canMsg.data[1] = val1; //Update temperature value in [1]
  canMsg.data[2] = val2; //Rest all with 0
  canMsg.data[3] = val3;
  canMsg.data[4] = val4;
  canMsg.data[5] = val5;
  canMsg.data[6] = val6;
  canMsg.data[7] = val7;
    mcp2515.sendMessage(&canMsg); //Sends the CAN message'

  canMsg.can_id = 0x005;
  canMsg.can_dlc = 8; //CAN data length as 8
  canMsg.data[0] = val0; //Update humidity value in [0]
  canMsg.data[1] = val1; //Update temperature value in [1]
  canMsg.data[2] = val2; //Rest all with 0
  canMsg.data[3] = val3;
  canMsg.data[4] = val4;
  canMsg.data[5] = val5;
  canMsg.data[6] = val6;
  canMsg.data[7] = val7;
  mcp2515.sendMessage(&canMsg); //Sends the CAN message'

  canMsg.can_id = 0x009;
  canMsg.can_dlc = 8; //CAN data length as 8
  canMsg.data[0] = val0; //Update humidity value in [0]
  canMsg.data[1] = val1; //Update temperature value in [1]
  canMsg.data[2] = val2; //Rest all with 0
  canMsg.data[3] = val3;
  canMsg.data[4] = val4;
  canMsg.data[5] = val5;
  canMsg.data[6] = val6;
  canMsg.data[7] = val7;
  mcp2515.sendMessage(&canMsg); //Sends the CAN message'

  canMsg.can_id = 0x012;
  canMsg.can_dlc = 8; //CAN data length as 8
  canMsg.data[0] = val0; //Update humidity value in [0]
  canMsg.data[1] = val1; //Update temperature value in [1]
  canMsg.data[2] = val2; //Rest all with 0
  canMsg.data[3] = val3;
  canMsg.data[4] = val4;
  canMsg.data[5] = val5;
  canMsg.data[6] = val6;
  canMsg.data[7] = val7;
  mcp2515.sendMessage(&canMsg); //Sends the CAN message'


}
