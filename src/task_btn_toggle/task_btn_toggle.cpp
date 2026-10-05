#include "app_button_count/app_button_count.h"
#include <Arduino_FreeRTOS.h>

void taskButtonToggle(void* parameter) {
    for (;;) {
        if (firstButton.wasPressed()) {
            firstLedState = !firstLedState;

            if (firstLedState) {
                firstLed.on();
            } else {
                firstLed.off();
            }
        }

        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}