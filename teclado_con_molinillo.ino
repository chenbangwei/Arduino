const int motorPin = 9;
int keyValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int keyValue = analogRead(A0);
 Serial.println(keyValue);
   
  if(keyValue ==1023){
    analogWrite(motorPin,0);
  }
  else if(keyValue >= 990 && keyValue <=1010){
    analogWrite(motorPin,75);
  }
  else if(keyValue >= 505 && keyValue <= 515){
    analogWrite(motorPin,250 );
  }
  else if(keyValue >= 5 && keyValue <=10){
    analogWrite(motorPin,40);
  }
  else if(keyValue >= 970 && keyValue <=989){
    analogWrite(motorPin,160);
  }
   
    
}
