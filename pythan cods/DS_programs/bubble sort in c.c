 #include<stdio.h>
int main()
{
     int n,i,j,temp=0;
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
    
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]<a[i+1])
            {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;     

            }
    
        }
    }
    printf("\nsorted array elements are:\n");
    for(j=1;j<=n;j++)
    {
        printf("%d\t",a[j]);
    }
    
    return 0;
}

