/*The principle of inclusion-exclusion says that in order to
 count only unique ways of doing a task, we must add the number
  of ways to do it in one way and the number of ways to do it in
   another and then subtract the number of ways to do the task 
that are common to both sets of ways.*/
#include<iostream>
using namespace std ;
 int divisible(int n,int a,int b);
int main()
{
	int n,a,b;
	cout<<"enter the no.:\n";
	cin>>n>>a>>b;
	
	cout<<divisible(n,a,b)<<endl;
	
}
int divisible(int n,int a,int b)
{
	int c1=n/a;
	int c2=n/b;
	int c3=n/(a*b);
	
	return c1+c2-(c3);
}