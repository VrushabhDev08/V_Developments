#include<iostream>
#include<math.h>
using namespace std;
int mul(int n)
{
	if(n==1)
	{
		return 1;
	}
	
   int premul=mul(n-1)*n;
   return premul;
}
int main()
{
    int n ;
    cout<<"enter the no. and raised to power:";
    cin>>n;
    cout<<mul(n);
   return 0;
}