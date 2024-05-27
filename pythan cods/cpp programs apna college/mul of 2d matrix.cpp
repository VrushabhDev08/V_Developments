#include<iostream>
using namespace std ;
int main(){
	int n1,n2,n3;//1st martix column=2nd martix row
	int i , j ,k; 
	int m1[n1][n2];
	int m2[n2][n3];
	cout<<"enter the martix 1:\n";
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			cin>>m1[i][j];
		}
	}
	
	cout<<"enter the martix 2:\n";
	for(i=0;i<n2;i++){
		for(j=0;j<n3;j++){
			cin>>m2[i][j];
		}
	}
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
		cout<<m1[i][j]<<" ";
		}
		cout<<endl;
	}
	
		for(i=0;i<n2;i++){
		for(j=0;j<n3;j++){
		cout<<m2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//here we also have to declare the ans martix
	int ans[n2][n2];
	for(i=0;i<n2;i++){
		for(j=0;j<n2;j++){
			ans[i][j]=0;
		}
	}
	
	// from here we start out multiplication
	for(i=0;i<n1;i++){
		for(j=0;j<n3;j++){
			// here our main ultiplication is here
			for(k=0;k<n2;k++){
					ans[i][j] += m1[k][j] * m2[i][k];
			}
		}
	}
	for(i=0;i<n1;i++){
		for(j=0;j<n3;j++){
			cout<<ans[i][j]<<" ";
			cout<<endl;
		}
		
	}
	
	return 0 ;
}
