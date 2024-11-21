# ----ADD BINARY FOR TIMER----
add_executable(timer
    timer.c
    )

pico_set_program_name(timer "timer")
pico_set_program_version(timer "0.1")

# Modify the below lines to enable/disable output over UART/USB.
# These are mutually exclusive, only set one.
pico_enable_stdio_uart(timer 0)
pico_enable_stdio_usb(timer 1)

# Add the libraries to the build
target_link_libraries(timer PRIVATE
  pico_stdlib
  pico_multicore
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
)

# The CYW43 is the Wifi/Bluetooth module. If the board is set to pico_w, this
# variable will be set and the wireless libraries added.
if(PICO_CYW43_SUPPORTED)
    # For led support on pico_w
    target_link_libraries(timer PRIVATE
        pico_cyw43_arch_none
    )
endif()

# Another pico macro which generates the uf2 file in addition to the elf
pico_add_extra_outputs(timer)

add_custom_target(flash_timer picotool load -f $<TARGET_FILE:timer> DEPENDS timer)


# ----ADD BINARY FOR TASK DELAY----
add_executable(task_delay
    task_delay.c
    )

pico_set_program_name(task_delay "task_delay")
pico_set_program_version(task_delay "0.1")

# Modify the below lines to enable/disable output over UART/USB.
# These are mutually exclusive, only set one.
pico_enable_stdio_uart(task_delay 0)
pico_enable_stdio_usb(task_delay 1)

# Add the libraries to the build
target_link_libraries(task_delay PRIVATE
  pico_stdlib
  pico_multicore
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
)

# The CYW43 is the Wifi/Bluetooth module. If the board is set to pico_w, this
# variable will be set and the wireless libraries added.
if(PICO_CYW43_SUPPORTED)
    # For led support on pico_w
    target_link_libraries(task_delay PRIVATE
        pico_cyw43_arch_none
    )
endif()

# Another pico macro which generates the uf2 file in addition to the elf
pico_add_extra_outputs(task_delay)

add_custom_target(flash_task_delay picotool load -f $<TARGET_FILE:task_delay> DEPENDS task_delay)


# ----ADD BINARY FOR TASK SLEEP----
add_executable(sleep
    sleep.c
    )

pico_set_program_name(sleep "sleep")
pico_set_program_version(sleep "0.1")

# Modify the below lines to enable/disable output over UART/USB.
# These are mutually exclusive, only set one.
pico_enable_stdio_uart(sleep 0)
pico_enable_stdio_usb(sleep 1)

# Add the libraries to the build
target_link_libraries(sleep PRIVATE
  pico_stdlib
  pico_multicore
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
)

# The CYW43 is the Wifi/Bluetooth module. If the board is set to pico_w, this
# variable will be set and the wireless libraries added.
if(PICO_CYW43_SUPPORTED)
    # For led support on pico_w
    target_link_libraries(sleep PRIVATE
        pico_cyw43_arch_none
    )
endif()

# Another pico macro which generates the uf2 file in addition to the elf
pico_add_extra_outputs(sleep)

add_custom_target(flash_sleep picotool load -f $<TARGET_FILE:sleep> DEPENDS sleep)
