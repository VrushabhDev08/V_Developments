#include <ArduinoOTA.h>

#include <CAN.h> // Install "CAN" library from Arduino Library Manager

#define CAN_TX_PIN GPIO_NUM_5 // Set your CAN transceiver TX pin
#define CAN_RX_PIN GPIO_NUM_4 // Set your CAN transceiver RX pin

void setup() {
  Serial.begin(115200);
  while (!Serial); // Wait for Serial to initialize
  
  // Initialize CAN with a baud rate of 500 kbps
  if (!CAN.begin(500E3)) { 
    Serial.println("Starting CAN failed!");
    while (1);
  }
  
  // Set CAN RX/TX pins
  CAN.setPins(CAN_RX_PIN, CAN_TX_PIN);
  Serial.println("CAN initialized successfully");
}

void loop() {
  // Prepare a CAN message
  CAN.beginPacket(0x123); // 0x123 is the CAN ID
  CAN.write(0x01);        // First byte of data
  CAN.write(0x02);        // Second byte of data
  CAN.write(0x03);        // Third byte of data
  CAN.endPacket();        // Finalize and send the packet

  Serial.println("CAN message sent!");
  
  delay(1000); // Delay between sending messages
}
