/*
   Fundacion Kinal
   Centro educativo tecnico laboral kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Practica 4, cuarta parte
   Fecha: 03 de mayo
*/
int Push1 = 2;
int Push2 = 3;
int numero = 0;
void setup() {
  Serial.begin(9600);
  pinMode(Push1, INPUT);
  pinMode(Push2, INPUT);
}
void loop() {
  if(digitalRead(Push1) == HIGH){
    Serial.println(numero);
    numero++;
    delay(80);
    if(numero > 99){
      numero = 0;
    }
  } else if(digitalRead(Push2) == HIGH){
    Serial.println(numero);
    numero--;
    delay(80);
    if(numero < 0){
      numero = 99;
    }
  }
}