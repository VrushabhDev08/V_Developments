#include<stdio.h>
int main()
{
    struct circularqueue 
	{
		int item[10];
		int front,rear;
	}CQ;
	CQ.rear=CQ.front=-1;
       int c,n,d,i,newitem;
       while(1)
       {
       	printf("enter the choice:\n");
        scanf("%d",&c);
        switch(c)
        {
        	case 1:
        		printf("Insertion operation:");
        		printf("enter the element to be inserted:");
        		scanf("%d",&newitem);
        		if((CQ.rear+1) %5!=CQ.front)
        		{
        			if(CQ.rear==-1)
        			{
        				CQ.rear=0;
        				CQ.front=0;
        				CQ.item[CQ.rear]=newitem;
					}
					else
					{
						CQ.rear=(CQ.rear+1)%5;
						CQ.item[CQ.rear]=newitem;
						
					}
				}
				else{
					printf("Queue is full");
				}
				break;
				
			case 2:
				printf("Deletion operation");
				if(CQ.front!=-1)
				{
					d=CQ.item[CQ.front];
					if(CQ.front==CQ.rear)
					{
						CQ.front=-1;
						CQ.rear=-1;
					}
					else
					{
						CQ.front=(CQ.front+1)%5;
					}
					printf("item that is deleted is:%d\n",d);
				}
				else
				{
					printf("Queue is empty");
				}
				break;
			case 3:
				printf("display items in the queue:\n");
				if(CQ.rear!=-1)
				{
					if(CQ.front<=CQ.rear)
					{
						for(i=0;i<CQ.rear;i++)
						{
							printf("%d\t",CQ.item[i]);
						}
					
					}
					else
					{
						for(i=CQ.front;i<=10;i++)
						{
						printf("%d\t",CQ.item[i]);
						}
						for(i=0;i<=CQ.rear;i++)
						{
						printf("%d\t",CQ.item[i]);	
						}
					}
				}
				else
				{
					printf("queue is empty\n");
				}
				break;
			case 4:
				printf("exit operation");
				return(0);
				break;
			default:
				printf("enter the correct choice");
				break;
		}
	   }
}