/*
   Fundacion Kinal
   Centro educativo tecnico laboral kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Practica 4, primera parte
   Fecha: 03 de mayo
*/
int numero = 0;
#define Push2 2
#define Push3 3
#define Push4 4
int display1 = 5;
int display2 = 6;
int display3 = 7;
int display4 = 8; 
int time = 500;
int time1 = 500;
int time2 = 1500;
int time3 = 2500;
void setup() {
Serial.begin(9600);
pinMode(2, INPUT);
pinMode(3, INPUT);
pinMode(4, INPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
}

void loop() {
  while(numero <= 10){
  delay(time1);
  if(numero == 10){
    numero = 0;
  }
  if(numero == 0){
    digitalWrite(display1, LOW);
    digitalWrite(display2, LOW);
    digitalWrite(display3, LOW);
    digitalWrite(display4, LOW);  
  }
  if(numero == 1){
    digitalWrite(display1, HIGH);
    digitalWrite(display2, LOW);
    digitalWrite(display3, LOW);
    digitalWrite(display4, LOW);
  }
  if(numero == 2){
    digitalWrite(display1, LOW);
    digitalWrite(display2, HIGH);
    digitalWrite(display3, LOW);
    digitalWrite(display4, LOW);
  }
  if(numero == 3){
    digitalWrite(display1, HIGH);
    digitalWrite(display2, HIGH);
    digitalWrite(display3, LOW);
    digitalWrite(display4, LOW);
  }
  if(numero == 4){
    digitalWrite(display1, LOW);
    digitalWrite(display2, LOW);
    digitalWrite(display3, HIGH);
    digitalWrite(display4, LOW);
  }
  if(numero == 5){
    digitalWrite(display1, HIGH);
    digitalWrite(display2, LOW);
    digitalWrite(display3, HIGH);
    digitalWrite(display4, LOW);
  }
  if(numero == 6){
    digitalWrite(display1, LOW);
    digitalWrite(display2, HIGH);
    digitalWrite(display3, HIGH);
    digitalWrite(display4, LOW);
  }
  if(numero == 7){
    digitalWrite(display1, HIGH);
    digitalWrite(display2, HIGH);
    digitalWrite(display3, HIGH);
    digitalWrite(display4, LOW);
  }
  if(numero == 8){
    digitalWrite(display1, LOW);
    digitalWrite(display2, LOW);
    digitalWrite(display3, LOW);
    digitalWrite(display4, HIGH);
  }
  if(numero == 9){
    digitalWrite(display1, HIGH);
    digitalWrite(display2, LOW);
    digitalWrite(display3, LOW);
    digitalWrite(display4, HIGH);
  }
  if(digitalRead(Push2) == HIGH){
    delay(time1);
    if(digitalRead(Push4) == HIGH){
      if(digitalRead(Push3) == HIGH){
        delay(time);
        time1 = 0;
        time2 = 0;
        time3 = 0;
      }
    }
  }else{
    time1 = 500;
    time2 = 1500;
    time3 = 2500;
  }
    if(digitalRead(Push3) == HIGH){
      delay(time2);
    }
    if(digitalRead(Push4) == HIGH){
     delay(time3);
    }
  Serial.println(numero);
  numero++;
  }
}