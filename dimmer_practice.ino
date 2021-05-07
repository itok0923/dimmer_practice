#include <PushSet.h>
#include <LEDSet.h>
#include "DIMMER.h"

PushSet push = PushSet(PC13);
DIMMER dimmer;
int brightness_value = 10;

int test;

void setup() {
  attachInterrupt(digitalPinToInterrupt(push.Pushpin),pushtoggle,FALLING);
}

void loop() {
  dimmer.LED_brightness(brightness_value); 
}

void pushtoggle(){
  if(brightness_value > 4){
    brightness_value = brightness_value - 5;
  }else{
    brightness_value = 100;
  }
}
