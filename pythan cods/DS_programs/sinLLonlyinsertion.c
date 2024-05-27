#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c,ch,pos,count,value;
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
     temp=head=NULL;
    while(1)
    {
        printf("do you have a node enter 1 \n");
        scanf("%d",&c);
        if(c==0)
        {
        	break;
		}
       else
       {
        {
            newnode=(struct node*) malloc(sizeof(struct node));
            printf("enter node data\n");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
          
           printf("insertion operation\n");
   
          printf("\nbegining:1 last:2 pos:3 aftervalue:4 display:5\n");
          scanf("%d",&ch);
        switch(ch)
          {
            case 1:printf("insertion at begining\n");
            newnode->next=head;
            head=newnode;
            break;

            case 2:printf("\ninsertion at last\n");
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            break;

            case 3:printf("\ninsertion after position\n");
           x:printf("enter position\n");
            scanf("%d",&pos);
            count=1;
            temp=head;
            while(count!=pos)
            {
                if(temp==NULL)
                {
                    printf("\nposition is not in scope of linked list\n");
                    goto x;
                }
                else
                {
                    count ++;
                    temp=temp->next;
                }
            }
            newnode->next=temp->next;
            temp->next=newnode;
            break;

            case 4:printf("\ninsertion after value of node\n");
            y:printf("enter value\n");
            scanf("%d",&value);
            temp=head;
            while(temp->data!=value)
            {
                if(temp==NULL)
                {
                    printf("\nvalue is not in scope of linked list\n");
                    goto y;
                }
                else
                {
                    temp=temp->next;
                }
            }
            newnode->next=temp->next;
            temp->next=newnode;
            break;

            case 5:printf("\ndisplay\n");
            temp=head;
            while(temp!=NULL)
            {
                printf("%d ",temp->data);
                temp=temp->next;
            }
            break;
          }
       }
       }
  } 
  
    return 0;
}    