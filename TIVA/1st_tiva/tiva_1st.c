 #include<stdint.h>
#include<stdbool.h>
#include<inc/tm4c123gh6pm.h>
#include<inc/hw_memmap.h>
#include<driverlib/gpio.h>
#include<driverlib/sysctl.h>
#include<GPIO.h>
int main(void)
{
    gpio_init();
    while(1)
    {
        led_on();
        delay();
        led_off();
        delay();
    }
}
