  //DeclarandoFunciones
void Semaforo6();
void Luces2En2();
void Prendido2(int x, int y);
void Apagado2(int x, int y);
void Extremos();
void Intercalado();
//Setup
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
}
//Loop llamando Funciones
void loop() {
  if(digitalRead(11))
  Intercalado();
  if(digitalRead(10))
  Luces2En2();
  if(digitalRead(12))
  Extremos();
  if(digitalRead(13))
  Semaforo6();
}
//Definiendo Funciones
void Intercalado(){
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(5, LOW);
  delay(1000);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(8, LOW);
  delay(1000);
  digitalWrite(6, LOW);
  delay(1000);
  digitalWrite(4, LOW);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
}
void Semaforo6(){
  digitalWrite(2, HIGH);
  digitalWrite(9, HIGH);
  delay(5000);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(3, LOW);
  digitalWrite(9, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  delay(5000);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(2000);
  digitalWrite(8,LOW);
  digitalWrite(4,LOW);
}
void Luces2En2(){
  Prendido2(2, 3);
  Prendido2(4, 5);
  Prendido2(6, 7);
  Prendido2(8, 9);
  Apagado2(9, 8);
  Apagado2(7, 6);
  Apagado2(5, 4);
  Apagado2(3, 2);
}
void Prendido2(int x, int y){
  digitalWrite(x, HIGH);
  digitalWrite(y, HIGH);
  delay(1000);
}
void Apagado2(int x, int y){
  digitalWrite(x, LOW);
  digitalWrite(y, LOW);
  delay(1000);
}
void Extremos(){
  Prendido2(2, 9);
  Prendido2(3, 8);
  Prendido2(4, 7);
  Prendido2(5, 6);
  Apagado2(5, 6);
  Apagado2(4, 7);
  Apagado2(3, 8);
  Apagado2(2, 9);
}
