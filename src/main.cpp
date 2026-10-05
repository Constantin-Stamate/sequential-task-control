#include <Arduino.h>
#include <Arduino_FreeRTOS.h>

#include "app_button_count/app_button_count.h"
#include "task_btn_toggle/task_btn_toggle.h"
#include "task_btn_count/task_btn_count.h"
#include "task_led_blink/task_led_blink.h"

void setup() {
    Serial.begin(9600);

    firstLed.off();
    secondLed.off();

    xTaskCreate(taskButtonToggle, "Task_LED1", 128, NULL, 1, NULL);
    xTaskCreate(taskButtonCount, "Task_Count", 128, NULL, 1, NULL);
    xTaskCreate(taskLedBlink, "Task_Led2", 128, NULL, 1, NULL);
}

void loop() {
}