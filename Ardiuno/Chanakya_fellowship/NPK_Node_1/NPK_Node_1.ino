#include <SoftwareSerial.h>
#include <Wire.h>
#include <WiFi.h>
#include <PubSubClient.h>

#define RE 32
#define DE 33
SoftwareSerial mod(26, 27);

const char* ssid = "Sonali";
const char* password = "123456789";
const char* mqtt_server = "192.168.137.140";
const int mqtt_port = 1883;
const byte nitro[] = {0x01, 0x03, 0x00, 0x1e, 0x00, 0x01, 0xe4, 0x0c};
const byte phos[] = {0x01, 0x03, 0x00, 0x1f, 0x00, 0x01, 0xb5, 0xcc};
const byte pota[] = {0x01, 0x03, 0x00, 0x20, 0x00, 0x01, 0x85, 0xc0};
byte values[11];
WiFiClient espClient;
PubSubClient client(espClient);

long lastMsg = 0;

#define ledPin 2

void connect_mqttServer() {
  while (!client.connected()) {
    if (WiFi.status() != WL_CONNECTED) {
      setup_wifi();
    }

    Serial.print("Attempting MQTT connection...");
    if (client.connect("ESP32_client6")) {
      Serial.println("connected");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" trying again in 2 seconds");
      delay(2000);
    }
  }
}

void setup_wifi() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  mod.begin(9600);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to WiFi");
  pinMode(RE, OUTPUT);
  pinMode(DE, OUTPUT);
  delay(500);
}

byte nitrogen() {
  digitalWrite(DE, HIGH);
  digitalWrite(RE, HIGH);
  delay(100);
  if (mod.write(nitro, sizeof(nitro)) == 8) {
    digitalWrite(DE, LOW);
    digitalWrite(RE, LOW);
    for (byte i = 0; i < 7; i++) {
      values[i] = mod.read();
    }
  }
  return values[4];
}

byte phosphorus() {
  digitalWrite(DE, HIGH);
  digitalWrite(RE, HIGH);
  delay(100);
  if (mod.write(phos, sizeof(phos)) == 8) {
    digitalWrite(DE, LOW);
    digitalWrite(RE, LOW);
    for (byte i = 0; i < 7; i++) {
      values[i] = mod.read();
    }
  }
  return values[4];
}

byte potassium() {
  digitalWrite(DE, HIGH);
  digitalWrite(RE, HIGH);
  delay(100);
  if (mod.write(pota, sizeof(pota)) == 8) {
    digitalWrite(DE, LOW);
    digitalWrite(RE, LOW);
    for (byte i = 0; i < 7; i++) {
      values[i] = mod.read();
    }
  }
  return values[4];
}

void loop() {
   byte val1, val2, val3;
  val1 = nitrogen();
  delay(250);
  val2 = phosphorus();
  delay(250);
  val3 = potassium();
  delay(250);

  Serial.print("Nitrogen: ");
  Serial.print(val1);
  Serial.println(" mg/kg");
  Serial.print("Phosphorus: ");
  Serial.print(val2);
  Serial.println(" mg/kg");
  Serial.print("Potassium: ");
  Serial.print(val3);
  Serial.println(" mg/kg");
   
  String payload1 = String(val1)+" " + String(val2) +" " + String(val3);
  Serial.println(payload1);
  if (!client.connected()) {
    connect_mqttServer();
  }

  client.loop();

  long now = millis();
  if (now - lastMsg > 4000) {
    lastMsg = now;
    String payload = String(val1) + "%" + String(val2) + "%" + String(val3);

    Serial.println(payload);
    //Serial.println("The payload data is ",payload.c_str());
    client.publish("esp32/sensor6", payload.c_str());
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
  setup_wifi();
  pinMode(RE, OUTPUT);
  pinMode(DE, OUTPUT);
  delay(500);
  client.setServer(mqtt_server, mqtt_port);
}
