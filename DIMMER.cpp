#include "Arduino.h"
#include "LEDSet.h"
#include "DIMMER.h"


DIMMER::DIMMER(int LED_one_cycle){
    int one_cycle = LED_one_cycle;
}
void DIMMER::LED_DIMMER(int duty_cycle){
  dimmer_val = one_cycle/100 * duty_cycle;
  delay(dimmer_val);
}
