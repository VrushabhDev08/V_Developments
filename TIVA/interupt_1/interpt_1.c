  #include<stdint.h>
#include<stdbool.h>
#include<inc/tm4c123gh6pm.h>
#include<inc/hw_memmap.h>
#include<driverlib/gpio.h>
#include<driverlib/sysctl.h>
#include"inc/hw_ints.h"
#include<driverlib/interrupt.h>
int main(void)
{
    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_8);
          SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
          GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_1);
          GPIOPinTypeGPIOInput(GPIO_PORTF_BASE,GPIO_PIN_4); //->for the switch
          GPIOPadConfigSet(GPIO_PORTF_BASE,GPIO_PIN_4,GPIO_STRENGTH_4MA,GPIO_PIN_TYPE_STD_WPU);
          GPIOIntEnable(GPIO_PORTF_BASE,GPIO_INT_PIN_4);
          IntEnable(INT_GPIOF);
         // gpio_init()
          while(1)
          {
}}
          void isr()
          {
              GPIOIntClear(GPIO_PORTF_BASE,GPIO_INT_PIN_1);
              GPIOPinWrite(GPIO_PORTF_BASE,GPIO_INT_PIN_1,0x02);
              SysCtlDelay(40000000*1/3);
              GPIOPinWrite(GPIO_PORTF_BASE,GPIO_INT_PIN_1,0x00);
              SysCtlDelay(40000000*1/3);
          }
