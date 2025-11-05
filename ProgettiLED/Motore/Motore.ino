#include "motore.h"

MotoreL9110S Motore(2, 3, 5, 6);

void setup() {

}

void loop() {
  Motore.avanti();
} 
