#include<stdio.h>
int main()
{
    int a[10];
    int i,j,n,low,high,mid,element;
    printf("enter size of array:\n");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter search element:\n");
    scanf("%d",&element);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==element)
        {
          printf("element found at index %d\n",mid);
          break;
        }
        if(a[mid]<element)
        {
            low=mid+1;
        }
        else 
        {
            high=mid-1;
        }
    }
    
    return 0;
}

