// WAP to print appraite message using fucntion for given input by user
#include<stdio.h>
void status(char x);
int main()
{
	char a;
	printf("Enter your realtionship status reationship - 'Y' & single - 'S'\n");
	scanf("%c",&a);
	status(a);
}
void status(char x)
{
	if(x =='Y')
	{
		printf("Congrulations!!!!!!!!\n");
	}
	else if (x =='S')
	{
		printf("Better luck next time\n");
	}
	else
	{
		printf("Enter the valid input!!!");	
	}
}

void workshop( char a)
{
	printf("Hello Guys");
}