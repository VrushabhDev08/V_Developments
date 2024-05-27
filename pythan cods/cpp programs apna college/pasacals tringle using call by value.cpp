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
cout<<"enter the no. for pasacls tringle :";
cin>>n;
for(int i=0;i<=n;i++){
	for(int j=0;j<=i;j++){
		cout<< fact(i)/(fact(j)*fact(i-j))<<"  " ;
	}
	cout<<endl;//karan each row new line var start kar
}
	
}
