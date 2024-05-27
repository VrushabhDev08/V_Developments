#include<iostream>
#include<string.h>
using namespace std;
int square (int a)
{
	return a*a;
}
int reatangle(int a,int b)
{
	return a*b;
}
int main()
{
	int a ,b,c;
	
	cout<<"the area of square is:"<<square(4);
	cout<<"\nthe area of square is:"<<reatangle(4,5);
	return 0;
	
}