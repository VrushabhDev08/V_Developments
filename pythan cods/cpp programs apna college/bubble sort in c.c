#include<stdio.h>
//using namespace std ;
int main()
{
	int n,i ;
printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array eleents for bubble sort:");
	for(i=0;i<n;i++){
		scanf("%d",arr[i]);
		
	}
	
	int counter=1;//represents irrations 
	while(counter<n){
		
		for(i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			}
			
		}
		
		
		counter ++;
	}
	
	for(i=0;i<n;i++){
		printf("%d",arr[i]," ");
	}
}

