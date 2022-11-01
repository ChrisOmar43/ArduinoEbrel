long t, d;
void setup() {
  pinMode(4,INPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  digitalWrite(2,LOW);
}

void loop() {
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);
  t = pulseIn(4,HIGH);
  d = t/59;
  Serial.print("Distancia ");
  Serial.print(d);
  Serial.println(" cm");
  delay(200);
  if (d >= 4)
    digitalWrite(6, HIGH);
  else
    digitalWrite(6, LOW);
  if (d >= 8)
    digitalWrite(7, HIGH);
  else 
    digitalWrite(7, LOW);
  if (d >= 12)
    digitalWrite(8, HIGH);
  else 
    digitalWrite(8, LOW);
  if (d >= 16)
    digitalWrite(9, HIGH);
  else 
    digitalWrite(9, LOW);
  if (d >= 20)
    digitalWrite(10, HIGH);
  else 
    digitalWrite(10, LOW);
  if (d >= 23)
    digitalWrite(11, HIGH);
  else 
    digitalWrite(11, LOW);
  if (d >= 26)
    digitalWrite(12, HIGH);
  else 
    digitalWrite(12, LOW);
  if (d >= 30)
    digitalWrite(13, HIGH);
  else 
    digitalWrite(13, LOW);
}
