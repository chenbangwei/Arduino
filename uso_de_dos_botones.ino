
#include <Servo.h>
Servo myServo; 
int angle =13;
const int pinButton1 = 10;
//2
const int pinButton2 = 13;
//3
int button1State=0;
int button2State=0;

void setup() {
  myServo.attach(9);
  Serial.begin(9600);
  pinMode(pinButton1, INPUT);
  pinMode(pinButton2, INPUT);
}
void loop() {
button1State = digitalRead(pinButton1);
Serial.print("El botón uno me dice que su estado es: ");
Serial.print(button1State);
if (button1State ==1){
  angle = angle +10;
}
button2State = digitalRead(pinButton2);
Serial.print("El botón dos me dice que su estado es: ");
Serial.print(button2State);
if (button2State == HIGH){
  angle = angle -10;
}
Serial.print(", angle: ");
Serial.println(angle);
if (angle > 179){
  angle = 179;
}
if (angle <0){
  angle = 0;
}
myServo.write(angle);
delay(15);
}
