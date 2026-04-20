#include "uart_console.hpp"

#include "esp_log.h"

static const char *TAG = "UART_CPP";

class UartConsole {
public:
    void init()
    {
        ESP_LOGI(TAG, "init");
    }
};

static UartConsole uart_console;

void uart_console_cpp_init(void)
{
    uart_console.init();
}
