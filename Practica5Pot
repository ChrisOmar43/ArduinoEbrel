int potValue;
void Predido();

void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
Serial.begin(9600);
}

void loop() {
  potValue = analogRead(A0);
  Serial.println(potValue);
  Prendido();
}

void Prendido(){
  if(potValue >= 127)
    digitalWrite(2, HIGH);
  else
    digitalWrite(2, LOW);
  if(potValue >= 255)
    digitalWrite(3, HIGH);
  else
    digitalWrite(3, LOW);
  if(potValue >= 383)
    digitalWrite(4, HIGH);
  else
    digitalWrite(4, LOW);
  if(potValue >= 511)
    digitalWrite(5, HIGH);
  else
    digitalWrite(5,LOW);
  if(potValue >= 639)
    digitalWrite(6, HIGH);
  else
    digitalWrite(6,LOW);
  if(potValue >= 767)
    digitalWrite(7, HIGH);
  else
    digitalWrite(7, LOW);
  if(potValue >= 895)
    digitalWrite(8, HIGH);
  else
    digitalWrite(8, LOW);
  if(potValue == 1023)
    digitalWrite(9, HIGH);
  else
    digitalWrite(9, LOW);
}

