#include "BTS7960.h"

BTS7960::BTS7960(uint8_t L_PWM, uint8_t R_PWM)
{
	_R_PWM = R_PWM;
	_L_PWM = L_PWM;
	pinMode(_R_PWM, OUTPUT);
	pinMode(_L_PWM, OUTPUT);
}

void BTS7960::setPwm(uint8_t pwm)
{
	if (pwm == 0)
	{
		Stop();
	}
	else if (pwm > 0)
	{
		analogWrite(_L_PWM, 0);
		delayMicroseconds(100);
		analogWrite(_R_PWM, pwm);
	}
	else
	{
		analogWrite(_R_PWM, 0);
		delayMicroseconds(100);
		analogWrite(_L_PWM, abs(pwm));
	}
}
void BTS7960::Stop()
{
	analogWrite(_L_PWM, LOW);
	analogWrite(_R_PWM, LOW);
}
