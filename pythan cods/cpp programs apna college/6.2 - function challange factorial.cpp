#include<iostream>
using namespace std;
int fact(int n)
{
	int factorial =1;
	for (int i=2;i<=n;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
}
int main()
{
	int n ;
	cout<<"enter the no. :";
	cin>>n;
	int ans=fact(n);
	cout<<ans<<endl;
}