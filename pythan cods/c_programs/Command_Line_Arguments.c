#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{ char i;
  int a[argc];
    //seprationg of the string
   for(i=1;i<argc;i++)
   {
    if(*(argv[i])=='%')
    {
        i++;
    }
    a[i]=atoi(*(argv[i]));
   }
   for ( i = 0; i < argc; i++)
   {
    printf("%d\t",a[i]);
   }
   
}