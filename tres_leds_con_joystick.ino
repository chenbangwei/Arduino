const int z = 3;
const int y = A1;
const int X = A0;
const int pinLed = 5;
const int pinLed0 = 9;
const int pinLed1 = 11;
int estadoBoton = 1;
int valorX=0;
int valorY=0;
bool encenderled = false;
void setup(){
  pinMode(pinLed,OUTPUT);
  pinMode(pinLed0,OUTPUT);
  pinMode(pinLed1,OUTPUT);
  pinMode(z,INPUT);
  digitalWrite(z,HIGH);
  Serial.begin(115200);
}

void loop(){
valorX = analogRead(X);
valorY = analogRead(y);
  estadoBoton= digitalRead(z);
  if(valorX < 23 || valorY <23 || valorX>1000 || valorY>1000){
    encenderled = true;
  }else{
    encenderled = false;
    }
   if(estadoBoton == LOW){
   encenderled = !encenderled;
    }
  
Serial.print("Boton z: pinLed  ");
Serial.print(digitalRead(z));
Serial.print("\n");
Serial.print("Eje X:pinLed 0 ");
Serial.print(analogRead(X));
Serial.print("\n");
Serial.print("Eje Y:pinLed 1 ");
Serial.println(analogRead(y));
Serial.print("\n\n");

}
