#ifndef BTS7960_h
#define BTS7960_h
#include "Arduino.h"
#endif

class BTS7960
{
public:
  BTS7960(uint8_t L_PWM, uint8_t R_PWM);
  void setPwm(uint8_t pwm);
  void Stop();

private:
  uint8_t _L_PWM;
  uint8_t _R_PWM;
};
#endif
