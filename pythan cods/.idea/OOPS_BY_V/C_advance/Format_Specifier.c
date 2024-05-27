#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
struct student
{
    int age ;
    int sal;
    int roll;
    /* data */
};

int main()
{

//    unsigned int a = 45 ;
//     char v[]="Vrushabh Sanjay Bastwade";
//     printf("Hello vrushabh \n");
//     printf("The number is %d\n",a);
//     printf("%c\n",v[0]);
//     int *ptr= &a;
//     printf("Address is %g",a);
    
//     return 0;
// uint32_t v =90;
// uint64_t a = 45;
// //INT16_MAX x = 45;
// uintmax_t z;
// uint64_t *ptr = &a;
// printf("\n%d",ptr);
// int a=45;
// int b=9;
// int c =32;
// int *ptr = NULL;
// int **ptra = &ptr;
// int ***ptrb = &ptra;
// printf("\n%d",**ptra);
// printf("\n%d",***ptrb);
int *ptr = (int*)malloc(6 * sizeof(int));
//ptra = (int*)malloc(5 * sizeof(int));
if(ptr == NULL)
{
    printf("Memory deallocated");
}
student v1,v2,v3;
// v1.age = 28;
// v1.sal = 70000;
struct student *ptrb = &v1;
printf("%d"ptrb);

// uint8_t v[3]={25,2,3};
// printf("\n%d",sizeof(v));
// uint8_t *ptra = &v;
// for(int i=0;i<3;i++)
// {
//     printf("\n%d",*ptra++);
// }
// ptr[1]=88;
// printf("\n%d",*(ptr+i));


//अगर मगर काश मे हु मैं खुद अपनी तलाश मे हु .....





// printf("\n%d",x);
// printf("\n%d",z);
// printf("\n%d",c);
}