#include "DIMMER.h"
#include "PushSet.h"

int brightness_ratio = 10;

DIMMER led = DIMMER(PA5);
PushSet push = PushSet(PC13);

void setup() {
  attachInterrupt(digitalPinToInterrupt(push.Pushpin),pushtoggle,FALLING);
}

void loop() {
  led.LED_brightness(brightness_ratio); 
}

void pushtoggle(){
  if(brightness_ratio > 10){
    brightness_ratio = brightness_ratio - 10;
  }else{
    brightness_ratio = 100;
  }
}
