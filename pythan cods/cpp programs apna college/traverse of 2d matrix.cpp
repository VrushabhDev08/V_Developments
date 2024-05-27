#include<iostream>
using namespace std ;
int main(){
	int n,i,j;
	cout<<"enter the sizes of an array\n";
	cin>>n;
	int a[n][n];
	cout<<"enter the array elements:\n";
	for (int i=0;i<n;i++){
		for( j =0;j<n;j++){
			cin>>a[i][j];
		}
	}
		for (int i=0;i<n;i++){
		for( j =0;j<n;j++){
			cout<<a[i][j]<<" ";
			cout<<endl;
		}}
		
		//here main contraint for tranverse is swapping the indices
		int t=0;
			for ( i=0;i<n;i++){
		for( j =i;j<n;j++){
		   t=a[i][j];
		   a[i][j]=a[j][i];
		   a[j][i]=t;
		}}
		for ( i=0;i<n;i++){
		for( j =0;j<n;j++){
			cout<<a[i][j]<<" ";
			cout<<endl;
		}
		
	}
	return 0 ;
}
