#ifndef SEMAFORO_H
#define SEMAFORO_H

class Semaforo {
  private:
  int pinr;
  int pinv;
  int ping;

  public:
  void funzione();
  void acceso();
  void spento();
};

class Led {
  private:
  int pin;
  int stato;

  public:
  void acceso();
  void spento();
  void toggle();
};

#endif