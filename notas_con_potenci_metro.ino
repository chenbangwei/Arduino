
/*
 * nombre Bangwei
 * fecha 12/02/2021
 * 
 * este programa parte del teclado y utiliza un potenciómetro en vez de botones
 * 
 * 
 */


int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;

int const potPin = A0;



bool play = false;
int notes[] = {262,294,330,349};
//relaciona cada valor de la lista anterior con uno de esta

void setup(){
  Serial.begin(9600);
}

void loop(){
    checkPotenciometer();
  if (play) {
   sound();
  }
}


void checkPotenciometer() {
  int sensorValue = analogRead(A0); 
 
//lee un valor entre 0 y 1024 dependiendo de qué botón está pulsado

  Serial.println(sensorValue);
  
  if(sensorValue >=768 && sensorValue<=1023){
    tone(8, notes[0]);
  }
  else if(sensorValue >= 513 && sensorValue<=767){
    tone(8, notes[1]);
  }
  else if(sensorValue >= 256 && sensorValue <= 512){
    tone(8, notes[2]);
  }
  else if(sensorValue >= 100 && sensorValue <=255){
    tone(8, notes[3]);
  }
  else{
    noTone(8);
}
}
void sound() {

 
  int pitch =
   map(sensorValue,50,1023, 50, 4000);
       Serial.print("Botón valor:");
  Serial.println(sensorValue);

  tone(8,pitch,20);}    
