#include<stdint.h>
#include<stdbool.h>
#include<inc/hw_ints.h>
#include<inc/hw_i2c.h>
#include<driverlib/i2c.h>
#include<inc/hw_memmap.h>
#include<inc/hw_types.h>
#include<inc/hw_gpio.h>
#include<driverlib/gpio.h>
#include<driverlib/debug.h>
#include<inc/hw_types.h>
#include<driverlib/pwm.h>
#include<driverlib/ssi.h>
#include<driverlib/pin_map.h>
#include<driverlib/sysctl.h>
#include<driverlib/uart.h>
#include<utils/uartstdio.h>
#include<utils/uartstdio.c>
int main()
{
    uint32_t RX_text[6];
    uint32_t send;
    RX_text[0]='S';
    RX_text[1]='O';
    RX_text[2]='N';
    RX_text[3]='A';
    RX_text[4]='L';
    RX_text[5]='I';
 int i=0;
 SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_5);
 SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI3);
 SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
 GPIOPinTypeSSI(GPIO_PORTD_BASE,GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);
 GPIOPinConfigure(GPIO_PD0_SSI3CLK);
 GPIOPinConfigure(GPIO_PD1_SSI3FSS);
 GPIOPinConfigure(GPIO_PD2_SSI3RX);
 GPIOPinConfigure(GPIO_PD3_SSI3TX);
 SSIConfigSetExpClk(SSI3_BASE,SysCtlClockGet(),SSI_FRF_MOTO_MODE_0,SSI_MODE_MASTER,4000000,8);
 SSIEnable(SSI3_BASE);
 SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
  SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
  GPIOPinConfigure(GPIO_PA0_U0RX);
   GPIOPinConfigure(GPIO_PA1_U0TX);
   GPIOPinTypeUART(GPIO_PORTA_BASE,GPIO_PIN_0|GPIO_PIN_1);
   UARTClockSourceSet(UART0_BASE,UART_CLOCK_PIOSC);
   UARTStdioConfig(0,9600,16000000);
   UARTprintf("MASTER\n");
   SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
        GPIOPinTypeGPIOInput(GPIO_PORTF_BASE,GPIO_PIN_4);
        GPIOPadConfigSet(GPIO_PORTF_BASE,GPIO_PIN_4,GPIO_STRENGTH_8MA,GPIO_PIN_TYPE_STD_WPU);
   while(1)
   {
       while(SSIBusy(SSI3_BASE))
       {

       }
       if(!GPIOPinRead(GPIO_PORTF_BASE,GPIO_PIN_4))
       {
           for(i=0;i<6;i++)
           {
               //send=RX_text[i];
               SSIDataPut(SSI3_BASE,RX_text[i]);
               SysCtlDelay(40000000/3);
               UARTprintf("Data Sent to Slave=%c\n",RX_text[i]);
           }
       }
   }
}
