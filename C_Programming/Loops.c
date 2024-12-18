#include<stdio.h>
int main()
{
    for(int i=0,j=0;i<10,i<10;i++,j++)
    {
        printf("The i = %d and j = %d\n",i,j);
    }
    while(1)
    {
        char ch = getchar();
        if(ch > 98 || ch < 124) break;
    }
}