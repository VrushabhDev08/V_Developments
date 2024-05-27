#include<stdint.h>
#include<stdbool.h>
#include"driverlib/pin_map.h"
#include"inc/hw_memmap.h"
#include"inc/hw_types.h"
#include"driverlib/gpio.h"
#include"driverlib/sysctl.h"
#include"driverlib/pwm.h"
#include<inc/tm4c123gh6pm.h>
uint8_t a;
int i=0;
int main(void)
{

    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_5);
    SysCtlPWMClockSet(SYSCTL_SYSDIV_1);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_PWM1);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypePWM(GPIO_PORTF_BASE,GPIO_PIN_2);
    GPIOPinConfigure(GPIO_PF2_M1PWM6);
    PWMGenConfigure(PWM1_BASE,PWM_GEN_3,PWM_GEN_MODE_DOWN);
    PWMGenPeriodSet(PWM1_BASE,PWM_GEN_3,100);
    PWMOutputState(PWM1_BASE,PWM_OUT_6_BIT,true);
    PWMGenEnable(PWM1_BASE,PWM_GEN_3);
    while(1)
    {
        for(i=1;i<101;i++)
    {
        //a=i*10;
        PWMPulseWidthSet(PWM1_BASE,PWM_OUT_6,i);
        SysCtlDelay(40000000*1/3);
     }
    }
}
