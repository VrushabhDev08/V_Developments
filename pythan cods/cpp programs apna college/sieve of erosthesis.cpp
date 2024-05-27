#include<iostream>
using namespace std ;
int getsileve(int n)
{
	int prime[100]={0};//array intilize kela zero niii
	//from here we starting the marking of array
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0)//zero means unmarked
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=1;
			}
		}
	}
	
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0)
		{
			cout<<i<<" ";
		}
	}

}
int main()
{
	int n ;
	cout<<"enter the size of an array :\n";
	cin>>n;
	cout<<getsileve( n);
	return 0;
	
}
