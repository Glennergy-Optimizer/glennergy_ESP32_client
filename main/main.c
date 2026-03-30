#include <stdio.h>
#include "esp_log.h" // 

static const char *TAG = "GLENNERGY";

void app_main(void)
{
    ESP_LOGI(TAG, "ESP32 client starting...");

    int counter = 0;

    while (1)
    {
        ESP_LOGI(TAG, "Coutner: %d", counter++);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }

}
