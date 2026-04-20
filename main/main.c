#include "src/alarms/alarm_manager.h"
#include "src/communication/leop_client.h"
#include "src/communication/wifi_manager.h"
#include "src/diagnostics/uart_console.h"
#include "src/hal/hardware_abstraction.h"
#include "src/sensors/bme280_sensor.h"
#include "src/storage/nvs_cache.h"
#include "src/storage/sensor_logger.h"
#include "src/system/watchdog_manager.h"
#include "src/ui/display_manager.h"

#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char *TAG = "GLENNERGY";

void app_main(void)
{
    ESP_LOGI(TAG, "LEOP ESP32 client starting...");

    hal_init();
    watchdog_init();
    nvs_cache_init();
    wifi_init();
    leop_client_init();
    bme280_sensor_init();
    display_init();
    uart_console_init();
    sensor_logger_init();
    alarm_manager_init();

    while (1) {
        watchdog_feed();
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
