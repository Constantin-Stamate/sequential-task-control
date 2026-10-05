#include "app_button_count/app_button_count.h"
#include <Arduino_FreeRTOS.h>
#include <Arduino.h>

void taskButtonCount(void* parameter) {
    for (;;) {
        if (secondButton.wasPressed()) {
            pushCount++;
            Serial.println(pushCount);
        }

        if (thirdButton.wasPressed()) {
            if (pushCount > 0) {
                pushCount--;
            }

            Serial.println(pushCount);
        }

        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}