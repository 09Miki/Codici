#include "motore.h"
#include <Arduino.h>

MotoreL9110S::MotoreL9110S(int p1, int p2, int p3, int p4){
  pin1 = p1;
  pin2 = p2;
  pin3 = p3;
  pin4 = p4;
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void MotoreL9110S::avanti() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);
}

void MotoreL9110S::indietro() {
  digitalWrite(pin1, LOW); 
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, LOW); 
  digitalWrite(pin4, HIGH); 
}

void MotoreL9110S::fermo() {
  digitalWrite(pin1, LOW);  
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
}

void MotoreL9110S::sinistra() {
  digitalWrite(pin1, LOW);  
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);
}

void MotoreL9110S::destra() {
  digitalWrite(pin1, HIGH);  
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
}