void setup() {
  pinMode(7,INPUT_PULLUP);
  pinMode(10,OUTPUT);
}

void loop() {
  if(digitalRead(7)==LOW)
  {
    digitalWrite(10,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    delay(500);
  }
}
