//SELECTION SORT
//20UET081
#include<stdio.h>
int main()
{
    int a[10];
    int i,j,n,temp=0,min;
    printf("enter size of array:\n");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
            min=j;
            }
        }

            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        
    }
    printf("sorted array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}   

