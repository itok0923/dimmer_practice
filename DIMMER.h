//DIMMER.h

#ifndef DIMMER_h
#define DIMMER_h

class DIMMER {
  public:
    DIMMER(int pin);
    void LED_blink();
    void LED_on();
    void LED_off();
    void LED_brightness(int duty_cycle);
    int LEDpin;
    int LEDstat;
};

#endif
