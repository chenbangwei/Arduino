//Colocar en la sección de variables globales
int switchState =0;
//el pin del boton se puede cambiar
int buttonPin = 7;
bool play = false;
bool isTheButtonBeingPressed = false;


//Incluir dentro del setup()
pinMode(buttonPin,INPUT);


// Incluir dentro del loop()
checkButton();
if (play) {
  //poner aquí el código a ejecutar
}

// Función aparte checkbutton (no incluir ni en el setup ni en el loop)
void checkButton(){
  switchState = digitalRead(buttonPin);
  if(switchState == HIGH){
    if(isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
    }
}
else{isTheButtonBeingPressed = false;
}
}
