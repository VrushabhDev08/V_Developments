#include<stdio.h>
int binarysearch(int a[],int n, int key){
	int s=0;
	int e=n;
	while(s<=e){
		int mid=(s+e)/2;
		if (a[mid]==key){
			return mid;
		}
		else if (a[mid]>key){
			e=mid - 1;
		}
		else{
			s=mid + 1;
		}
	}
}
int main(){
	int n,i,j,temp ;
	int a[n];
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(a[i]>a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
		int key;
	scanf("%d",&key);
	printf("%d",binarysearch(a,n,key));
	return 0 ;
	
}
