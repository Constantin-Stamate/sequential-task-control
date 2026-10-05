#include "ed_button.h"

ED_Button::ED_Button(uint8_t p)
    : pin(p),
      lastReading(HIGH),
      buttonState(false),
      lastDebounceTime(0) {
    pinMode(pin, INPUT_PULLUP);
}

bool ED_Button::wasPressed() {
    bool reading = digitalRead(pin);
    unsigned long now = millis();
    bool pressed = false;

    if (reading != lastReading) {
        lastDebounceTime = now;
    }

    if ((now - lastDebounceTime) > debounceDelay) {
        if (reading == LOW && buttonState == false) {
            pressed = true;
        }

        buttonState = !reading;
    }

    lastReading = reading;
    return pressed;
}