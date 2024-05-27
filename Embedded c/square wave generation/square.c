#include<reg51.h>
sbit wave = P1^0;
void delay()
{
	 unsigned int i;
	TMOD=0x10;
	for(i=0;i<14;i++)
	{
		TH1=0x00;
		TL1=0x00;
		TR1=1;
		while(TF1==0);
		TF1=0;
	}
}
void main()
{
	wave=0;
	while(1)
	{
	wave =1;
	delay();
	wave = 0;
	delay();
	}
}