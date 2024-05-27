#include <lpc214x.h>
void delay_ms(unsigned int counts); // Generate delay 
int main(void)
{
PINSEL0=0x00;
IODIR0 = (1<<10); 	//Configure Pin P0.10 as Output to on/off the LED
PLL0CON = 0x01;   	//Enable PLL
PLL0CFG = 0x00024; //Multiplier and divider setup
PLL0FEED = 0xAA;  //Feed sequence
PLL0FEED = 0x55;
while(!(PLL0STAT & 0x00000400)); //is locked?
PLL0CON = 0x03;   	//Connect PLL after PLL is locked
PLL0FEED = 0xAA; 	 //Feed sequence
PLL0FEED = 0x55;
VPBDIV = 0x00;    	   // PCLK is  CCLK/4 i.e.15 MHz
T0CTCR = 0x00; 	  //Set Timer 0 into Timer Mode
T0PR = 59999;  		 //Increment T0TC at every 60000 clock cycles
   	 			 //Count begins from zero hence subtracting 1
    	 			//60000 clock cycles @15Mhz = 4 mS
T0TCR = 0x02;   	//Reset Timer
    
while(1)
    {
        IO0SET = (1<<10); //Turn ON LED
        delay_ms(5);
        IO0CLR = (1<<10); //Turn LED OFF
        delay_ms(5);
    }
    //return 0;  
}
 
void delay_ms(unsigned int counts) //Using Timer0
{  
T0TC=0x00; // reset to 0
    	T0TCR = 0x02;        //Reset Timer
    	T0TCR = 0x01;        //Enable timer
   
    	while(T0TC < counts);//wait until TC reaches the desired delay
   
    	T0TCR = 0x00;        //Disable timer
}
