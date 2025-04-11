// For bit manuplation using the macros 
#include <WiFi.h>

#define Set_bit
int SET_LEDBUILTIN ;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  SET_LEDBUILTIN = LED_BUILTIN || 1;
  Serial.printf("Led %d",SET_LEDBUILTIN);
  pinMode(SET_LEDBUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println(SET_LEDBUILTIN);
  digitalWrite(SET_LEDBUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(SET_LEDBUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
