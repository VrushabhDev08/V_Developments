#include<stdio.h>
int main()
{
	int i,n,key,mid,l,h;
	int a[10];
	printf("enter the size of an array\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	printf("enter the eleent to be searched\n");
	scanf("%d",&key);
	//binary search
	l=0;
	h=n-1; 
	while(l<=h)
	{
		mid=(l+h)/2;
		if(mid==key)
		{
			printf("eleent is %d\n",mid);
			break;
		}
		else if(key>a[mid])
		{
			l=mid+1;
		}
		else
		{
			h=mid-1;
		}
	}
}