#include<stdio.h>
int main()
{
    int a ;
    int *ptr1,**ptr2,***ptr3;
    a=18;
    ptr1=&a;//address of variable is stored in pointer 1
    ptr2=&ptr1;
    ptr3= &ptr2;
    printf("The valu of a by dereferencing the 3rd pointer is %d",***(ptr3));
}
