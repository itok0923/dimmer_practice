//PushSet.h

#ifndef PushSet_h
#define PushSet_h

class PushSet {
  public:
    PushSet(int pin);
    int push_hold(int pushstat);
    int push_toggle(int pushstat);
    
  private:
    int Pushpin;
};

#endif
