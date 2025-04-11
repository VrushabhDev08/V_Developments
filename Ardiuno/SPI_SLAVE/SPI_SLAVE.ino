#include <SPI.h>

#define CS_PIN 5

volatile bool dataReceived = false;
char receivedData[50];
char responseData[] = "Hello Master!";

void IRAM_ATTR onSPIReceive() {
  for (int i = 0; i < sizeof(receivedData); i++) {
    receivedData[i] = SPI.transfer(responseData[i]);
  }
  dataReceived = true;
}

void setup() {
  Serial.begin(115200);

  // Configure SPI
  SPI.begin(18, 19, 23, CS_PIN); // SCLK, MISO, MOSI, SS
  pinMode(CS_PIN, INPUT);

  // Attach interrupt for data reception
  attachInterrupt(digitalPinToInterrupt(CS_PIN), onSPIReceive, FALLING);
}

void loop() {
  if (dataReceived) {
    Serial.print("Received from Master: ");
    Serial.println(receivedData);
    dataReceived = false;
  }
}
