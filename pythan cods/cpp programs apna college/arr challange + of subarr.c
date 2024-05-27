#include<stdio.h>
int main(){
	int n,i,j,count=0;
	int a[n];
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\t");
	for(i=0;i<n;i++){
	printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++){
		count=0;
		for(j=i;j<n;j++){
			count+=a[j];
			printf("%d\t",count);
		}
	}
	return 0 ;
}
