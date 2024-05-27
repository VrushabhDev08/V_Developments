#include<stdint.h>
#include<stdbool.h>
#include<inc/tm4c123gh6pm.h>
#include<inc/hw_memmap.h>
#include<driverlib/gpio.h>
#include<driverlib/sysctl.h>

 gpio_init()
        {
     SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_8);
        SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
        GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_1);
            GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_2);
            GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_3);
         //   GPIOPinTypeGPIOInput(GPIO_PORTF_BASE,GPIO_PIN_4); ->for the switch
        }
  led_on()
  {   //|GPIO_PIN_2|GPIO_PIN_3
      GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,0x02);//red

  }
  led_off()
  {
      GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,0x00);//red
  }
  delay()
  {
      SysCtlDelay(25000000*1/3);
  }

