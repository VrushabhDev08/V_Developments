#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	fp=fopen("G:/paritytx.txt","w");
	char org[50]={},flag[]="01111110",ev[50]={},od[50]={};
	int count=0,i,parity;
	printf("Enter the bit stream\n");
	scanf("%s",&org);
	for(i=0;i<strlen(org);i++)
	{
		if(org[i]=='1')
		{
			count++;
		}
	}
	printf("Chose the parity EVEN-0 ODD-1 \n");
	scanf("%d",&parity);
	if(parity ==0)
	{
		ev[0]='0';
		od[0]='1';
	}
	else 
	{
		ev[0]='1';
		od[0]='0';	
	}
	if (count%2==0)
	{
		strcat(org,flag);
		strcat(ev,org);
		strcat(flag,ev);
		printf("The bits are :%s",flag);
	}
	else
	{
		strcat(org,flag);
		strcat(od,org);
		strcat(flag,od);
		printf("The bits are :%s",flag);	
	}
	for(i=0;i<strlen(flag);i++)
	{
		fprintf(fp,"%c",flag[i]);
	}
	fclose(fp);
}