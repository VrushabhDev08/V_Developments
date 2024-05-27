#include<iostream>
using namespace std;
void fib(int n)
{
  int t1=0;
  int t2=1;
  int nexterm ;
  for (int i=0;i<=n;i++)
  {
  	   cout<<t1<<endl;
  	     nexterm=t1 +t2;
  	     t1=t2;
  	     t2=nexterm;
	  }	
	  return ;
}
int main()
{
	int n ;
	cout<<"enter the no.";
	cin>>n;
	fib(n);
}