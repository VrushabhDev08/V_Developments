#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct Queue
    {
        int front;
        int rear;
        int element;
        int a[20];
    }Q;
    int i,c;
    Q.rear=-1;
    Q.front=-1;
    while(1)
    {
         printf("enter choice\tinsertion:1 deletion:2 display:3 exit:4\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:printf("insertion\n");
            if(Q.rear!=9)
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
                printf("enter element to be insearting\n");
                scanf("%d",&Q.element);
                Q.a[Q.rear]=Q.element;
            }
            else
            {
                printf("Queue is full\n");
            }
            break;

            case 2:printf("deletion\n");
            if(Q.front==-1)
            {
                printf("Queue is empty");
            }
            else if(Q.rear==Q.front)
            {
                printf("element deleted is %d\n",Q.a[Q.front]);
                Q.front=-1;
                Q.rear=-1;
            }
            else
            {
                printf("element deleted is %d\n",Q.a[Q.front]);
                Q.front++;
            }
            break;
            case 3:printf("display\n");
            if(Q.front==-1)
            {
                printf("Queue is empty\n");
            }
            else
            {
                for(i=Q.front;i<=Q.rear;i++)
                {
                    printf("%d\t",Q.a[i]);
                }
                break;
            }
            case 4:printf("exit\n");
            return 0;
            break;
        }
    }
}


