  #include<stdint.h>
#include<stdbool.h>
#include<inc/tm4c123gh6pm.h>
#include<inc/hw_memmap.h>
#include<driverlib/gpio.h>
#include<driverlib/sysctl.h>
//#include<GPIO.h>
int main(void)
{
    uint32_t count=0;
    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_8);
       SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
       GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);
       GPIOPinTypeGPIOInput(GPIO_PORTF_BASE,GPIO_PIN_4); //->for the switch
       GPIOPadConfigSet(GPIO_PORTF_BASE,GPIO_PIN_4,GPIO_STRENGTH_4MA,GPIO_PIN_TYPE_STD_WPU);
       while(1)
       {
           if((GPIOPinRead(GPIO_PORTF_BASE,GPIO_PIN_4)))
           {
               GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x0C);//red
                        SysCtlDelay(25000000*1/3);


           }
           else
           {
               GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x00);//red
                        SysCtlDelay(25000000*1/3);
                       count++;

           }
       }

}
