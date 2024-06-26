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

#define SLAVE_ADDRESS   0X3D   //address of slave
static uint32_t g_ui32DataRx , Tx_Data;
void I2C0Slave2IntHandler(void)
{
    I2CSlaveIntClear(I2C0_BASE);
    g_ui32DataRx = I2CSlaveDataGet(I2C0_BASE);

}
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
    I2CSlaveEnable(I2C0_BASE);
    IntEnable(INT_I2C0);
    I2CSlaveIntEnableEx(I2C0_BASE,I2C_SLAVE_INT_DATA);
    I2CSlaveInit(I2C0_BASE,SLAVE_ADDRESS);
    IntMasterEnable();
    I2CIntRegister(I2C0_BASE,I2C0Slave2IntHandler);

}
int main(void)
{

    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_5);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);

    I2C0_Init();
    InitConsole();
    while(1)
    {
        switch (g_ui32DataRx)
        {
        case 'R':
            GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0X02);
            break;
        case 'G':
            GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0X08);
             break;
        case 'B':
            GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0X04);
            break;
        }
    }
}
