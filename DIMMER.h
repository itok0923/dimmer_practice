//DIMMER.h

#ifndef DIMMER_h
#define DIMMER_h

class DIMMER {
  public:
    DIMMER(int pin);
    int LEDpin;
    int LEDstat;
    void LED_brightness(int duty_cycle);
};

#endif
