#include <stdbool.h>
#include <stdint.h>
#include"inc/hw_i2c.h"
#include"inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include"inc/hw_types.h"
#include "inc/tm4c123gh6pm.h"
#include "driverlib/gpio.h"
#include "driverlib/i2c.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include"driverlib/uart.h"
#include"utils/uartstdio.h"
#include"utils/uartstdio.c"

#define SLAVE_ADDRESS   0X3C  //address of slave
static uint32_t g_ui32DataRx,Tx_data; //a=g_ui32datarx  b=tx_data

void I2C0SlaveIntHnadler(void)
{
    // Clear the I2C0 interrupt flag.
    I2CSlaveIntClear(I2C0_BASE);
    // Read the data from the slave.

    g_ui32DataRx = I2CSlaveDataGet(I2C0_BASE);
//    UARTprintf("the data received is %d\n",a);
//    if(a =-22)
//        I2C0_Send(Tx data);r
//   // 12CSlaveStatus(1200_BASE);
}
void InitConsole(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
               SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
               GPIOPinConfigure(GPIO_PA0_U0RX);
               GPIOPinConfigure(GPIO_PA1_U0TX);
               GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_1|GPIO_PIN_0);
               UARTClockSourceSet(UART0_BASE, UART_CLOCK_PIOSC);
               UARTStdioConfig(0, 9600, 16000000);
}
void I2C0_Init(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);
    SysCtlPeripheralReset (SYSCTL_PERIPH_I2C0);
    SysCtlPeripheralEnable (SYSCTL_PERIPH_GPIOB);
    GPIOPinConfigure( GPIO_PB2_I2C0SCL);
    GPIOPinConfigure(GPIO_PB3_I2C0SDA);
     GPIOPinTypeI2CSCL(GPIO_PORTB_BASE, GPIO_PIN_2);
     GPIOPinTypeI2C(GPIO_PORTB_BASE, GPIO_PIN_3);
    I2CSlaveEnable(I2C0_BASE);
    IntEnable(INT_I2C0);
     I2CSlaveIntEnableEx(I2C0_BASE,I2C_SLAVE_INT_DATA); //Individual Slave Interrupt
    I2CSlaveInit(I2C0_BASE, SLAVE_ADD);
    IntMasterEnable(); //processors interrupt
    I2CIntRegister(I2C0_BASE,I2C0SlaveIntHnadler);

}
int main(void)
{
    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_5);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);

              I2C0_Init();
              InitConsole();

              while(1)
              {
                  switch(g_ui32DataRx)
                  {
                  case 'r':
                      GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x02);
                      break;
                  case 'g':
                  GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x08);
                  break;
                  case 'b':
                  GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x04);
                  break;
                                    }
                                    }
              }
