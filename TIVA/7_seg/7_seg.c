 #include<stdint.h>
#include<stdbool.h>
#include<inc/tm4c123gh6pm.h>
#include<inc/hw_memmap.h>
#include<driverlib/gpio.h>
#include<driverlib/sysctl.h>
int main(void)
{   int i=0,j=0;
char a[10]={0xC0,0XF9,0XA4,0XB0,0X99,0X92,0X82,0XF8,0X80,0X98};
    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_8);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    GPIOPinTypeGPIOOutput(GPIO_PORTB_BASE,GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7);
    GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE,GPIO_PIN_7|GPIO_PIN_6|GPIO_PIN_5|GPIO_PIN_4);
    //GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_7|GPIO_PIN_6|GPIO_PIN_5|GPIO_PIN_4,0XFF);// -for all 4 segments
    GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_7|GPIO_PIN_6,0XFF);//for 0 to 99
    //GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_7,0xFF);//- for only one segment only
    while(1)
    {
      for(i=0;i<10;i++)
      {
         for(j=0;j<10;j++)
         {   GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_7,0X80);
             GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_6,0X00);
             GPIOPinWrite(GPIO_PORTB_BASE,GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7,a[i]);//red
             SysCtlDelay(2500000*1/3);
             GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_7,0X00);
             GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_6,0X40);
             GPIOPinWrite(GPIO_PORTB_BASE,GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7,a[j]);//red
             SysCtlDelay(25000000*1/3);

         }

      }
    }}
