#include "Arduino.h"
#include "LEDSet.h"

LEDSet::LEDSet(int pin){
  LEDStat = LOW;
  LEDpin = pin;
  pinMode(LEDpin,OUTPUT);
}
void LEDSet::swtiching(){  
  if(LEDStat == HIGH){
    digitalWrite(LEDpin,LOW);
    LEDStat = LOW;
  }else if(LEDStat == LOW){
    digitalWrite(LEDpin,HIGH);
    LEDStat = HIGH;
  }else{
    digitalWrite(LEDpin,LOW);
    LEDStat = LOW;
  }
}
void LEDSet::on(){  
  digitalWrite(LEDpin,HIGH);
  LEDStat = HIGH;
}
void LEDSet::off(){  
  digitalWrite(LEDpin,LOW);
  LEDStat = LOW;
}
void LEDSet::LED_DIMMER(int duty_cycle){
  analogWrite(LEDpin,duty_cycle);
}
