#include<stdio.h>
int main(){
	int n,i,pos,nw;
		int a[100];
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	//here we start out 
	printf("enter the new element which we have to insert:");
	scanf("%d",&nw);
	printf("enter the positon in:");
	scanf("%d",&pos);
//	if(pos==0){
//		for(i=n;i>0;i--){
//			a[i]=a[i-1];
//			
//		}
//		 a[0]=nw;
//			
//		//	return a[0];
//	}
//	else if (pos==n){
//		//scanf("%d",&a[i]);
//		a[n]=nw;
////	return a[n];
//	
//}
//	else {
      
		//at any positon
		for(i=n;i>=pos;i--){
			a[i]=a[i-1];
			
			}
			a[pos]=nw;
			
		//	return a[pos -1];
			
		//}
			for(i=0;i<=n;i++){
		printf("%d\n",a[i]);
		
		
	}
	return 0;
		
	}

