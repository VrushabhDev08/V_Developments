 #include<stdint.h>
#include<stdbool.h>
#include<inc/tm4c123gh6pm.h>
#include<inc/hw_memmap.h>
#include<driverlib/gpio.h>
#include<driverlib/sysctl.h>
int main(void)
{   int i=0;
int a[8]={0x00,0x02,0x08,0x0A,0x04,0x06,0x0C,0x03};
    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_8);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_1);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_2);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_3);
    while(1)
    {
      for(i=0;i<8;i++)
      {
          GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,a[i]);//red
          SysCtlDelay(25000000*1/3);
          GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x00);//red off
          SysCtlDelay(25000000*1/3);
      }
//        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,0x02);//red
//        SysCtlDelay(25000000*1/3);
//        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,0x00);//red off
//        SysCtlDelay(25000000*1/3);
//        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_2,0x04);//red
//        SysCtlDelay(25000000*1/3);
//        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_2,0x00);//red off
//        SysCtlDelay(25000000*1/3);
//        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_3,0x08);//red
//        SysCtlDelay(25000000*1/3);
//        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_3,0x00);//red off
//        SysCtlDelay(25000000*1/3);

    }
}
