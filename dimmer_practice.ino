#include "PushSet.h"
#include "DIMMER.h"

DIMMER dimmer = DIMMER(PA5);
PushSet push = PushSet(PC13);
int brightness_ratio = 10;

void setup() {
  attachInterrupt(digitalPinToInterrupt(push.Pushpin),pushtoggle,FALLING);
}

void loop() {
  dimmer.LED_brightness(brightness_ratio); 
}

void pushtoggle(){
  if(brightness_ratio > 10){
    brightness_ratio = brightness_ratio - 10;
  }else{
    brightness_ratio = 100;
  }
}
