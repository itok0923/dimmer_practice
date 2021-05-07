#include "PushSet.h"
#include "DIMMER.h"

DIMMER dimmer = DIMMER(PA5);
PushSet push = PushSet(PC13);
int brightness_value = 10;

void setup() {
  attachInterrupt(digitalPinToInterrupt(push.Pushpin),pushtoggle,FALLING);
}

void loop() {
  dimmer.LED_brightness(brightness_value); 
}

void pushtoggle(){
  if(brightness_value > 10){
    brightness_value = brightness_value - 10;
  }else{
    brightness_value = 255;
  }
}
