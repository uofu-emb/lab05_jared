#include <stdio.h>
#include <pico/stdlib.h>
#include "delay.h"

int main(void)
{
    printf("Made it in sleep.c\n");
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