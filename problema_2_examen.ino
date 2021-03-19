const int LEDPin=3;
int const potPin = A0;
const int buttonPin = 4;
int Value = 0;
int switchState = 0;
int potVal;
int channel = 0;
bool isTheButtonBeingPressed = false;
void setup(){
  pinMode(LEDPin,OUTPUT);
  Serial.begin(9600);
    pinMode(buttonPin, INPUT);
}
void loop() {
  potVal = analogRead(potPin);
  switchState = digitalRead(buttonPin);
if(switchState==LOW){
  
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
  if (channel ==0){
    colorearRojo();
  }
   delay(0);
  

}

void colorearRojo(){
    Value = map(potVal,0);
analogWrite(LEDPin,Value);
}
