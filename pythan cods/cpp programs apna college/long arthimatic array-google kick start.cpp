#include<iostream>
using namespace std ;
int main(){
	int n,ans ; 
	cout<<"enter the size of an arry:";
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++)
	{
		cin>>a[i];	
	}
	
	int j=2;
	int pd=a[1]-a[0];
	int curr=2;
	while(j<n){
		if(pd==a[j]-a[j-1]){
			curr++;
		}
		else{
			pd=a[j]-a[j-1];
			
		}
		 ans= max(ans,curr);
	
	}
	cout<<ans;
		return 0 ;
}
