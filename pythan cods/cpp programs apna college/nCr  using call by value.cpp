#include<iostream>
using namespace std ;
int fact(int n )
{
	int factorial=1;
	for(int i =2;i<=n;i++){
		factorial=factorial*i;//Or we can use factorial*=i;
		
	}return factorial ;
}
int main(){
int n ;
for(int i=0;i<=n;i++){
	for(j=0;j<=i;j++){
		cout<<int fact = fact(i)/(fact(j)*fact(i-j))<<   <<endl;
	}
	cout<<endl;//karan each row new line var start kar
}
	
}
