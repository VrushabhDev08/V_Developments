int LED =13; // The digital pin to which the LED is connected
void setup ( )
{
pinMode (LED, OUTPUT); //Declaring pin 13 as output pin
}
void loop( ) // The loop function runs again and again
{
digitalWrite (LED, HIGH); //Turn ON the LED
delay(1000); //Wait for 1sec
digitalRead (LED, LOW); // Turn off the LED
delay(1000); // Wait for 1sec

}
