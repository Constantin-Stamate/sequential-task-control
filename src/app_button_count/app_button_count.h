#ifndef APP_BUTTON_COUNT_H
#define APP_BUTTON_COUNT_H

#include "ed_button/ed_button.h"
#include "ed_led/ed_led.h"

extern ED_Button firstButton;
extern ED_Button secondButton;
extern ED_Button thirdButton;
extern ED_LED firstLed;
extern ED_LED secondLed;
extern bool firstLedState;
extern int pushCount;

#endif