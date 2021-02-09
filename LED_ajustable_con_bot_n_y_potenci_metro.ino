const int greenLEDPin=2;
const int redLEDPin=3;
const int blueLEDPin=4;
int const potPin = A0;
const int buttonPin = 13;
int redValue = 0;
int greenValue = 0;
int blueValue = 0;
int switchState = 0;
int potVal;
int channel = 0;
bool isTheButtonBeingPressed = false;
void setup(){
  pinMode(greenLEDPin,OUTPUT);
  pinMode(redLEDPin,OUTPUT);
  pinMode(blueLEDPin,OUTPUT);
  Serial.begin(9600);
    pinMode(buttonPin, INPUT);
}
void loop() {
  potVal = analogRead(potPin);
  switchState = digitalRead(buttonPin);
if(switchState==HIGH){
  
    if(isTheButtonBeingPressed == false){
    isTheButtonBeingPressed=true;
    channel++;
    if(channel>3)
    {
      channel = 0;
    }
    Serial.print("Valor del canal (0 = 0, 1= R, 2 = G, 3 = B): ");
  Serial.println(channel);
    }
  }
else{
  isTheButtonBeingPressed = false;
}
 potVal = analogRead(potPin);
Serial.print("potVal: ");
  Serial.println(potVal);
  if (channel ==1){
    colorearRojo();
  }
  if (channel ==2){
    colorearVerde();
  }
  if (channel ==3){
    colorearAzul();
  }
   delay(15);
  

}

void colorearRojo(){
    redValue = map(potVal,0,1023,0,255);
analogWrite(redLEDPin, redValue);
}
void colorearVerde(){
  greenValue = map(potVal,0,1023,0,255);
analogWrite(greenLEDPin, greenValue);
}
void colorearAzul(){
  blueValue = map(potVal,0,1023,0,255);
analogWrite(blueLEDPin, blueValue);
}
