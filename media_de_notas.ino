 /*Nombre:bangwei
*Fecha:8/03/2021
*calcula una media de notas 
*
 */
int notas[]={8,10,8,5,4};
int numeroNotas = 5;
void setup(){
  int notaMinima = 10;
  int sumaNotas =0;
  for(int i=0; i<numeroNotas; i++){
    sumaNotas = sumaNotas + notas[i];
    if(notas[i]<notaMinima){
      notaMinima = notas[i];
    }
  }

float mediaNotas = sumaNotas/numeroNotas;
Serial.begin(9600);
Serial.print("Nota media:");
Serial.println(mediaNotas);
Serial.print("Nota mínima:");
Serial.println(notaMinima);
if(mediaNotas <5 || notaMinima <= 3){
  Serial.println("Toca hacer el examen de acceso");
}else{
  Serial.println("No toca hacer el examen de acceso");
}
}
void loop()  
}
