/*
 * Esto es un proyecto que tiene
 * -potenciómetro
 * -altavoz
 * 
 * Su comportamiento es
 * Si subes el potenciometro suena
 * 
 * Si lo bajas de determinado umbral se apaga. 
 * 
 * 
 */

int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;

int const potPin = A0;


bool play = false;



void setup() {
Serial.begin(9600);


}

void loop() {
  checkPotenciometer();
  if (play) {
   sound();
  }
}

void checkPotenciometer() {
   sensorValue = analogRead(A0);
   if (sensorValue< 50){
    play = false;
   }
   else{
    play = true;
   }
  
}

void sound() {

 
  int pitch =
   map(sensorValue,50,1023, 50, 4000);
       Serial.print("Botón valor:");
  Serial.println(sensorValue);

  tone(8,pitch,20);}    
