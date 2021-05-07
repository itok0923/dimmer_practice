//LEDSet.h

#ifndef LEDSet_h
#define LEDSet_h

class LEDSet {
  public:
    LEDSet(int pin);
    void swtiching();
    void on();
    void off();
    void LED_DIMMER(int duty_cycle);
        
  private:
    int LEDpin;
    int LEDStat;
};

#endif
