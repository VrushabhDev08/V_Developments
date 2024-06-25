#include <WiFi.h>


// Replace with your network credentials
const char* ssid = "Room506 507";
const char* password = "9637760123";
void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("Connected to Wi-Fi");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    long speedKbps = WiFi.RSSI(); // Get Wi-Fi speed in kbps
    float speedMbps = speedKbps / 1000.0; // Convert to Mbps

    Serial.print("Wi-Fi Speed: ");
    Serial.print(speedKbps);
    Serial.print(" kbps (");
    Serial.print(speedMbps, 1); // Display Mbps with one decimal point
    Serial.println(" Mbps)");
  } else {
    Serial.println("WiFi not connected");
  }

  delay(5000); // Delay for 5 seconds before checking again
}
