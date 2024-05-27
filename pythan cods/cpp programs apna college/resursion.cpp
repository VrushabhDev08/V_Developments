#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int presum =n+sum(n-1);
    return presum ;
}
int main()
{
    int n ;
    cout<<"enter the no. or the sum:";
    cin>>n;
    cout<<sum(n);
   return 0;
}