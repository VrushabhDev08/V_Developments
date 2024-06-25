#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

// Replace with your network credentials
const char* ssid = "Room506 507";
const char* password = "9637760123";

// Replace with your OpenWeatherMap API key and city
const char* apiKey = "c04ebd2c506c424c6e447b74e398cb9a";
const char* city = "London";

void setup() {
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println("Connected to Wi-Fi");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;

    // Construct the URL for the OpenWeatherMap API request
    String url = String("http://api.openweathermap.org/data/2.5/weather?q=") + city + "&appid=" + apiKey + "&units=metric";
    http.begin(url);

    // Send the request
    int httpResponseCode = http.GET();

    // Check the response code
    if (httpResponseCode > 0) {
      String payload = http.getString();
      Serial.println("HTTP Response code: " + String(httpResponseCode));
      Serial.println("Response payload: " + payload);

      // Parse JSON response
      DynamicJsonDocument doc(1024);
      DeserializationError error = deserializeJson(doc, payload);

      if (error) {
        Serial.print("deserializeJson() failed: ");
        Serial.println(error.f_str());
        return;
      }

      // Extract values
      float temp = doc["main"]["temp"];
      const char* weather = doc["weather"][0]["description"];

      // Print extracted values
      Serial.println("Temperature: " + String(temp) + "°C");
      Serial.println("Weather: " + String(weather));
    } else {
      Serial.println("Error on HTTP request: " + String(httpResponseCode));
      Serial.println("Message: " + http.errorToString(httpResponseCode));
    }

    http.end(); // Free resources
  } else {
    Serial.println("WiFi not connected");
  }

  // Wait for 10 minutes before making another request
  delay(600000); 
}
