#include<stdio.h>
int main()
{
    if(sizeof(int)>-1)
    {
        printf("Hello world");
    }
    else
    {
        printf("Hello india");
    }
    return 0;
}
/*
> < == these all operate between the 2 operands which is same data type
the size return the data typw which is the unsigned
and -1 is signed because of this the condition is false
*/ 