#ifndef Led_h
#define Led_h

#include "Arduino.h"
class Led
{
  private:
    int Pin;
    bool IsOn;
    int MyClarity;
  public:
    Led(int pin);
    Led();
    void SetPin(int pin);
    bool On();
    void TurnOn();
    void TurnOn(int clarity);
    void Blip(int Time);
    void TurnOff();
    void Change();
    int Clarity();
};
#endif
