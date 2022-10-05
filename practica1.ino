//Declarando constantes
const int Z = 1000;
//DeclarandoFunciones
void AyudaSemaforo(int x, int y);
void Semaforo();
void LucesSeguidas8();
void Prendido(int x);
void Apagado(int x);
void Luces2En2();
void Prendido2(int x, int y);
void Apagado2(int x, int y);
void Extremos();
void Semaforo8();
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
  pinMode(10, OUTPUT);
}
//Loop llamando Funciones
void loop() {
  Semaforo();
  LucesSeguidas8();
  Luces2En2();
  Extremos();
  Semaforo8();
}
//Definiendo Funciones
void Semaforo(){
  AyudaSemaforo(5, 5000);
  AyudaSemaforo(6, 2000);
  AyudaSemaforo(7, 5000);
}
void Semaforo8(){
  AyudaSemaforo(2, Z);
  AyudaSemaforo(3, Z);
  AyudaSemaforo(4, Z);
  AyudaSemaforo(5, Z);
  AyudaSemaforo(6, Z);
  AyudaSemaforo(7, Z);
  AyudaSemaforo(8, Z);
  AyudaSemaforo(9, Z);  
}
void AyudaSemaforo(int x, int y) {
  digitalWrite(x, HIGH);
  delay(y);
  digitalWrite(x, LOW);
}
void LucesSeguidas8(){
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
  digitalWrite(x, HIGH);
  delay(1000);
}
void Apagado(int x){
  digitalWrite(x, LOW);
  delay(1000);
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