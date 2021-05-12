#include <LEDSet.h>
#include "Arduino.h"
#include "DIMMER.h"

#define one_cycle 2000 //μs
//analogWriteのPWMが490Hz=1周期2msらしいからそれに合わせた

LEDSet led = LEDSet(PA5);

void DIMMER::LED_brightness(int duty_cycle){
  on_ratio = one_cycle * duty_cycle /100;
  off_ratio = one_cycle /100 * (100-duty_cycle);
  led.LED_on();
  delayMicroseconds(on_ratio);
  led.LED_off();
  delayMicroseconds(off_ratio);
}
