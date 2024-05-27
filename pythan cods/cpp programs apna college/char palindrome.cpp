#include<iostream>
using namespace std ;
int main(){
	int n ;
	cout<<"enter the size of an character array:";
	cin>>n;
	char a[n+1];
	cin>>a;
	bool check=1;
	for(int i=0;i<n;i++){
		if(a[i]!=a[n-1-i]){
			check =0;
			break ; 
		}
	}
	if(check==1){
		cout<<"enter the no. is palindrome:";
		
	}
	else {
			cout<<"enter the no. is not  palindrome:";
		
	}
}
