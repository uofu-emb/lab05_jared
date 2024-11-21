#include <stdio.h>
#include <pico/stdlib.h>
#include <FreeRTOS.h>
#include <task.h>
#include "delay.h"

// void main_task(__unused void *params)
// {
//     int toggle = 0;
//     while (1) {
//         toggle = !toggle;
//         gpio_put(OUT_PIN, toggle);
//         vTaskDelay(pdMS_TO_TICKS(DELAY_MS));
//     }
// }

int main(void)
{
    stdio_init_all();
    // hard_assert(cyw43_arch_init() == PICO_OK);
    while (1) {
        sleep_ms(5000);
        printf("Made it in task_delay.c\n");
    }
    return 0;

    // stdio_init_all();
    // gpio_init(OUT_PIN);
    // gpio_set_dir(OUT_PIN, GPIO_OUT);
    // const char *rtos_name = "FreeRTOS";
    // TaskHandle_t task;
    // xTaskCreate(main_task, "MainThread",
    //             configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY + 1UL, &task);
    // vTaskStartScheduler();
    // return 0;
}