#include<iostream>
using namespace std ;
int main(){
	int n,m,i;
	cout<<"enter the sizes of an array\n";
	cin>>n>>m;
	int a[n][m];
	cout<<"enter the array elements:\n";
	for (int i=0;i<n;i++){
		for( i =0;i<m;i++){
			cin>>a[n][m];
		}
	}
	
	//here we start ptinting the sprial array
	//let take few variables k for row start and l for colmn start
	//intizalize k & l is 0 & there limits are n&m
	int k=0;//for row
	int l=0;//for column
	while(k<=n&&l<=m){
		//here we print array from left to right that is 1st row
		for( i =k;i<m;i++){
			cout<<a[n][i];
		}
		k++ ;
		//here we print last column fro top to bottom
		for( i =l;i<n;i++){
			cout<<a[i][n-1];
		}
		n--;
		//here we ar printing the last row
		
		
	}
}
