#include <SPI.h>

#define CS_PIN 5

void setup() {
  Serial.begin(115200);

  // Configure SPI
  SPI.begin(18, 19, 23, CS_PIN); // SCLK, MISO, MOSI, SS
  pinMode(CS_PIN, OUTPUT);

  digitalWrite(CS_PIN, HIGH); // Deselect slave initially
}

void loop() {
  char dataToSend[] = "Hello Slave!";
  char receivedData[50];
  int dataLength = sizeof(dataToSend);

  digitalWrite(CS_PIN, LOW); // Select the slave
  delay(10);

  for (int i = 0; i < dataLength; i++) {
    receivedData[i] = SPI.transfer(dataToSend[i]); // Send and receive
  }

  digitalWrite(CS_PIN, HIGH); // Deselect the slave
  receivedData[dataLength] = '\0'; // Null-terminate the received string

  Serial.print("Received from Slave: ");
  Serial.println(receivedData);

  delay(1000);
}
