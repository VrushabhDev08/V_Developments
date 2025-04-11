#include <WiFi.h>
#include <esp_now.h>

void softReset(char command)
{
  if( command == 'r' )
  {
    Serial.print("\nSoft Reset Triggered\n");
    delay(1000);
    ESP.restart();
  }
  else
  {
    Serial.println("Invalid Command");
  }
}
void setup()
{
  Serial.begin(115200);

  //Variable to store mac address
  uint8_t baseMAC[6];

  //Get MAC address WiFi Station Interface
  esp_read_mac(baseMAC,ESP_MAC_WIFI_STA);
  Serial.print("Station MAC:");
  for( int i = 0 ; i < 5 ; i++ )
  {
    Serial.printf("%02X:",baseMAC[i]);
  }
  Serial.printf("%02X",baseMAC[5]);
  
}
void loop()
{
  //Read Data from the Serial Moniter
  if( Serial.available() > 0 )
  {
    char command = Serial.read();
    softReset(command);
  }
}
