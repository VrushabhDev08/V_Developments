#include<iostream>
using namespace std;
int volume(int a,int b)
{
	return a*b*a;
}
int volume(int c,int d,int e)
{
	return c*d*e;
}
int main()
{
	int a,b,c,d,e;
	cout<<"the values are:";
	cin>>a>>b;
	cout<<"the values are:";
	cin>>c>>d>>e;
	
	cout<<volume(a,b)<<endl;
	cout<<volume(c,d,e)<<endl;
}