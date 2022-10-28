int a;
void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  a = analogRead(A0);
  Serial.println(a);
  if(a <= 150)digitalWrite(2, HIGH); else digitalWrite(2, LOW);
  //delay(3000);
}
