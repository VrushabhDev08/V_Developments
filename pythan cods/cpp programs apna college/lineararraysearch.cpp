#include<iostream>
using namespace std ;

int lineararr(int arr[], int n ,int key)
{
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	} return -1;
}
int main()
{
	int n ; 
	cout<<"enter the arry size :";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"any the elements :";
		cin>>arr[i];
	}
	
	int key;
	cout<<"enter the key value:";
	cin>>key;
	cout<<lineararr( arr,  n , key);
	
	
}


