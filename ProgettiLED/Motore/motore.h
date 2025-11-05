#ifndef MOTORE_H
#define MOTORE_H

class MotoreL9110S {
  private:
    int pin1;
    int pin2;
    int pin3;
    int pin4;
  

  public:
    MotoreL9110S(int p1, int p2, int p3, int p4);
    void avanti();
    void indietro();
    void fermo();
    void sinistra();
    void destra();  
};
#endif
