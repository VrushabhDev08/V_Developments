#include<stdio.h>
void swapArr(int *a , int *b)
{
    char i;
    for(i=0;i<5;i++)
    {
       *(a+i)=*(a+i)+*(b+i);
       *(b+i)=*(a+i)-*(b+i);
       *(a+i)=*(a+i)-*(b+i); 
    }

    for(i=0;i<5;i++)
    *(a+i)=(*(a+i)) * (*(a+i));
    
    for(i=0;i<5;i++)
    *(b+i)=(*(b+i)) * (*(b+i));
}
int main()
{
    char i;
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,0};
    int (*ptr)(int*,int*);
    ptr = &swapArr;
    ptr(a,b);   
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
    
    printf("\n");
    for(i=0;i<5;i++)
    printf("%d\t",b[i]);
    return 0;

}