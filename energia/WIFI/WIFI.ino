#include<WiFi.h>
char ssid[]="vrush";
char password[]="123456789";
IPAddress ip;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);//intial serial communication
Serial.print("\nAttempting to connect\n");
Serial.print(ssid);
//connect to wifi 

WiFi.begin(ssid,password);
while(WiFi.status()!=WL_CONNECTED)
{
Serial.print(".");
delay(300);  
}
Serial.println("You are connected to the network:");
//wait for the ip address
while(WiFi.localIP()==INADDR_NONE)
{
  Serial.print(".");
  delay(300);
}
ip=WiFi.localIP();
Serial.print("Ip address is:");
Serial.print(ip);
}

void loop() {
  // put your main code here, to run repeatedly: 
  
}
