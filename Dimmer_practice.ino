#include "LEDSet.h"
#include "PushSet.h"
#include "DIMMER.h"

int LED_dimmer_value = 10;
int LED_cycle = 10;

LEDSet led = LEDSet(PA5);
PushSet push = PushSet(PC13);
DIMMER dimmer = DIMMER(LED_cycle);

void setup() {
  attachInterrupt(digitalPinToInterrupt(PC13),pushtoggle,FALLING);
}

void loop() {
  analogWrite(PA5,LED_dimmer_value); 
}
void pushtoggle(){
  if(LED_dimmer_value > 10){
    LED_dimmer_value = LED_dimmer_value - 10;
  }else{
    LED_dimmer_value = 100;
  }
}
