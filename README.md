# BTS7960Library
Arduino library to control the BTS7960 Dual H-Bridge, that can drive DC-Motor up to 43A

## Usage
Then create an instance of the BTS7960 with two pins constructor
With L-pwm and R-pwm hard wired to Vcc pin 
```
BTS7960 motor1(L_PWM, R_PWM);
```
## Methods

|Method | Params  | Description
| :----- | :---------- | :------
|**Stop** |     none  | Full stop (brake)
|**setPwm** | int8_t pwm  | pwm range(-255 to 255) move motor in either direction with given pwm
