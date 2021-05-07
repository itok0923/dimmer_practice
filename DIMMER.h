//DIMER.h
//LEDnのDuty比による調光用

#ifndef DIMMER_h
#define DIMMER_h

class DIMMER {
  public:
    DIMMER(int LED_one_cycle);
    void LED_DIMMER(int duty_cycle);
  private:
    int dimmer_val;
    int one_cycle;
};

#endif
