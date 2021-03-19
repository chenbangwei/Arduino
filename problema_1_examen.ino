const int ledPin = 3;
const int ledPin1 = 10;
const int ledPin2 =12;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ledPin2,HIGH);
  delay(1000);
    digitalWrite(ledPin,LOW);
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  delay(1000);
  
  digitalWrite(ledPin,HIGH);
  digitalWrite(ledPin1,HIGH);
 digitalWrite(ledPin2,HIGH);
delay(500);
}
