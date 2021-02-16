//nombra la constante para el pin del sensor
const int switchPin = 9;

unsigned long previousTime = 0; 
//guarda el último momento en que un led fue encendido

int switchState = 0;
//variable para el estado actual del sensor

int prevSwitchState = 0;
//guarda el anterior estado del sensor

int indexLed = 0;
//variable referida a los leds

const int ledPins[]= {
  3,
  6,
  4,
  7,
  5,
  8,
};

//3000 = 3000 milisegundos
long interval = 3000;
//este será el intervalo entre un led que se enciende y el siguiente

void setup() {

 for(int x = 3;x<9;x++){
   pinMode(x, OUTPUT);
//declara lo que serán las salidas de los leds, con un contador

 }

 //declara el pin del sensor como entrada
 pinMode(switchPin, INPUT);
 Serial.begin(9600);
}

void loop(){ 

 //guarda el tiempo desde el cual la placa comenzó el programa
 unsigned long currentTime = millis(); 

 /*
compara el tiempo con el que hubo la última vez que un led se encendió
y si es mayor que el intervalo definido, enciende el siguiente
*/

 if(currentTime - previousTime > interval) {

   //guarda la última vez que cambiaste un led
   previousTime = currentTime; 

   //enciende el led
   digitalWrite(ledPins[indexLed], HIGH);
   indexLed++; 
   

 }

 //lee el valor del sensor
int sensorValue = analogRead(A0);

if (sensorValue > 512){
  switchState = 1;
}
else{
  switchState = 0;
}
 
 Serial.println(switchState);
 

 //si el sensor cambia, apaga todos los sensores
 if(switchState != prevSwitchState){

   for(int x = 3;x<9;x++){    
     digitalWrite(x, LOW);

   }  
   
   //resetea la variable de los leds a la original
    indexLed = 0;
   
   //resetea el contador de tiempos
   previousTime = currentTime;
 }
 //guarda el último estado en que estuvo el led
 prevSwitchState = switchState;

}
