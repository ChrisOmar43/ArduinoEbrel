long d, t;
int i;
void SerieDeLuces();
void Apagado(int x,int y);
void Predido(int x, int y);

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
  SerieDeLuces();
}

void SerieDeLuces(){
  for (i=6; i<=13;i++){
    digitalWrite(2,HIGH);
    delayMicroseconds(10);
    digitalWrite(2,LOW);
    t = pulseIn(4,HIGH);
    d = ((1000*(t/59))/30);
    if(d > 1000)
      d = 1000;
    Serial.print("Deley de ");
    Serial.println(d);
    Prendido(i, d);
  }
  for (i=13; i>=6; i--){
    digitalWrite(2,HIGH);
    delayMicroseconds(10);
    digitalWrite(2,LOW);
    t = pulseIn(4,HIGH);
    d = ((1000*(t/59))/30);
    if(d > 1000)
      d = 1000;
    Serial.print("Deley de ");
    Serial.println(d);
    Apagado(i, d);
  }
}

void Prendido(int x, int y){
  digitalWrite(x, HIGH);
  delay(y);
}
void Apagado(int x, int y){
  digitalWrite(x, LOW);
  delay(y);
}
