#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,j,*i2;
    while(i<1000)
    {
        printf("Memory leak zali ree\n");
        i2=malloc(10000*sizeof(int));
        if(i%100==0)
        {
            getchar();
        }
        free(i2);
        i++;

    }
    return 0;
}