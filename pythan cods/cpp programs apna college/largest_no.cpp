#include<iostream>
using namespace std ;
int main(){
	int n ;
	
	cout<<"Enter the size of an character array:";
	cin>>n;
	cin.ignore();
	char a[n+1];
	cin.getline(a,n);
	cin.ignore();
	int i=0;
	int curr=0;
	int maxl=0;
	int st=0;
	int maxst=0;
	while(1){
		if(a[i]== ' ' || a[i]== '\0')
		{
		  if(curr > maxl){
		  	maxl=curr;
		  	maxst=st;
		  }	
		 curr=0;  
		 st=i+1;
		}
		
		else
		{
			curr ++;
		}
		
		if(a[i]=='\0'){
			break ;
			i++ ;
		}
	}
	cout<<maxl<<endl;
	for(int i=0;i<maxl;i++){
		cout<<a[i+maxl];
	}
	return 0 ;
}
