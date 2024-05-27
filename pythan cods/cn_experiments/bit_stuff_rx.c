#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	fp = fopen("G:/BitstuffTX.txt","r");
	char tx[100]={},rx[100]={},ch;
	int i=0,j=0,n=0,count=0,k=0;
	while((fscanf(fp,"%c",&ch))!=EOF)
	{
		tx[n]=ch;
		n++;
	}
	for(i=8;i<n-8;i++)
	{
		if(tx[i]=='0')
		{
			rx[k]=tx[i];
			k++;
			count=0;	
		}
		else
		{
		 count++;
		 rx[k]=tx[i];
		 k++;
		 if(count==5)
		 {
		 	i++;
		 	count=0;
		 }
		}
	}
	printf("The recived bits are:%s",rx);
}