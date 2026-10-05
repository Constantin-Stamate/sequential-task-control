#ifndef ED_LED_H
#define ED_LED_H

#include <Arduino.h>

class ED_LED {
private:
    uint8_t pin;

public:
    ED_LED(uint8_t p);
    void on();
    void off();
    void toggle();
};

#endif