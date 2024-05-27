#include<iostream>
using namespace std ;
int main(){
	int n ;
	cout<<"enter the size of an array :";
	cin>>n;
	int a[n];
	cout<<"enter the array elements :";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"find out the duplicate elements :";
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[i]==a[j]){
				cout<<a[j];
				break ;
			}
		}
	}
}