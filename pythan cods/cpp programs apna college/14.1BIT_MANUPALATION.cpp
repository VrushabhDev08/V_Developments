#include<iostream>
using namespace std ;
int getbit(int n ,int pos)
{
	return (n & (1<<pos)!=0);
}
int setbit(int n ,int pos)
{
	return (n | (1<<pos));
}
int clearbit(int n ,int pos)
{ 
    int v = ~(1<<pos);
	return (n & v);
}

int main()
{
   cout<<"the value clear bit  is:"<<clearbit(6,2)<<endl;
   cout<<"the value get bit  is:"<<getbit(6,2)<<endl;
   cout<<"the value set bit  is:"<<setbit(6,2)<<endl;
 //  cout<<"the value update bit  is:"<<updatebit(6,2)<<endl;	
   return 0;
}