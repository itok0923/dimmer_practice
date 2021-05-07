//DIMMER.h

#ifndef DIMMER_h
#define DIMMER_h

class DIMMER {
  public:
    void LED_brightness(int duty_cycle);
    int on_ratio;
    int off_ratio;
};

#endif
