#include<iostream>
using namespace std ;
int main (){
	
	int n ;
	cout<<"enter the size of an array:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}cout<<endl;
	
	int current=0;// stores the sum 
	for(int i=0;i<n;i++){
		current=0;
		for(int j=i;j<n;j++){
			current +=arr[j];
			cout<<current<<endl;
		}
		
	}
	return 0;
}
