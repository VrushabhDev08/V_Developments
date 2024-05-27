// Inseartion at
// 20UET020
#include<stdio.h>
int main()
{
    int a[10];
    int i,n,option,p,element;
    printf("enter size of array:\n");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter option for inserting\nend:1 start:2 position:3\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:printf("\nelement inseartin at end:\n");
               scanf("%d",&element);
               a[n]=element;
               break;
        case 2:printf("\nelement insearting at start:\n");      
               printf("enter element:\n");
                for(i=n;i>=0;i--)
                {
                a[i]=a[i-1];
                }
                scanf("%d",&a[0]); 
                break;
        case 3:printf("\nelement inseartin at position:\n"); 
               printf("enter position to insert:\n");
               scanf("%d",&p);
               printf("enter element:\n");
               for(i=n;i>=p;i--)
               { 
                 a[i]=a[i-1];
               }
                scanf("%d",&a[p]);
                break;
        default:printf("\nenter valid option.\n");      
    }
      printf("\n array elements are:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}    

