int SwitchState =0;
int buttonPin = 7;
bool play = false
bool isTheButtonBeingPressed
int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;
const int ledPin = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
digitalWrite(ledPin,HIGH);
while(millis() < 5000) {
  sensorValue = analogRead(A0);
  if(sensorValue > sensorHigh) {
    sensorHigh = sensorValue;
  }if(sensorValue < sensorLow){
    sensorLow = sensorValue;
  }
}
digitalWrite(ledPin,LOW);
}


void loop() {
  // put your main code here, to run repeatedly:
sensorValue = analogRead(A0);
int pitch =
map(sensorValue,sensorLow,sensorHigh,50,4000);
tone(8,pitch,20);
delay(10);
}
checkButton();
if (play) {
  sound();
}
}
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
void sound(){
  sensorValue = analogRead
