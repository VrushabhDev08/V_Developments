// swap the 2   
#include<stdio.h>
void swapArr(int *a , int *b)
{
    short int i=0;
    for(i=0;i<5;i++)
    {
        *(a+i)=(*(a+i)+*(b+i));
        *(b+i)=(*(a+i)-*(b+i));
        *(a+i)=(*(a+i)-*(b+i));
    }
    
    printf("The the array a is \n");
    for(i=0;i<5;i++)
    printf("%d ",*((a)+i));
    printf("\nThe the array b is \n");
    for(i=0;i<5;i++)
    printf("%d ",*(b+i));
}
int main()
{
    int a[5] = {1,2,3,4,5};
    int b[5]={6,7,8,9,0};
    swapArr(a,b);
}