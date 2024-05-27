#include<iostream>
using namespace std ;
int main(){
	int n,m;
	cout<<"enter the 2D array: ";
	cin>>n>>m;
	int a[n][m];
	cout<<"enter the array elements:"<<endl;
	for(int i=0;i<n;i++){
		for(int j = 0 ;j<m;j++){
			cin>>a[i][j];
		}
		cout<<"\t";
	}
	   int key ;
  cout<<"enter the key:";
 cin>>key;
	for(int i=0;i<n;i++){
		for(int j = 0 ;j<m;j++){
		    if(a[i][j]==key){
		    	cout<<"element is at:";
		    	cout<<i<<" "<<j;
			}
		}
	}
	
	return 0 ;
}


