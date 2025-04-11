#include <WiFi.h>
 
void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  delay(100);
  Serial.println("Starting Wi-Fi jammer...");
 
  // The channel you want to disrupt
  int channel = 6; // Change to any channel from 1-13 as needed
  WiFi.disconnect();
  wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
  esp_wifi_init(&cfg);
  esp_wifi_set_country(&wifi_country_t{"US", 1, 13, WIFI_COUNTRY_POLICY_MANUAL});
  esp_wifi_set_channel(channel, WIFI_SECOND_CHAN_NONE);
 
  Serial.println("Jamming started on channel " + String(channel));
}
 
void loop() {
  // This loop sends de-authentication packets in the background
}
