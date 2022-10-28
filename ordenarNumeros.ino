int numeroAleatorio, wa = 1, wb, wc, wd = 1, we = 1,a,z;
int list[10], listO[10], listH[10];
void GeneradorDeListaRandom();
int MostrarLista();
int OrdenarLista();
int CopiarLista();
void MostrarLista2();

void setup(){
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  Serial.begin(9600);
}
void loop(){
  if(digitalRead(12)){
    wa = 0;
    we = 0;
    delay(1000);
  }
  if(digitalRead(13)){
    wd = 0;
    delay(1000);
  }
  if(wa == 0)GeneradorDeListaRandom();
  if(we == 0){
    z=0;
    CopiarLista();
//    while(z < 9){
//      Serial.println(listH[z]);
//      z++;
//    }
  }
  if(wd == 0)OrdenarLista();
}

void GeneradorDeListaRandom(){
  wb = 0;
  Serial.println("Tu lista random es: ");
  while(wb < 10){
    numeroAleatorio = random(1,analogRead(A1));
    list[wb] = numeroAleatorio;
    wb++;
  }
  MostrarLista();
}
int MostrarLista(){
  wc = 0; wa = 0;
  while(wc < 10){
        Serial.println(list[wc]);
        wc++;
    }
  return wa++;
}
void MostrarLista2(){
  wc = 0;
  while(wc < 10){
        Serial.println(listO[wc]);
        wc++;
    }
}
int OrdenarLista(){
  wd = 0;
  a = 0;
//  Serial.println(".");
  while(a < 10){
//    Serial.println(".");
    if(listH[0]==0){
      listO[a] = list[0];
      a++;
    }
    if(listH[1]==0){
      listO[a] = list[1];
      a++;
    }
    if(listH[2]==0){
      listO[a] = list[2];
      a++;
    }
    if(listH[3]==0){
      listO[a] = list[3];
      a++;
    }
    if(listH[4]==0){
      listO[a] = list[4];
      a++;
    }
    if(listH[5]==0){
      listO[a] = list[5];
      a++;
    }
    if(listH[6]==0){
      listO[a] = list[6];
      a++;
    }
    if(listH[7]==0){
      listO[a] = list[7];
      a++;
    }
    if(listH[8]==0){
      listO[a] = list[8];
      a++;
    }
    if(listH[9]==0){
      listO[a] = list[9];
      a++;
    }
    listH[0]--;
    listH[1]--;
    listH[2]--;
    listH[3]--;
    listH[4]--;
    listH[5]--;
    listH[6]--;
    listH[7]--;
    listH[8]--;
    listH[9]--;
  }
  Serial.println("La lista ordenada es:");
  MostrarLista2();
  wd++;
  return wd;
}
int CopiarLista(){
  we = 0;
  while(we < 10){
    listH[we] = list[we];
    we++;
  }
  return we;
}
//void OrdenarLista(la){
//  while(la < 10){
//    if(list[la]>=list[0]&&list[la]>=list[1]&&list[la]>=list[2]&&list[la]>=list[3]&&list[la]>=list[4]&&list[la]>=list[5]&&list[la]>=list[6]&&list[la]>=list[7]&&list[la]>=list[8]&&list[la]>=list[9]&&){
//      listO[0] = la;
//      break;
//    }
//  }
//  while(la < 10){
//    if(list[la]<=list[0]&&list[la]>=list[1]&&list[la]>=list[2]&&list[la]>=list[3]&&list[la]>=list[4]&&list[la]>=list[5]&&list[la]>=list[6]&&list[la]>=list[7]&&list[la]>=list[8]&&list[la]>=list[9]&&){
//      listO[0] = la;
//      break;
//    }
//  }
//}
