eucliid algo
//yat no. chota karat jatat so tyatun gcd milto in less no. of steps 
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	while(b!=0)
	{
		int rem=a%b;
		a=b;
		b=rem;
		
	}
	return a;
}
int main()
{
	int a,b;
	cout<<"enter the no. that we have to find the gcd :\n";
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
}