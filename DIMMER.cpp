#include "Arduino.h"
#include "DIMMER.h"

DIMMER::DIMMER(int pin){
  LEDstat = LOW;
  LEDpin = pin;
  pinMode(LEDpin,OUTPUT);
}
void DIMMER::LED_brightness(int duty_cycle){
  analogWrite(LEDpin,duty_cycle);
}
