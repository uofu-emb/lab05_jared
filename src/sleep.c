#include <stdio.h>
#include <pico/stdlib.h>
#include <pico/cyw43_arch.h>
#include "delay.h"

int main(void)
{
    int toggle = 0;
    stdio_init_all();
    gpio_init(OUT_PIN);
    gpio_set_dir(OUT_PIN, GPIO_OUT);
    gpio_put(OUT_PIN, toggle);

    while (true) {
        toggle = !toggle;
        gpio_put(OUT_PIN, toggle);
        // Busy loop
        for (int i = 0; i < 10000; i++) {
            __nop();
        }
        sleep_ms(DELAY_MS);
    }
}