#ifndef ED_BUTTON_H
#define ED_BUTTON_H

#include <Arduino.h>

class ED_Button {
private:
    uint8_t pin;
    bool lastReading;
    bool buttonState;

    unsigned long lastDebounceTime;
    const unsigned long debounceDelay = 50;

public:
    ED_Button(uint8_t p);
    bool wasPressed();
};

#endif