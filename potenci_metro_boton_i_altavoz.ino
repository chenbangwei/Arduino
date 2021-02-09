int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;

int const potPin = A0;

int switchState = 0;
bool isTheButtonBeingPressed = false;
bool play = false;

int buttonPin= 4;

void setup() {
Serial.begin(9600);
pinMode(buttonPin, INPUT);

}

void loop() {
  checkButton();
  if (play) {
   sound();
  }
}

void checkButton(){
  switchState = digitalRead(buttonPin);

  if (switchState == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}

void sound() {

  sensorValue = analogRead(A0);
  int pitch =
   map(sensorValue,0,1023, 50, 4000);
       Serial.print("Botón valor:");
  Serial.println(sensorValue);

  tone(8,pitch,20);}               
