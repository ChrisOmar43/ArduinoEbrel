int a = 0, b = 0;
void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(a);
  if(b == 0){
    digitalWrite(12, HIGH);
    delay(5000);
    digitalWrite(12,LOW);
    delay(5000);
    digitalWrite(12, HIGH);
    delay(10000);
    digitalWrite(12, LOW);
    b++;
  }
  if(digitalRead(2)){
    while(digitalRead(2)){
    }
    a++;
  }
  if(a >= 5){
    digitalWrite(13, HIGH);
    delay(2000);
    digitalWrite(13, LOW);
    a = 0;
  }
}
