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
        if(c==1)
        {
            newnode=(struct node*) malloc(sizeof(struct node));
            printf("enter node data\n");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
          
           printf("insertion operation\n");
   
          printf("\nbegining:1 last:2 display:3 exit:4\n");
          scanf("%d",&ch);
          switch(ch)
          {
            case 1:printf("insertion at begining\n");
            newnode->next=head;
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            head=newnode;
            temp->next=head;
            break;
            case 2:printf("\ninsertion at last\n");
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=head;
            break;
            case 3:printf("\ndisplay\n");
            temp=head;
            while(temp->next!=head)
            {
                printf("%d ",temp->data);
               temp=temp->next;
            }
            printf("%d",temp->data);
            break;
            default:
            	printf("enter valid choice\n");
          }
       }
       else
       {
        break;
       }
  }
    return 0;
}    
