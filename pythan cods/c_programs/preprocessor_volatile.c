#include<stdio.h>
#include "v_cus.c"
#define vb
int main()
{
  int v = add(3,4);
  printf("%d",v);
    #ifdef vb       
        printf("Debugging is enabled\n");
    #else
        printf("Debugging is disabled\n");
    #endif
volatile int a =0;
while(a<10)
{
    printf("%d\t",a++);
}
printf("%d\n",a);
}