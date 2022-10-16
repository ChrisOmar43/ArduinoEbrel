int potValue, i, ni, numLED, ayuda;
int PredidoConPot();
void LucesSeguidas();
void Prendido(int x);
void Apagado(int x);
void ApagarTodo();

void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(13, INPUT);
}

void loop() {
  potValue = analogRead(A0);
  i = digitalRead(13);

//Ciclo del primer programa
  while(i !=1){
    potValue = analogRead(A0);
    PrendidoConPot();
    i = digitalRead(13);
  }
  ApagarTodo();
  i = 0;
  delay(1000);
//Ciclo del segundo pragrama
  delay(500);
  while(i != 1){
    ayuda = numLED + 2;
    for(ni = 2; ni < ayuda; ni++){
      Prendido(ni);
      if(digitalRead(13)){
        i = 1;
        break;
      }
    }
    for(ni; ni > 1; ni--){
      Apagado(ni);
      if(digitalRead(13)){
        i = 1;
        break;
      }
    }
    i = digitalRead(13);
  }
  
  i = 0;
  delay(1000);
}

int PrendidoConPot(){
  numLED = 0;
  if(potValue >= 127){
    digitalWrite(2, HIGH);
    numLED = 1;
  }
  else{
    digitalWrite(2, LOW);
    numLED = 0;
  }
  if(potValue >= 255){
    digitalWrite(3, HIGH);
    numLED = 2;
  }
  else
    digitalWrite(3, LOW);
  if(potValue >= 383){
    digitalWrite(4, HIGH);
    numLED = 3;
  }
  else
    digitalWrite(4, LOW);
  if(potValue >= 511){
    digitalWrite(5, HIGH);
    numLED = 4;
  }
  else
    digitalWrite(5,LOW);
  if(potValue >= 639){
    digitalWrite(6, HIGH);
    numLED = 5;
  }
  else
    digitalWrite(6,LOW);
  if(potValue >= 767){
    digitalWrite(7, HIGH);
    numLED = 6;
  }
  else
    digitalWrite(7, LOW);
  if(potValue >= 895){
    digitalWrite(8, HIGH);
    numLED = 7;
  }
  else
    digitalWrite(8, LOW);
  if(potValue == 1023){
    digitalWrite(9, HIGH);
    numLED = 8;
  }
  else
    digitalWrite(9, LOW);
  return numLED;
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
void ApagarTodo(){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
}
