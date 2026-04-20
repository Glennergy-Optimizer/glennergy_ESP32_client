#include "leop_client.hpp"

#include "esp_log.h"

static const char *TAG = "LEOP_CPP";

class LeopClient {
public:
    void init()
    {
        ESP_LOGI(TAG, "init");
    }
};

static LeopClient leop_client;

void leop_client_cpp_init(void)
{
    leop_client.init();
}
