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
#include"driverlib/i2c.h"
#include"driverlib/debug.h"
#include "inc/hw_types.h"
#include "inc/hw_i2c.h"

#define SLAVE_ADDRESS   0X3C   //address of slave
#define SLAVE_ADDRESS1  0X3D //adress of the next slave
void InitConsole(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    GPIOPinConfigure(GPIO_PA0_U0RX);
    GPIOPinConfigure(GPIO_PA1_U0TX);
    GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    UARTClockSourceSet(UART0_BASE, UART_CLOCK_PIOSC);
    UARTStdioConfig(0, 9600, 16000000);
}
void I2C0_Init(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);
    SysCtlPeripheralReset(SYSCTL_PERIPH_I2C0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
    GPIOPinConfigure(GPIO_PB2_I2C0SCL);
    GPIOPinConfigure(GPIO_PB3_I2C0SDA);
    GPIOPinTypeI2CSCL(GPIO_PORTB_BASE, GPIO_PIN_2);
    GPIOPinTypeI2C(GPIO_PORTB_BASE, GPIO_PIN_3);
    I2CMasterInitExpClk(I2C0_BASE,SysCtlClockGet(),false);
}
void I2C0_Send(uint16_t device_address, uint8_t device_data)
{
    I2CMasterSlaveAddrSet(I2C0_BASE,device_address,false);
    I2CMasterDataPut(I2C0_BASE, device_data);
    UARTprintf("data sent to slave1");
    I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_SINGLE_SEND);
}

int main(void)
{
    uint32_t g_ui32DataRx;
    uint32_t g_ui32Data2Rx;
    uint32_t status;
    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_5);
    I2C0_Init();
    InitConsole();
    I2CMasterIntEnable(I2C0_BASE);
    IntMasterEnable();
    UARTprintf("I2C Slave Inerrupt Example ->");
    UARTprintf("\n Module = I2C0");
    UARTprintf("\n mode = Receive interrupt on the slave module");
    UARTprintf("\n Rate = 100kbps\n\n");
    while(1)
    {
  //      status=I2CMasterLinesStateGet(I2C0_BASE);
    //    UARTprintf("status before = %d",status);
      //  SysCtlDelay(4000000/3);
//        if(UARTCharsAvail(UART0_BASE))
//        {
//            g_ui32Data1Rx = UARTCharGet(UART0_BASE);
//            UARTprintf("Transferring from Master -> slave1\n");
//            UARTprintf("sending:'%c'",g_ui32Data1Rx);
//            I2C0_Send(SLAVE_ADDRESS ,g_ui32Data1Rx);
//        }
//        else  if(UARTCharsAvail(UART0_BASE))
//        {
//            g_ui32Data2Rx = UARTCharGet(UART0_BASE);
//            UARTprintf("Transferring from Master -> slave2\n");
//            UARTprintf("sending:'%c'",g_ui32Data2Rx);
//            I2C0_Send(SLAVE_ADDRESS1 ,g_ui32Data2Rx);
//        }
          if(UARTCharsAvail(UART0_BASE))
          {
              g_ui32DataRx = UARTCharGet(UART0_BASE);
          }
          if(g_ui32DataRx =='r'|g_ui32DataRx =='g'|g_ui32DataRx =='b')
          {
              UARTprintf("Transferring from Master -> slave1\n");
                        UARTprintf("sending:'%c'",g_ui32DataRx);
                         I2C0_Send(SLAVE_ADDRESS ,g_ui32DataRx);
          }
          else if(g_ui32DataRx =='R'|g_ui32DataRx =='G'|g_ui32DataRx =='B')
          {
              UARTprintf("Transferring from Master -> slave2\n");
                          UARTprintf("sending:'%c'",g_ui32DataRx);
                         I2C0_Send(SLAVE_ADDRESS1 ,g_ui32DataRx);
          }
    }
}
