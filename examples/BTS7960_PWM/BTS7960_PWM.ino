// PINOUT
// L_PWM -> 9
// R_PWM -> 10

#include "BTS7960.h"

const uint8_t L_PWM = 4;
const uint8_t R_PWM = 5;

BTS7960 motorController(L_PWM, R_PWM);

void setup()
{
}

void loop()
{

  for (int speed = 0; speed < 255; speed += 10)
  {
    motorController.setPwm(speed);
    delay(100);
  }
  motorController.Stop();

  for (int speed = 255; speed > 0; speed -= 10)
  {
    motorController.setPwm(speed);
    delay(100);
  }
  motorController.Stop();

  delay(3000);
}