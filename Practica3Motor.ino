void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  if(digitalRead(4)){
    digitalWrite(2, HIGH);
  }
  if(digitalRead(3)){
    digitalWrite(2, LOW);
  }
}
