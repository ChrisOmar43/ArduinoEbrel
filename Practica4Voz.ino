#include <SoftwareSerial.h>
String voz;
void modoFiesta();

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  voz = Serial.readString();
  
  if(voz == "azul" || voz == "prender el azul" || voz == "prender azul")
    digitalWrite(4, HIGH);
  if(voz == "amarillo" || voz == "prender el amarillo" || voz == "prender amarillo")
    digitalWrite(3, HIGH);
  if(voz == "verde" || voz == "prender el verde" || voz == "prender verde")
    digitalWrite(2, HIGH);
    
  if(voz == "apagar el azul" || voz == "Apagar azul")
    digitalWrite(4, LOW);
  if(voz == "apagar el amarillo" || voz == "Apagar amarillo")
    digitalWrite(3, LOW);
  if(voz == "apagar el verde" || voz == "Apagar verde")
    digitalWrite(2, LOW);


  if(voz == "prender todos" || voz == "prender todo"){
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
  }
  if(voz == "Apagar todo" || voz == "Apagar todos"){
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
  }
  
  if(voz == "fiesta" || voz == "modo fiesta" || voz == "tú no eres bebecita tú eres bebesota")
    modoFiesta();
}

void modoFiesta(){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    
    while(voz == "fiesta" || voz == "modo fiesta" || voz != "Apagar modo fiesta" || voz == "tú no eres bebecita tú eres bebesota"){
      digitalWrite(2, HIGH);
      delay(100);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);

      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      voz = Serial.readString();
    }
}
