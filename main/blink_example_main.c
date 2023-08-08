
#include <stdio.h>
#include "freertos/FreeRTOS.h"


static const char *TAG = "example";




void app_main(void)
{

    /* Configure the peripheral according to the LED type */
    configure_led();// bug to fix there is no function 

    while (1) {
        ESP_LOGI(TAG, "change the program to wifi status indicator🌞");
        
        vTaskDelay(CONFIG_BLINK_PERIOD / portTICK_PERIOD_MS);
    }
}
