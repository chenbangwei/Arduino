
const int motorPin = 9;
int potenciometroValue =0;
int motorValue =0;
void setup() {
pinMode(motorPin,OUTPUT);
}
void loop() {
potenciometroValue = analogRead(A0);
motorValue = potenciometroValue/4;
analogWrite(motorPin,motorValue);
}
