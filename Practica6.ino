int a = 0, b = 0;
void Crush();
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
  }
  if(b == 0)
    Crush();
  if(digitalRead(2)){
    while(digitalRead(2)){
    }
    a++;
  }
  if(b == 0)
  Crush();
  if(a >= 5){
    digitalWrite(13, HIGH);
    delay(2000);
    digitalWrite(13, LOW);
    a = 0;
  }
}

void Crush(){
  Serial.println("________00000000000___________000000000000_________");
  delay(500);
  Serial.println("______00000000_____00000___000000_____0000000______");
  delay(500);
  Serial.println("____0000000_____________000______________00000_____");
  delay(500);
  Serial.println("___0000000_______________0_________________0000____");
  delay(500);
  Serial.println("__000000____________________________________0000___");
  delay(500);
  Serial.println("__00000_____________________________________ 0000__");
  delay(500);
  Serial.println("_00000_______________FOREVER________________00000__");
  delay(500);
  Serial.println("_00000_____________________________________000000__");
  delay(500);
  Serial.println("__000000______________ALONE______________0000000___");
  delay(500);
  Serial.println("___0000000______________________________0000000____");
  delay(500);
  Serial.println("_____000000____________________________000000______");
  delay(500);
  Serial.println("_______000000________________________000000________");
  delay(500);
  Serial.println("__________00000_____________________0000___________");
  delay(500);
  Serial.println("_____________0000_________________0000_____________");
  delay(500);
  Serial.println("_______________0000_____________000________________");
  delay(500);
  Serial.println("_________________000_________000___________________");
  delay(500);
  Serial.println("_________________ __000_____00_____________________");
  delay(500);
  Serial.println("______________________00__00_______________________");
  delay(500);
  Serial.println("________________________00_________________________");
  delay(500);
  b++;
}
