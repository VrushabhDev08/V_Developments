  #include<stdint.h>
#include<stdbool.h>
#include"inc/tm4c123gh6pm.h"
#include<inc/hw_memmap.h>
#include"inc/hw_types.h"
#include"driverlib/gpio.h"
#include"driverlib/sysctl.h"
#include"driverlib/debug.h"
#include"driverlib/adc.h"
uint32_t a[1];
int main(void)
{
    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_8);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);//ENABLE ADC0 MODULE
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);//ENABLE GPIO FOR ADC
    GPIOPinTypeADC(GPIO_PORTE_BASE,GPIO_PIN_3);//ENABLE AN0 OF ADC MODULE
    ADCSequenceConfigure (ADC0_BASE, 1, ADC_TRIGGER_PROCESSOR, 0);
    ADCSequenceStepConfigure(ADC0_BASE,1,0,ADC_CTL_CH0);
    ADCSequenceEnable(ADC0_BASE,1);
    while(1)
    {
        ADCProcessorTrigger (ADC0_BASE,1);
        ADCSequenceDataGet (ADC0_BASE,1,a);
        SysCtlDelay(2500000*1/3);


    }



}
