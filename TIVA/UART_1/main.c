#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_memmap.h"
#include "inc/tm4c123gh6pm.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include"driverlib/uart.h"
#include"utils/uartstdio.h"
#include"utils/uartstdio.c"

int main(void)

{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
     SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
     GPIOPinConfigure(GPIO_PA0_U0RX);
     GPIOPinConfigure(GPIO_PA1_U0TX);
     GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_1|GPIO_PIN_0);
     UARTClockSourceSet(UART0_BASE, UART_CLOCK_PIOSC);
     UARTStdioConfig(0, 9600, 16000000);
        while(1)
                  {
            UARTprintf("Hello from Tiva\n");
            SysCtlDelay(13333333);


}}
