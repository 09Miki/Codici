#include "Led.h"
#include <Arduino.h>

LED::LED(int p){
  pin = p;
  pinMode(pin, OUTPUT);
  stato = 0;
}

void LED::on(){
  digitalWrite(pin, HIGH);
  stato = 1;
}

void LED::off(){
  digitalWrite(pin, LOW);
  stato = 0;
}

void LED::toggle() {
  if (stato == 0)
    on();
  else
    off();
}

void LED::setLuce(int value = 100) {
  analogWrite(pin, value);
  stato = (value > 0) ? 1 : 0;
}
