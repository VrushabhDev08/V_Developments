#include<iostream>
using namespace std ;
int fact(int n )
{
	int factorial=1;
	for(int i =2;i<=n;i++){
		factorial=factorial*i;//Or we can use factorial*=i;
		
	}return factorial ;
}
int main ()
{
   cout<<"sucessfully running the vs code:"<<endl;
   cout<<"\ncongrulations vrushabh"; 
   int n,r;
	cout<<"enter the no.:";
	cin>>n>>r;
	int ans=fact(n)/(fact(r)*fact(n-r));
	cout<<"the factorial of "<<n<<" is "<<ans<<endl;
	return 0;

}