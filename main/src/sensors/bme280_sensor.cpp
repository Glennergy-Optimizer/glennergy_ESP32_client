#include "bme280_sensor.hpp"

#include "esp_log.h"

static const char *TAG = "BME280_CPP";

class Bme280Sensor {
public:
    void init()
    {
        ESP_LOGI(TAG, "init");
    }
};

static Bme280Sensor bme280_sensor;

void bme280_sensor_cpp_init(void)
{
    bme280_sensor.init();
}
