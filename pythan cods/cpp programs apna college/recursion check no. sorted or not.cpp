#include<iostream>
using namespace std;
bool sorted(int a[],int n)
{
    if(n==1)
    {
        return true ;
    }
    bool weget= sorted (a + 1,n-1);
    return (a[0]<a[1]&&weget);

}
int main()
{
    int n ;
    cin>>n;
    int a[n]={1,2,3,4,5};
    cout<<sorted( a[],n);
    
    return 0;
}