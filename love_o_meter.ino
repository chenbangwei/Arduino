const int sensorPin =A0;
const float baselineTemp = 24.0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
for ( int pinNumber = 1; pinNumber < 5;pinNumber ++)
{
pinMode(pinNumber,OUTPUT);
digitalWrite(pinNumber,LOW);
}}

void loop() {
  // MANDAR MENSAJE DE TEMPERATURA
int sensorVal = analogRead(sensorPin);
Serial.print("Valor del sensor: ");
Serial.print(sensorVal);
//convertir la lectura en Voltaje
float voltage = (sensorVal/ 1024.0) * 5.0;
Serial.print(".Voltios: ");
Serial.print(voltage);
//pasamos a grados centìgrados
float temperature = (voltage - .5) * 100;
Serial.print(".Grados centìgrados: " );
Serial.println(temperature);
if(temperature < baselineTemp){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
}else if (temperature >= baselineTemp +2 && temperature < baselineTemp+4){
  digitalWrite(2,HIGH);  
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
}else if (temperature >= baselineTemp +4 && temperature < baselineTemp+6){ 
  digitalWrite(2,HIGH);  
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);   
}else if (temperature >= baselineTemp+6){
  digitalWrite(2,HIGH);  
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);      
}
delay(100);
}
