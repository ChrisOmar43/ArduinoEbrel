#include <Servo.h>
Servo servox;

void setup() {
  pinMode(2, OUTPUT);
  servox.attach(3);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
}

void loop() {
  if(digitalRead(12))servox.write(0); if(digitalRead(5)) servox.write(90);
  if(digitalRead(13))digitalWrite(2, HIGH); if(digitalRead(4))digitalWrite(2, LOW);
}
