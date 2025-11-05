#include "Led.h"

LED ledr(2);
LED ledb(4);

void setup(){

}

void loop(){
  for(int i = 0; i < 256; i++){
    ledr.setLuce(i);
    ledb.setLuce(map(i, 0, 255, 255, 0));
    delay(50);
  }
  for(int i = 255; i > 0; i--){
    ledr.setLuce(i);
    ledb.setLuce(map(i, 0, 255, 255, 0));
    delay(50);
  }
}