#include<iostream>
using namespace std ;
int swap(int *a,int *b){
	int temp=  *a;
	*a=*b;
	*b=temp;
}
int main(){
	int a , b;
	cout<<"enter the given numbers :\n";
	cin>>a>>b;
	int *aptr= &a;
	int *
	bptr= &b;
	swap(aptr,bptr);
	cout<<a<<" "<<b;
}
