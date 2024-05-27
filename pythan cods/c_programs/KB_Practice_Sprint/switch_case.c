#include<stdio.h>
void great(int a , int b)
{
   switch((a>=b ? 1 : 2 )&& (a!=b))
   {
      case 1:
         printf("A is greater");
         break;
      case 2:
         printf("B is greater");
         break;
   }
}
int main()
{
    int a,b;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    great(a,b);

    return 0;
}