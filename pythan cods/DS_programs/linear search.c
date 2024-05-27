//Linear Search
//20UET020
#include<stdio.h>
int main()
{
     int n, i, key;
    int a[100];
    printf("enter array size:\n");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nenter search element:\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("element found at index:%d",i);
        }
    }
    return 0;


}



