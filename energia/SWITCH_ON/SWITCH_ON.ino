void setup() {
  // put your setup code here, to run once:
  pinMode(31,INPUT_PULLUP);
  pinMode(17,INPUT_PULLUP);
  pinMode(40,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly: 
  if(!digitalRead(31)==HIGH)
  { 
     
      digitalWrite(40,HIGH);
     
  }
  if(!digitalRead(17)==HIGH)
  {
     digitalWrite(40,LOW);
  }
}
