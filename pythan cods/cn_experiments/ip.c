#include<stdio.h>
#include<string.h>
int main()
{
    int s[20],i=0,j=0,k=0,a,b,c,d;
   input: printf("Enter the four bits:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<=255&&b<=255&&c<=255&&d<=255)
    {
        printf("The bits are:%d.%d.%d.%d\n",a,b,c,d);
        for(i=0;a!=0;i++)
        {
            s[i]=a%2;
            a=a/2;
        }
        while(i<=7)
        {
          s[i]=0;
          i++;
        }
        printf("\nThe bits are:\n");
        for(j=i-1;j>=0;j--)
        {
            printf("%d",s[j]);
        }
        printf("\nThe nibble:\n");
        for(j=i-1;j>3;j--)
        {
            printf("%d",s[j]);
        }
        if (s[7]==0)
        {
            printf("\nClass A\n");
        }
        else if (s[6]==0)
        {
            printf("\nClass B\n");
        }
        else if (s[5]==0)
        {
            printf("\nClass C\n");
        }
        else if (s[4]==0)
        {
            printf("\nClass D\n");
        }
        else
        {
            printf("\nClass E\n");
        }
    }
    else
    {
        printf("\nInvalid input\n");
        goto input;
    }
        
        
    }
