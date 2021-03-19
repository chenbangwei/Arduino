/*nombre:bangwei sun 
 * fecha:19/03/2021
 * problema 4 :encerden led cuatro modos 
 * -encender 
 * -parpadeé
 * -más rápido
 * -apagar
 */
const int buttonPin =7;
const int ledPin = 3;
 int value;
void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin,INPUT);
pinMode(ledPin,OUTPUT);

}

void loop() {
 value= digitalRead(buttonPin);
 if (value==HIGH){
  digitalWrite(ledPin,LOW);
 }
  else {digitalWrite(ledPin,HIGH);
  }if
(    digitalWrite(ledPin,HIGH);
  delay(1000);)
  }
}
  
