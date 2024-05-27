// Identify class of IP adress
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s[20],i=0,j,byte,a,b,c,d,x;
   ip: printf("Enter four bytes: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<=255&&b<=255&&c<=255&&d<=255)
	{
	printf("\n Enter ip address= %d.%d.%d.%d",a,b,c,d);
	
		for(i=0;a!=0;i++)
		{
			s[i]=a%2;
			a=a/2;
		}
		while(i<=7)
		{
			s[i]=0;
			i++;
		}
		printf("\n Binary number is: ");
		for(j=i-1;j>=0;j--)
		{
			printf("%d",s[j]);
		}
		printf("\n Print nibble: ");
		for(j=7;j>=4;j--)
		{
			printf("%d",s[j]);
		}
		if(s[7]==0)
		{
			printf("\n ip address belongs to class A ");
		}
		else if(s[6]==0)
		{
			printf("\n ip address belongs to class B ");
		}
		else if(s[5]==0)
		{
			printf("\n ip address belongs to class C ");
		}
		else if(s[4]==0)
		{
			printf("\n ip address belongs to class D ");
		}
		else 
		{
			printf("\n ip address belongs to class E ");
		}
	}
	else
	{
		printf("Invalid ip adress\n");
		goto ip;
	}

}
