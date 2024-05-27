#include<stdint.h>
#include<stdbool.h>
#include<inc/tm4c123gh6pm.h>
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
#include<driverlib/pin_map.h>
#include<driverlib/sysctl.h>
#include<driverlib/uart.h>
#include<utils/uartstdio.h>
#include<utils/uartstdio.c>

#define  SLAVE_ADDRESS_1      0X3C
#define  SLAVE_ADDRESS_2      0X4C

int switch1 = 0;
int switch2 = 0;

void InitConsole(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    GPIOPinConfigure(GPIO_PA0_U0RX);
    GPIOPinConfigure(GPIO_PA1_U0TX);
    GPIOPinTypeUART(GPIO_PORTA_BASE,GPIO_PIN_0|GPIO_PIN_1);
    UARTClockSourceSet(UART0_BASE,UART_CLOCK_PIOSC);
    UARTStdioConfig(0,9600,16000000);
}
void I2C0_Init(void)
{
        SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);
        SysCtlPeripheralReset(SYSCTL_PERIPH_I2C0);
        SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
        GPIOPinConfigure(GPIO_PB2_I2C0SCL);
        GPIOPinConfigure(GPIO_PB3_I2C0SDA);
        GPIOPinTypeI2CSCL(GPIO_PORTB_BASE,GPIO_PIN_2);
        GPIOPinTypeI2C(GPIO_PORTB_BASE,GPIO_PIN_3);

        I2CMasterInitExpClk(I2C0_BASE,SysCtlClockGet(),false);
}

void I2C0_Send(uint16_t device_address,uint8_t device_data)
{
    I2CMasterSlaveAddrSet(I2C0_BASE,device_address,false);
    I2CMasterDataPut(I2C0_BASE,device_data);
    UARTprintf("data sent to slave");
    I2CMasterControl(I2C0_BASE,I2C_MASTER_CMD_SINGLE_SEND);
}

void switch_init()
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOInput(GPIO_PORTF_BASE,GPIO_PIN_0|GPIO_PIN_4);
    GPIOPadConfigSet(GPIO_PORTF_BASE,GPIO_PIN_4,GPIO_STRENGTH_4MA,GPIO_PIN_TYPE_STD_WPU);
    HWREG(GPIO_PORTF_BASE+GPIO_O_LOCK)=GPIO_LOCK_KEY;
    HWREG(GPIO_PORTF_BASE+GPIO_O_CR)|=0X01;
    GPIOPadConfigSet(GPIO_PORTF_BASE,GPIO_PIN_0,GPIO_STRENGTH_4MA,GPIO_PIN_TYPE_STD_WPU);
}
int main(void)
{
    uint32_t a;
    uint32_t b;
    uint32_t status;

    SysCtlClockSet(SYSCTL_SYSDIV_5|SYSCTL_USE_OSC|SYSCTL_OSC_MAIN|SYSCTL_XTAL_16MHZ);

    I2C0_Init();
    InitConsole();
    switch_init();

    I2CMasterIntEnable(I2C0_BASE);
    IntMasterEnable();

    UARTprintf("I2C Slave Interrupt Example ->");
    UARTprintf("\n Module=I2C0");
    UARTprintf("\n Mode=Receive interrupt on the Slave module");
    UARTprintf("\n Rate=100kbps\n\n");

    while(1)
    {
        if(!GPIOPinRead(GPIO_PORTF_BASE,GPIO_PIN_0))
        {
            UARTprintf("Slave 2 Selected\n");
            switch2=1;
            switch1=0;
            SysCtlDelay(400000);
        }
        if(!GPIOPinRead(GPIO_PORTF_BASE,GPIO_PIN_4))
                {UARTprintf("Slave 1 Selected\n");
                switch2=0;
                switch1=1;
                SysCtlDelay(400000);
            }
    if(switch1 == 1)
    {
        if(UARTCharsAvail(UART0_BASE))
        {
            a=UARTCharGet(UART0_BASE);
            UARTprintf("Transferring from:Master -> Slave\n");
            UARTprintf("Sending: '%c'",a);
            I2C0_Send(SLAVE_ADDRESS_1,a);
        }
    }
    if(switch2 == 1)
    {
        if(UARTCharsAvail(UART0_BASE))
            {
                b=UARTCharGet(UART0_BASE);
                UARTprintf("Transferring from:Master -> Slave\n");
                UARTprintf("Sending: '%c'",b);
                I2C0_Send(SLAVE_ADDRESS_2,b);
            }
    }
}
}
