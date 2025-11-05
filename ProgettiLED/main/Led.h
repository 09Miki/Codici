#ifndef LED_H
#define LED_H

class LED{
  private:
    int pin;
    int stato;

  public:
    LED(int p);
    void on();
    void off();
    void toggle();
    void setLuce(int value);          
};
#endif
