#include<stdio.h>
//using namespace std;
int main(){
	int n,i,j ;
	printf("enter the array elements :");
	scanf("%d",&n);
	int arr[n];
	for ( i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for ( i=0;i<n-1;i++){
		for( j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				
			
			}
		}
	}
	
	for ( i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
