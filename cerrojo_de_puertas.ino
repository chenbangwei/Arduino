#include <Servo.h>
Servo myServo;
const int piezo = A0;
const int switchPin = 2;
const int yellowLed = 3;
const int greenLed = 4;
const int redLed = 5;
int KnockVal;
int switchVal;
const int quietKnock = 10;
const int loudKnock = 100;
boolean locked = false;
int numberOfKnocks = 0;
void setup() {
  // put your setup code here, to run once:
myServo.attach(9);
pinMode(yellowLed,OUTPUT);
pinMode(redLed,OUTPUT);
pinMode(greenLed,OUTPUT);
pinMode(switchPin,INPUT);
Serial.begin(9600);
digitalWrite(greenLed,HIGH);
myServo.write(0);
Serial.println("La caja está abierta");
}

void loop() {
  // put your main code here, to run repeatedly:
if(locked == false){
  switchVal = digitalRead(switchPin);
  if(switchVal == HIGH){
    locked = true;
    digitalWrite(greenLed,LOW);
    digitalWrite(redLed,HIGH);
    myServo.write(90);
    Serial.println("La caja está cerrada");
    delay(1000);  
  }
}
if(locked == true){
  KnockVal = analogRead(piezo);
  if(numberOfKnocks < 3 && KnockVal > 0){
    if(checkForKnock(KnockVal)== true){
      numberOfKnocks++;
    }
    Serial.print(3-numberOfKnocks);
    Serial.println("Moras golpes para ir");
  }
  if(numberOfKnocks >= 3){
    locked = false;
    myServo.write(0);
    delay(20);
    digitalWrite(greenLed,HIGH);
    digitalWrite(redLed,LOW);
    Serial.println("La caja está abierta");
  }
}
}
boolean checkForKnock(int value){
  if(value > quietKnock && value < loudKnock){
    digitalWrite(yellowLed,HIGH); 
  delay(50);
  digitalWrite(yellowLed,LOW);
  Serial.print("valor de golpe válido");
  Serial.println(value);
  return true;
  }
  else{
    Serial.print("Valor de golpe no válido");
    Serial.println(value);
    return false; 
  }
}
