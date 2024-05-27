#include<iostream>
using namespace std ;
int main()
{
	int n ;
	cout<<"enter the size:\n";
	cin>>n;
	int a[n];
		for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
	for(int i=0;i<n;i/=2)
	{
		cout<<a[i]<<" "<<endl;
	}
}