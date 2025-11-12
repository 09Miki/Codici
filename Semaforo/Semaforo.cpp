#include "Semaforo.h"
#include <Arduino.h>

Semaforo::Semaforo(int  p1, int p2, int p3){
  pinr = p1;
  ping = p2;
  pinv = p3;
  pinMode(pinr, OUTPUT);
  pinMode(ping, OUTPUT);
  pinMode(pinv, OUTPUT);
  digitalWrite(pinr, LOW);
  digitalWrite(ping, LOW);
  digitalWrite(pinv, LOW);
}

void Semaforo::acceso(){
  digitalWrite(pinr, HIGH);
  digitalWrite(ping, HIGH);
  digitalWrite(pinv, HIGH);
}

void Semaforo::spento(){
  digitalWrite(pinr, LOW);
  digitalWrite(ping, LOW);
  digitalWrite(pinv, LOW);
}

void Semaforo::funzione(){
  digitalWrite(pinv, HIGH);
  delay(3000);
  digitalWrite(pinv, LOW);
  digitalWrite(ping, HIGH);
  delay(1500);
  digitalWrite(ping, LOW);
  digitalWrite(pinr, HIGH);
  delay(4000);
  digitalWrite(pinr, LOW);
}

Led::Led(int p){
  pin = p;
  pinMode(pin, OUTPUT);
  stato = LOW;
  digitalWrite(pin, LOW);
}

void Led::acceso(){
  stato = HIGH;
  digitalWrite(pin, HIGH);
}

void Led::spento(){
  stato = LOW;
  digitalWrite(pin, LOW);
}

void Led::toggle(){
  if(stato == LOW){
    stato = HIGH;
    digitalWrite(pin, HIGH);
  } else {
    stato = LOW;
    digitalWrite(pin, LOW);
  }
}