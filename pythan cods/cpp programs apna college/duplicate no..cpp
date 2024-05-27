//duplicate no. in an array
#include<iostream>
using namespace std;
int main()
{
	int n ;
	cout<<"enter the size of an array\n";
	cin>>n;
	int a[n];
	cout<<"enter the array elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	int freq[n];//made for count of doubble element
	for(int i=0;i<n;i++)
	{
		freq[i]=0;//intilize with 0
	}
	//here we start measuring the count 
	for(int i=0;i<n;i++)
	{
		freq[a[i]-1]++;
	}
	int ans=0,maxf=0;
	for(int i=0;i<n;i++)
	{
	  if(freq[i]>maxf)
	  {
	  	maxf=freq[i];
	  	ans=i+1;
		  }	
	}
	
	cout<<ans<<" "<<maxf;
}