 #include <stdbool.h>
#include <stdint.h>
#include "inc/hw_memmap.h"
#include "inc/tm4c123gh6pm.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include"driverlib/uart.h"
#include"utils/uartstdio.h"
#include"utils/uartstdio.c"

int main(void)

{
    unsigned  char a;
    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_5);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
           GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
   //  SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
     SysCtlPeripheralEnable(SYSCTL_PERIPH_UART1);
     GPIOPinConfigure(GPIO_PB0_U1RX);
     GPIOPinConfigure(GPIO_PB1_U1TX);
     GPIOPinTypeUART(GPIO_PORTB_BASE, GPIO_PIN_1|GPIO_PIN_0);
     UARTClockSourceSet(UART1_BASE, UART_CLOCK_PIOSC);
     UARTStdioConfig(1, 9600, 16000000);
     //UART_0
     SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
             SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
             GPIOPinConfigure(GPIO_PA0_U0RX);
             GPIOPinConfigure(GPIO_PA1_U0TX);
             GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_1|GPIO_PIN_0);
             UARTClockSourceSet(UART0_BASE, UART_CLOCK_PIOSC);
             UARTStdioConfig(0, 9600, 16000000);

         while(1)
        {
          if(UARTCharsAvail(UART1_BASE))//for pc to mobile 001
                  {
              a = UARTCharGet (UART1_BASE);
             UARTCharPut (UART0_BASE, a);
            //  UARTprintf( "%c",a);
//             if(UARTCharsAvail(UART0_BASE))//for pc to mobile 001
//                              {
//                          a = UARTCharGet (UART0_BASE);
//                         UARTCharPut (UART1_BASE, a);
                if(a ="R" )
                       {
                           GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,0x02);//red

                       }
             else if( a ="G" )
             {
                 GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_2,0x04);//red

             }
             else if(a ="B" )
             {
                 GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_3,0x08);//red

             }
             else if(a ="O" )
             {
                 GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x00);//red

             }

                  }

}}
