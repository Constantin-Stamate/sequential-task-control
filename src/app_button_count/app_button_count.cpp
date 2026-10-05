#include "app_button_count.h"

ED_Button firstButton(2);
ED_Button secondButton(3);
ED_Button thirdButton(4);

ED_LED firstLed(8);
ED_LED secondLed(13);

bool firstLedState = false;
int pushCount = 0;