#include<iostream>
#include<math.h>
using namespace std;
int mul(int n,int p)
{
	if(p==0){
		return 1;
	}
	
   int premul=mul(n,p-1);
   return n*premul;
}
int main()
{
    int n,p ;
    cout<<"enter the no. and raised to power:";
    cin>>n>>p;
    cout<<mul(n,p);
   return 0;
}