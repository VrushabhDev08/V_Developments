#include<stdint.h>
#include<stdbool.h>
#include"inc/tm4c123gh6pm.h"
#include"inc/hw_memmap.h"
#include"driverlib/gpio.h"
#include"driverlib/sysctl.h"
#include"inc/hw_ints.h"
#include"driverlib/interrupt.h"
#include"driverlib/pwm.h"
#include"driverlib/pin_map.h"
uint32_t a;
int i=0;
int main(void)
{
    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_5);
    SysCtlPWMClockSet(SYSCTL_PWMDIV_64);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_PWM0);
    GPIOPinTypePWM(GPIO_PORTB_BASE,GPIO_PIN_6);
    GPIOPinConfigure(GPIO_PB6_M0PWM0);
    PWMGenConfigure(PWM0_BASE,PWM_GEN_0,PWM_GEN_MODE_DOWN);
    PWMGenPeriodSet(PWM0_BASE,PWM_GEN_0,2000);
    PWMGenEnable(PWM0_BASE,PWM_GEN_0);
    PWMOutputState(PWM0_BASE,PWM_OUT_0_BIT,true);

    while(1)
    {
         for(i=15;i<20;i++)
           {
             PWMPulseWidthSet(PWM0_BASE,PWM_OUT_0,i*100);
             SysCtlDelay(13333333);

           }
    }
}
