#include<iostream>
#include<math.h>
using namespace std;
int mul(int n)
{
	if(n==0)
	{
		return 0;
	}
	
   int premul=mul(n-1)+n;
   return premul;
}
int main()
{
    int n ;
    cout<<"enter the febonacii no.:";
    cin>>n;
    cout<<mul(n);
   return 0;
}