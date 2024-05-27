#include<stdio.h>
int main()
{
	int a[7],i,j,n,c[10],max,step=0,t,b[10][5],m,k,x,div=1;
	printf("enter the array elements :");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<7;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("max is %d\n",max);
	for(i=0;i<7;i++)
	{
		while(max>0)
		{
			step ++;
			max=max/10;
		}
	}
	for(i=0;i<step;i++)
	{
		for(x=0;x<10;x++)
		{
			c[x]=0;
		}
		for(j=0;j<7;j++)
		{
			n=(a[j]/div)%10;
			m=c[n];
			c[n]++;
			b[n][m]=a[j];
		}
		k=0;
		for(t=0;t<10;t++)
		{
			for(j=0;j<c[t];j++)
			{
				a[k]=b[t][j];
				k++;
			}
		}
		div=div*10;
	}
	printf("sorted array is: \n");
	for(i=0;i<7;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}