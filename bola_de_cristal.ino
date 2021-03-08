#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int switchPin = 10;
int switchState = 0;
int prevSwitchState = 0;
int reply;
void setup() {
  lcd.begin(16,2);
  pinMode(switchPin,INPUT);
  lcd.print("que dice");
  lcd.setCursor(0,1);
  lcd.print("la bola");
}
void loop(){
switchState = digitalRead(switchPin);
if(switchState!=prevSwitchState){
  if(switchState == LOW){
    reply = random(8);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("la bola dice:");
    lcd.setCursor(0, 1);
switch(reply){
  case 0:
  lcd.print("hhahhahahahh");
  break;
  case 1:
  lcd.print("Probablemente");
  break;
  case 2:
  lcd.print("Desde luego");
  break;
  case 3:
  lcd.print("Tiene buena pinta");
  break;
  case 4:
  lcd.print("No estoy segura");
  break;
  case 5:
  lcd.print("Vuelve a preguntar");
  break;
  case 6:
  lcd.print("Tengo dudas");
  break;
  case 7:
  lcd.print("No");
  break;
}
  }
}
prevSwitchState = switchState;
  }
