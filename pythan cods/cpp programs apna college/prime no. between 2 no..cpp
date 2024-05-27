#include<iostream>
#include<math.h>
using namespace std ;

bool inprime(int num)
{
	for(int i=2;i<=num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true ;
}
int main(){
	int a ,b;
	cout<<"enter the two numbers:";
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(inprime(i)){
			cout<<i<<endl;
		}
	}
}
