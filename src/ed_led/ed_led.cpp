#include "ed_led.h"

ED_LED::ED_LED(uint8_t p) : pin(p) {
    pinMode(pin, OUTPUT);
    off();
}

void ED_LED::on() {
    digitalWrite(pin, HIGH);
}

void ED_LED::off() {
    digitalWrite(pin, LOW);
}

void ED_LED::toggle() {
    digitalWrite(pin, !digitalRead(pin));
}