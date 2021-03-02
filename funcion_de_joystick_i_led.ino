/*
*  Documentación del programa 
*  Autore: 
*  Fecha:
*  Código referencia: (url)
*  Descripción del programa:
*  Hardware necesario:
*/

//Includes

//Definiciones de constantes de pines
const int pinBoton = 3; 
const int pinEjeY = A1; 
const int pinEjeX = A0; 
const int pinLed = 2;
//Definición de variables globales 
int valorEjeX = 0;
void setup() {
//inicializaciones
pinMode(pinLed,OUTPUT);
  pinMode(pinBoton, INPUT);
  digitalWrite(pinBoton, HIGH);
  Serial.begin(9600);
//código que se ejecuta solo una vez. Calibraciones  
}

void loop() {
valorEjeX = analogRead(pinEjeX);
 if(valorEjeX>800){
  digitalWrite(pinLed, HIGH);
 }
 else{
  digitalWrite(pinLed, LOW);
 }
 //código que se repite una y otra vez. Recuerda colocar las funciones que hagan falta para que sea más claro. 
}
