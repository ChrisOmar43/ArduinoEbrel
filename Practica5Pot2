int potValue = 0;

void LucesSeguidas();
void Prendido(int x);
void Apagado(int x);

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  LucesSeguidas();
}
void LucesSeguidas(){
  Prendido(2);
  Prendido(3);
  Prendido(4);
  Prendido(5);
  Prendido(6);
  Prendido(7);
  Prendido(8);
  Prendido(9);
  Apagado(9);
  Apagado(8);
  Apagado(7);
  Apagado(6);
  Apagado(5);
  Apagado(4);
  Apagado(3);
  Apagado(2);
}
void Prendido(int x){
  potValue = analogRead(A0);
  digitalWrite(x, HIGH);
  delay(potValue);
}
void Apagado(int x){
  potValue = analogRead(A0);
  digitalWrite(x, LOW);
  delay(potValue);
}
