#include "app_button_count/app_button_count.h"
#include <Arduino_FreeRTOS.h>
#include <Arduino.h>

void taskLedBlink(void* parameter) {
    unsigned long lastBlinkTime = 0;

    for (;;) {
        if (!firstLedState) {
            if (millis() - lastBlinkTime >= 200) {
                secondLed.toggle();
                lastBlinkTime = millis();
            }
        } else {
            secondLed.off();
        }

        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}