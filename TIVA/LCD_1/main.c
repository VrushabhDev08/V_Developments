  #include<stdint.h>
#include<stdbool.h>
#include<inc/tm4c123gh6pm.h>
#include<inc/hw_memmap.h>
#include<driverlib/gpio.h>
#include<driverlib/sysctl.h>
#include"string.h"
unsigned char a[]="vrushabh";
int i ;
lcd_command(unsigned char);
lcd_data(unsigned char);
int main(void)
{
    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_8);
       SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
       SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
       GPIOPinTypeGPIOOutput(GPIO_PORTB_BASE,0XFF);
       GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE,GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6);//EN R/W RS
       lcd_command(0x01);//clear the display
       lcd_command(0x38);//8 bit mode
       lcd_command(0x0E);//display on cursor on
       lcd_command(0x80);//set the cursor at line 1
       while(1)
       {
           for(i=0;i<8;i++)
           {
               lcd_data(a[i]);
           }
           lcd_command(0x01);
       }
}
lcd_command(unsigned char d)
{
    GPIOPinWrite(GPIO_PORTB_BASE,0XFF,d);
    GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_6,0X00);//rs=0
    GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_5,0X00);
    GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_4,0X10);//pin enable
    SysCtlDelay(1333333);
    GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_4,0X00);
    SysCtlDelay(1333333);
}
lcd_data(unsigned char d)
{
    GPIOPinWrite(GPIO_PORTB_BASE,0XFF,a[i]);
    GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_6,0X40);//rs=1
       GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_5,0X00);
       GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_4,0X10);//pin enable
       SysCtlDelay(1333333);
       GPIOPinWrite(GPIO_PORTA_BASE,GPIO_PIN_4,0X00);
       SysCtlDelay(1333333);
}
