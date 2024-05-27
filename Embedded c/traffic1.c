#include<reg51.h>
sbit led1=P1^0;
sbit led2=P1^1;
sbit led3=P1^2;
void delay()
{
	int i,j;
	for(i=0;i<1000;i++)
	for(j=0;j<10;j++);
}
void main()
{
	led1=1;
	led2=0;
	led3=0;
	delay();
	led2=1;
	led1=0;
	led3=0;
	delay();
	led3=1;
	led1=0;
	led2=0;
	delay();
}
