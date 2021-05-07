#include "LEDSet.h"
#include "PushSet.h"

int LED_dimmer_value = 10;

LEDSet led = LEDSet(PA5);
PushSet push = PushSet(PC13);

void setup() {
  attachInterrupt(digitalPinToInterrupt(PC13),pushtoggle,FALLING);
}

void loop() {
  led.LED_DIMMER(LED_dimmer_value); 
}

void pushtoggle(){
  if(LED_dimmer_value > 10){
    LED_dimmer_value = LED_dimmer_value - 10;
  }else{
    LED_dimmer_value = 100;
  }
}
