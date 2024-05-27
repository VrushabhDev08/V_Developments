
int a,b;
void setup() {
  // put your setup code here, to run once:
pinMode(39,OUTPUT);
pinMode(40,OUTPUT);
pinMode(30,OUTPUT);
pinMode(31,INPUT);

}

void loop() {
  
  
  digitalWrite(30,HIGH);
  delay(1000);
  digitalWrite(30,LOW);
  delay(1000);  
 
    digitalWrite(39,HIGH);
     digitalWrite(30,HIGH);
   delay(1000);
  digitalWrite(39,LOW);
  digitalWrite(30,LOW);
  delay(1000); 
  
   digitalWrite(40,HIGH);
  delay(1000);
  digitalWrite(40,LOW);
  delay(1000);
  digitalWrite(40,HIGH);
  digitalWrite(30,HIGH);
  delay(1000);
  digitalWrite(40,LOW);
  digitalWrite(30,LOW);
  delay(1000);
   digitalWrite(40,HIGH);
  digitalWrite(39,HIGH);
  delay(1000);
  digitalWrite(40,LOW);
  digitalWrite(39,LOW);
  delay(1000); 
    digitalWrite(40,HIGH);
     digitalWrite(39,HIGH);
       digitalWrite(30,HIGH);
  delay(1000);
  digitalWrite(40,LOW);
  digitalWrite(39,LOW);
  digitalWrite(30,LOW);
  delay(1000);
 
   
  
}
