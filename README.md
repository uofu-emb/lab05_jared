# Lab 5
In this lab we measure differnt runtimes with differnt ways of delay.

## Activity 1
1. **sleep.c without busy loop** - Expected: 1.00s, Observed: 1.000008s, Drift for 1 hour: 28.8ms
1. **sleep.c with busy loop** - Expected: 1.00s, Observed 1.002492s, Drift for 1 hour: 8.971s\

1. **timer.c without busy loop** - Expected: 1.00s, Observed: 1.000008s, Drift for 1 hour: 28.8ms
1. **timer.c with busy loop** - Expected: 1.00s, Observed 1.000008s, Drift for 1 hour: 28.8ms\

1. **task_delay.c without busy loop** - Expected: 1.00s, Observed: 1.000008s, Drift for 1 hour: 28.8ms
1. **task_delay.c with busy loop** - Expected: 1.00s, Observed 1.004004s, Drift for 1 hour: 14.414s\

## Activity 2
1. **gpio_interupt.c without busy loop** There is no delay between sync signal and response. Jitter is 3.4us.
1. **gpio_interupt.c with busy loop** There is a delay of 1.242ms between sync signal and response. Jitter is 4.3us.

