 #include<stdint.h>
#include<stdbool.h>
#include"inc/tm4c123gh6pm.h"
#include<inc/hw_memmap.h>
#include"inc/hw_types.h"
#include"driverlib/gpio.h"
#include"driverlib/sysctl.h"
#include"inc/hw_ints.h"
#include"driverlib/interrupt.h"
#include"driverlib/timer.h"
void Timer0IntHandler(void);
int a=0;
int main(void)
{
    uint32_t ui32Period;
    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_20);
             SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
             GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_3);
             SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER0);
             TimerConfigure(TIMER0_BASE,TIMER_CFG_PERIODIC);
             ui32Period = (SysCtlClockGet())*60;
             TimerLoadSet(TIMER0_BASE,TIMER_A,ui32Period -1);
             IntEnable(INT_TIMER0A);
             TimerIntEnable(TIMER0_BASE,TIMER_TIMA_TIMEOUT);
             TimerEnable(TIMER0_BASE,TIMER_A);
             TimerIntRegister(TIMER0_BASE,TIMER_A,Timer0IntHandler);
             while(1)
             {
             }
}
void Timer0IntHandler(void)
{    TimerIntClear(TIMER0_BASE,TIMER_TIMA_TIMEOUT);
     GPIOIntClear(GPIO_PORTF_BASE,GPIO_INT_PIN_3);
     a++;
    if(a==1)
    {
        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_INT_PIN_3,0x08);
    }
    else if(a==2)
    {
        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_INT_PIN_3,0x00);

    }
    else if(a==4)
    {
        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_INT_PIN_3,0x08);
    }
    else if(a==6)
    {
        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_INT_PIN_3,0x00);
        a=0;
    }



}
