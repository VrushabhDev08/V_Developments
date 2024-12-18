#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int vrushabh()
{
    int a;
    printf("\nEnter the number:");
    scanf("%d",&a);
    return ((a>>6)& (0x03));
}

int sonali()
{
    int b;
    printf("\nEnter the number:");
    scanf("%d",&b);
    return ((b>>2)& (0x03));
}
int main()
{
    int b=1;
    int (*calling)();
    calling = (1==1) ? vrushabh : sonali;
    printf("Return value is %d\n",(calling()));
    assert(1==1);

}