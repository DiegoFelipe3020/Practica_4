/*
   Fundacion Kinal
   Centro educativo tecnico laboral kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Practica 4, segunda parte
   Fecha: 03 de mayo
*/
int LED1 = -2;
int LED2 = -1;
int LED3 = 0;
int LED4 = 1;
int i1 = 0;
int i2 = 0;
int i3 = 0;
#define Led2 2
#define Led3 3
#define Led4 4
#define Led5 5
#define Led6 6
#define Led7 7
#define Led8 8
#define Led9 9
#define Led10 10
#define Led11 11
int Push1 = 12;
int Push2 = 13;
int time1 = 500;
int time2 = 1000;
int time = 0;
void setup() {
Serial.begin(9600);
pinMode(Led2, OUTPUT);
pinMode(Led3, OUTPUT);
pinMode(Led4, OUTPUT);
pinMode(Led5, OUTPUT);
pinMode(Led6, OUTPUT);
pinMode(Led7, OUTPUT);
pinMode(Led8, OUTPUT);
pinMode(Led9, OUTPUT);
pinMode(Led10, OUTPUT);
pinMode(Led11, OUTPUT);
pinMode(Push1, INPUT);
pinMode(Push2, INPUT);
}

void loop() {
  if(digitalRead(Push1) == HIGH){
    time = time1;
    LED1 = -2;
    LED2 = -1 ;
    LED3 = 0;
    LED4 = 1;
    for (int i = 0; i <= 2; i++){
      for(i1 = 0; i1 <= 12; i1++){
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      LED1++;
      LED2++;
      LED3++;
      LED4++;
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      if (digitalRead(Push2) == HIGH){
        Serial.println("Secuencia - velocidad 2");
        time = time2;
      }else if(digitalRead(Push1) == HIGH){
        Serial.println("Secuencia - velocidad 1");
        time = time1;
      }
      delay(time);
      }
      for(i2 = 0;i2 <= 12; i2++){
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      LED1--;
      LED2--;
      LED3--;
      LED4--;
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      if (digitalRead(Push2) == HIGH){
        Serial.println("Secuencia - velocidad 2");
        time = time2;
      }else if(digitalRead(Push1)== HIGH){
        Serial.println("Secuencia - velocidad 1");
        time = time1;
        }
      delay(time);
      }
    }
    for(i3 = 0;i3 <= 3; i3++){
      digitalWrite(Led2, HIGH);
      digitalWrite(Led3, HIGH);
      digitalWrite(Led4, HIGH);
      digitalWrite(Led5, HIGH);
      digitalWrite(Led6, HIGH);
      digitalWrite(Led7, HIGH);
      digitalWrite(Led8, HIGH);
      digitalWrite(Led9, HIGH);
      digitalWrite(Led10, HIGH);
      digitalWrite(Led11, HIGH);
      if (digitalRead(Push2) == HIGH){
        Serial.println("Secuencia - velocidad 2");
        time = time2;
      }else if(digitalRead(Push1)== HIGH){
        Serial.println("Secuencia - velocidad 1");
        time = time1;
        }
      delay(time);
      digitalWrite(Led2, LOW);
      digitalWrite(Led3, LOW);
      digitalWrite(Led4, LOW);
      digitalWrite(Led5, LOW);
      digitalWrite(Led6, LOW);
      digitalWrite(Led7, LOW);
      digitalWrite(Led8, LOW);
      digitalWrite(Led9, LOW);
      digitalWrite(Led10, LOW);
      digitalWrite(Led11, LOW);
      if (digitalRead(Push2) == HIGH){
        Serial.println("Secuencia - velocidad 2");
        time = time2;
      }else if(digitalRead(Push1)== HIGH){
        Serial.println("Secuencia - velocidad 1");
        time = time1;
        }
      delay(time);
    }
    i1 = 0;
    i2 = 0;
  }
}