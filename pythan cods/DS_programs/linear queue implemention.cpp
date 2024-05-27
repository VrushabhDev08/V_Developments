#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct queue
	{
		int front , rear ;
		int a[20];
		int element ;
	}Q ;
	int i,c;
	Q.rear=-1;
	Q.front=-1;
	while(1)
	{
		printf("1:insertion\n 2:deletion\n 3:display\n 4:exit\n");
		printf("enter your choice:\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1: 
			printf("insertion operation operater:\n");
			if(Q.rear !=9)
			{
				if(Q.rear==-1)
				{
					Q.rear++;
					Q.front++;
				}
				else
				{
					Q.rear++;
				}
				printf("enter the element to be inserting:\n");
				scanf("%d\n",&Q.element);
				Q.a[Q.rear]=Q.element;
			}
			break;
			
			case 2:
				printf("deletion operation:\n");
				if(Q.front==-1)
				{
					printf("Queue is empty:\n");
					
				}
				else if(Q.rear==Q.front)
				{
					printf("element deleted is %d\n",Q.front);
					Q.front=-1;
					Q.rear=-1;
					
				}
				break ;
				
			case 3 :
				printf("disply operation:\n");
				for(i=Q.front ;i<=Q.rear;i++)
				{
					printf("%d\t",Q.a[i]);
				}
				break ;
			case 4:
			  
			  printf("exit operation:\n");
			  return 0;
			  break ;	
			
		}
	}
}