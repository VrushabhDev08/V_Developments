#include <WiFi.h>
#include <ArduinoOTA.h>

#define LED_PIN 2 // GPIO for the LED (change if needed)

// Wi-Fi credentials
const char* ssid = "Sonali";        // Replace with your Wi-Fi SSID
const char* password = "123456789"; // Replace with your Wi-Fi password

void checkReset()
{
  if(Serial.available() > 0)
  {
    char command = Serial.read();
  if ( command == 'r' )
  {
    ESP.restart();
  }
  }
}
void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("Blink Firmware Activated");

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected.");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  // Initialize OTA
  setupOTA();
}

void loop() {
  // Blink LED
  digitalWrite(LED_PIN, HIGH); // Turn the LED on
  delay(500);
  digitalWrite(LED_PIN, LOW);  // Turn the LED off
  delay(500);
  checkReset();
  // Handle OTA updates
  ArduinoOTA.handle();
}

// Function to configure OTA
void setupOTA() {
  ArduinoOTA.setHostname("ESP32-Blink Host 1"); // Set the device hostname

  ArduinoOTA.onStart([]() {
    String type = ArduinoOTA.getCommand() == U_FLASH ? "sketch" : "filesystem";
    Serial.println("OTA Update Starting: " + type);
  });

  ArduinoOTA.onEnd([]() {
    Serial.println("\nOTA Update Complete. Rebooting...");
  });

  ArduinoOTA.onProgress([](unsigned int progress, unsigned int total) {
    Serial.printf("Progress: %u%%\r", (progress * 100) / total);
  });

  ArduinoOTA.onError([](ota_error_t error) {
    Serial.printf("OTA Error[%u]: ", error);
    if (error == OTA_AUTH_ERROR) Serial.println("Auth Failed");
    else if (error == OTA_BEGIN_ERROR) Serial.println("Begin Failed");
    else if (error == OTA_CONNECT_ERROR) Serial.println("Connect Failed");
    else if (error == OTA_RECEIVE_ERROR) Serial.println("Receive Failed");
    else if (error == OTA_END_ERROR) Serial.println("End Failed");
  });

  ArduinoOTA.begin();
  Serial.println("OTA Ready. Waiting for updates...");
}
