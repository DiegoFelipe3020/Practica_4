/*
   Fundacion Kinal
   Centro educativo tecnico laboral kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Practica 4, Tercera parte
   Fecha: 03 de mayo
*/
int Push1 = 13;
int Push2 = 12;
int Push3 = 11;
int Push4 = 10;
int display = 0;
int bye1 = 0;
int bye2 = 0;
int bye3 = 0;
int bye4 = 0;
#define a A0
#define b A1
#define c A2
#define d A3
#define e A4
#define f A5
#define g 9
#define led8 8
#define led7 7
#define led6 6
#define led5 5
#define led4 4
#define led3 3
#define led2 2
int i = 0;
int i1 = 2;
int i2 = 9;
int i3 = 0;
void setup() {
  Serial.begin(9600);
  pinMode(Push1, INPUT);
  pinMode(Push2, INPUT);
  pinMode(Push3, INPUT);
  pinMode(Push4, INPUT);
  pinMode(led8, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led2, OUTPUT);

  pinMode(g, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(a, OUTPUT);
  
}

void loop() {
  if(digitalRead(Push1) == HIGH){
    Serial.println("Practica No. 4 - Diego Alejandro Felipe Chis");
    delay(100);
  }
  if(digitalRead(Push2) == HIGH){
    for(i = 0; i <= 1; i++){
      for (i1 = 2; i1<= 8; i1++){
      digitalWrite(i1, HIGH);
      delay(500);
      digitalWrite(i1, LOW);
      delay(500);
      }
      for(i2 = 8; i2 >= 2; i2--){
        digitalWrite(i2, HIGH);
        delay(500);
        digitalWrite(i2, LOW);
        delay(500);
      }
    }
    i = 0;
    i1 = 2;
    i2 = 9;
    for(i3 = 0; i3 <= 3; i3++){
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      delay(500);
    }
    i3 = 0;
  }
  if(digitalRead(Push3) == HIGH){
    while(display == 0){
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      delay(2000);
    display++;
    }
    while(display == 1){
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      delay(2000);
      display++;
    }
    while(display == 2){
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(2000);
      display++;
    }
     while(display == 3){
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(2000);
      display++;
    }
    while(display == 4){
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      delay(2000);
      display++;
    }
    while(display == 5){
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      delay(2000);
      display++;
    }
  }
  if (display == 6){
    display = 0;
  }
  if(digitalRead(Push1) == HIGH){
    bye1++;
    delay(100);
  }
  if(digitalRead(Push3) == HIGH){
    bye3++;
    delay(100);
  }
  if (bye1 >= 1 ){
    if(bye3 >= 1){
      Serial.println("Gracias por su atencion");
      bye1 = 0;
      bye3 = 0;
    }
  }
  if(digitalRead(Push2) == HIGH){
    bye2++;
    delay(100);
  }
  if(digitalRead(Push4) == HIGH){
    bye4++;
    delay(100);
  }
  if (bye2 >= 1 ){
    if(bye4 >= 1){
      Serial.println("Gracias por su atencion");
      bye2 = 0;
      bye4 = 0;
    }
  }
}