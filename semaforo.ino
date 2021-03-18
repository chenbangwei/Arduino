int switchState = 0;

void setup() {
  // put your setup code here, to run once:
//Iniciando leds
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
//Ininiando botón
pinMode(2, INPUT);
}

void loop() {
  //leer el estado del botón
  switchState = digitalRead(2);
  // esto es un comentario
  if (switchState == LOW){
  //el botón no esta pulsadeo
  digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
}
else { // the button is pressed 
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);

  delay(250); //espera un cuarto dde segundo
  //permuta los LED
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(250); //espera un cuatro de segundo
}
} //vuelve al inicio del bucle
