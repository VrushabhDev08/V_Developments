#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct CircularQueue
    {
        int front;
        int rear;
        int element;
        int item[5];
    }CQ;
    int i,c,j;
    CQ.rear=-1;
    CQ.front=-1;
    
    while(1)
    {
         printf("enter choice\tinsertion:1 deletion:2 display:3 exit:4\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:printf("insertion\n");
           if((CQ.rear+1)%5!=CQ.front)
           {
               printf("enter item to add\n");
               scanf("%d",CQ.element);
               if(CQ.rear==-1)
               {
                   CQ.rear=CQ.front=0;
               }
               else
               {
                   CQ.rear=(CQ.rear+1)%5;
               }
               CQ.item[CQ.rear]=CQ.element;
           }
           else
           {
               printf("Queue is full\n");
           }
            break;

            case 2:printf("deletion\n");
            if(CQ.front!=-1)
            {
                printf("element deleted is %d\n",CQ.item[CQ.front]);
                if(CQ.front==CQ.rear)
                {
                    CQ.front=CQ.rear=-1;
                }
                else
                {
                    CQ.front=(CQ.front+1)%5;
                }
            }
            else
            {
                printf("Queue is empty\n");
            }
            break;
            
            case 3:printf("display\n");
            if(CQ.front!=-1)
            {
                if(CQ.front<CQ.rear)
                {
                    for(i=CQ.front;i<=CQ.rear;i++)
                    {
                        printf("%d\n",CQ.item[i]);
                    }
                }
                else
                {
                    for(i=CQ.front;i<=4;i++)
                    {
                        printf("%d\n",CQ.item[i]);
                    }
                    for(i=0;i<CQ.rear;i++)
                    {
                        printf("%d\n",CQ.item[i]);
                    }
                }
            }
            else
            {
                printf("Queue is empty\n");
            }
            break;

            case 4:printf("exit\n");
            return 0;
            break;
            
            default :
            printf("enter the correct choice:");
    
        }
    }
}