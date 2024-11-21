#include <stdio.h>
#include <pico/stdlib.h>
#include <pico/cyw43_arch.h>
#include "delay.h"

int main(void)
{
    stdio_init_all();
    hard_assert(cyw43_arch_init() == PICO_OK);
    while (1) {
        sleep_ms(5000);
        printf("Made it in sleep.c\n");
    }
    return 0;

    // int toggle = 0;
    // stdio_init_all();
    // gpio_init(OUT_PIN);
    // gpio_set_dir(OUT_PIN, GPIO_OUT);
    // gpio_put(OUT_PIN, toggle);

    // while (true) {
    //     toggle = !toggle;
    //     gpio_put(OUT_PIN, toggle);
    //     sleep_ms(DELAY_MS);
    // }
}