

int notes[] = {262,294,330,349};
//relaciona cada valor de la lista anterior con uno de esta

void setup(){
  Serial.begin(9600);
}

void loop(){

  int keyVal = analogRead(A0); 

//lee un valor entre 0 y 1024 dependiendo de qué botón está pulsado

  Serial.println(keyVal);
  
  if(keyVal ==1023){
    tone(8, notes[0]);
  }
  else if(keyVal >= 990 && keyVal <=1010){
    tone(8, notes[1]);
  }
  else if(keyVal >= 505 && keyVal <= 515){
    tone(8, notes[2]);
  }
  else if(keyVal >= 5 && keyVal <=10){
    tone(8, notes[3]);
  }
  else{
    noTone(8);
  }
}
