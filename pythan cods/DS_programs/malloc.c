//MALLOC
//20UET009
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* p;
    int n,i;
    printf("enter value of n:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        printf("Memory is allocated:\n");
        printf("enter array elements:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
        }
    }
    printf("array elements are;\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",p[i]);
    }
    return 0;
}

