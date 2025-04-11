#include <WiFi.h>
#include <WiFiUdp.h>

#define LED_PIN 2 // GPIO for the LED (change if needed)

const char* ssid = "Sonali";         // Replace with your Wi-Fi SSID
const char* password = "123456789";  // Replace with your Wi-Fi password
const char* receiver_ip = "192.168.137.140";      // Replace with the IP address of the receiver ESP32
const int receiver_port = 12345;              // Port for communication

WiFiUDP udp;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("Sender ESP32 Started");

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected.");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
     // Check if there is input in the Serial Monitor
  if (Serial.available() > 0) {
    String message = Serial.readStringUntil('\n'); // Read the input message from the Serial Monitor
    message.trim();  // Remove any extra whitespace

    // Check if message is not empty
    if (message.length() > 0) {
      // Send the message over UDP
      udp.beginPacket(receiver_ip, receiver_port);
      udp.write((const uint8_t*)message.c_str(), message.length());  // Convert string to uint8_t and send
      udp.endPacket();

      Serial.print("Sent: ");
      Serial.println(message);  // Print the sent message in Serial Monitor
    }
}
}
