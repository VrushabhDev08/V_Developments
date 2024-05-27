#include<stdio.h>
int main()
{
//	int n;
//	printf("enter the size of the queue:\n");
//	scanf("%d",&n);
    struct queue 
	{
		int item[5];
		int front,rear;
	}Q;
	Q.rear=Q.front=-1;
       int c,d,i,newitem;
       while(1)
       {
       	printf("enter the choice:\n");
        scanf("%d",&c);
        switch(c)
        {
        	case 1:
        		printf("Insertion operation:");
        		
        		if(Q.rear!=5)
        		{
        			if(Q.rear==-1)
        			{
        				Q.rear=0;
        				Q.front=0;
        			//Q.item[Q.rear]=newitem;
					}
					else
					{
						Q.rear++;
					//	Q.item[Q.rear]=newitem;
						
					}
					printf("enter the element to be inserted:");
        		scanf("%d",&newitem);
				}
				else{
					printf("Queue is full");
				}
				break;
				
			case 2:
				printf("Deletion operation");
				if(Q.front!=-1)
				{
					d=Q.item[Q.front];
					if(Q.front==Q.rear)
					{
						Q.front=-1;
						Q.rear=-1;
					}
					else
					{
						Q.front=(Q.front+1)%5;
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
				if(Q.rear!=-1)
				{
					if(Q.front<=Q.rear)
					{
						for(i=0;i<Q.rear;i++)
						{
							printf("%d\t",Q.item[i]);
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