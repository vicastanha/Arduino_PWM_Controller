#include <Arduino.h>

int Botao =2;
int Motor=9;
int speed = 0;
int est_b = 0;
int est_ant = 0;
unsigned long tempo_acionado = 0;
unsigned long tempo_delay = 50;

void setup()
{
   pinMode(Motor, OUTPUT);
   pinMode(Botao, INPUT_PULLUP);
}

void loop(){
   est_b = digitalRead(Botao);

   if (est_b != est_ant) {
      est_ant = est_b;
      if (est_b == HIGH){
         tempo_acionado = millis();
      }
   if(est_b == HIGH && ((millis() - tempo_acionado) - tempo_delay)){
      speed += 63;
   }
   if(speed > 255){
      speed=0;
   }
      analogWrite(Motor, speed);
   }
}