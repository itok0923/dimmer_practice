#include "Arduino.h"
#include "DIMMER.h"

DIMMER::DIMMER(int pin){
  LEDStat = LOW;
  LEDpin = pin;
  pinMode(LEDpin,OUTPUT);
}
void DIMMER::LED_blink(){  
  LEDstat = !LEDstat;
  digitalWrite(LEDpin,LEDstat);
}
void DIMMER::LED_on(){  
  LEDstat = HIGH;
  digitalWrite(LEDpin,LEDstat);
}
void DIMMER::LED_off(){  
  LEDstat = LOW;
  digitalWrite(LEDpin,LEDstat);
}
void DIMMER::LED_brightness(int duty_cycle){
  analogWrite(LEDpin,duty_cycle);
}
