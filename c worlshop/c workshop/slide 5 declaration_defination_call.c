// Write a C program for printing the sentences using functions.
#include<stdio.h>
void workshop();// here the function is decleared
void dkte();
int main()
{
	workshop();// here the function is call 
	dkte();
// here we can call function in multiple times
//	workshop();
//	workshop();
//	workshop();
//	workshop();
	return 0;
}
void workshop()// here the function is defined 
{
	printf("Welcome in the C programing workshop\n");
	
}
void dkte()
{
	printf("Welcome to DKTE\n");
}