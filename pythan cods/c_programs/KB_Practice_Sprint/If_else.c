#include<stdio.h>
int elif(int n)
{
    if((n=1) && (n=2))
    {
        return n;
    }
    else{
        printf("Prints nothing");
    }
    printf("\n%d",n);

}
int main()
{
    int n ;
    printf("Enter the number\n");
    scanf("%d",&n);
    n=elif(n);
    printf("The retured value is : %d",elif(n));
    return 0;
}