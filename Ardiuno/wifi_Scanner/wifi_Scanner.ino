#include "WiFi.h"

void setup() {
  // Initialize the serial communication
  Serial.begin(115200);

  // Set the ESP32 to station mode (client)
  WiFi.mode(WIFI_STA);
  WiFi.disconnect(); // Disconnect from any previous WiFi connections

  delay(100); // Short delay to ensure WiFi disconnect is processed

  Serial.println("Setup done. Starting WiFi scan...");
}

void loop() {
  Serial.println("Scanning for WiFi networks...");

  // Perform the WiFi scan
  int n = WiFi.scanNetworks();

  if (n == 0) {
    Serial.println("No networks found.");
  } else {
    Serial.printf("%d networks found:\n", n);

    for (int i = 0; i < n; ++i) {
      // Print SSID, signal strength (RSSI), and other details
      Serial.printf("[%d]: %s (%d%) - Channel: %d - Encryption: %s\n", 
                    i + 1, 
                    WiFi.SSID(i).c_str(), 
                    WiFi.RSSI(i),
                    WiFi.channel(i),
                    encryptionType(WiFi.encryptionType(i)));
      delay(10); // Short delay to allow serial buffer to process output
    }
  }

  // Wait a bit before performing another scan
  delay(5000);
}

const char* encryptionType(wifi_auth_mode_t encryptionType) {
  switch (encryptionType) {
    case WIFI_AUTH_OPEN: return "Open";
    case WIFI_AUTH_WEP: return "WEP";
    case WIFI_AUTH_WPA_PSK: return "WPA/PSK";
    case WIFI_AUTH_WPA2_PSK: return "WPA2/PSK";
    case WIFI_AUTH_WPA_WPA2_PSK: return "WPA/WPA2/PSK";
    case WIFI_AUTH_WPA2_ENTERPRISE: return "WPA2 Enterprise";
    default: return "Unknown";
  }
}
