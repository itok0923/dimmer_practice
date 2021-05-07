#include "Arduino.h"
#include "LEDSet.h"

LEDSet::LEDSet(int pin){
  LEDstat = LOW;
  LEDpin = pin;
  pinMode(LEDpin,OUTPUT);
}
void LEDSet::LED_blink(){  
  LEDstat = !LEDstat;
  digitalWrite(LEDpin,LEDstat);
}
void LEDSet::LED_on(){  
  LEDstat = HIGH;
  digitalWrite(LEDpin,LEDstat);
}
void LEDSet::LED_off(){  
  LEDstat = LOW;
  digitalWrite(LEDpin,LEDstat);
}
