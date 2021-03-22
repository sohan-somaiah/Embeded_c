void setup() {
pinMode(7,INPUT);
pinMode(10,OUTPUT);
}

void loop() {
 if(digitalRead(7)==LOW)
{  
digitalWrite(10,HIGH);
delay(250);
digitalWrite(10,LOW);
delay(250);
digitalWrite(10,HIGH);
delay(250);
digitalWrite(10,LOW);
 }
}
