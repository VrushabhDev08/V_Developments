#include<iostream>
using namespace std ;
int main()
{
	int n,i ;
	cout<<"enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"enter the array eleents for bubble sort:";
	for(i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	int counter=1;//represents irrations 
	while(counter<n){
		
		for(i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			}
			
		}
		
		
		counter ++;
	}
	
	for(i=0;i<n;i++){
		cout<<arr[i]<<"   ";
	}
}

