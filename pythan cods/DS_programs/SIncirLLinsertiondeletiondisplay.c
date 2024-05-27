#include<stdio.h>
#include<stdlib.h>

int main()
{
    int c,ch,choice,count,pos;
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
    temp=head=NULL;
    while(1)
    {
        printf("\nenter choice\ncreat newnode:1 delition:2 display:3 exit:4\n");
        scanf("%d",&choice);
        switch(choice)
    {
        case 1:printf("creation new node\n");
            newnode=(struct node*) malloc(sizeof(struct node));
            printf("enter node data\n");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
                temp=newnode;
            }
            else
            {
                temp->next=newnode;
                temp=temp->next;
            }
            temp->next=head;
        break;

        case 2:printf("\nDeletion Operation\n");
            printf("1stnode:1 lastnode:2\n");
            printf("enter choice\n");
            scanf("%d",&ch);
            struct node *prevnode;
            switch(ch)
            {
              case 1:printf("\n1stnode detetion\n");
             temp=head;
             while(temp->next!=head)
             {
                 temp=temp->next;
             }
             temp->next=head->next;
             temp=head;
             head=head->next;
             free(temp);
             break;

              case 2:printf("\nlastnode detetion\n");
               prevnode=NULL;
               temp=head;
               while(temp->next!=NULL)
               {
                  prevnode=temp;
                  temp=temp->next;
               }
              prevnode->next=NULL;
              free(temp);
              break;
            }
            case 3:
            printf("\ndata in the the list:\n");
            temp=head;
            while(temp->next!=head)
            {
                printf("%d ",temp->data);
               temp=temp->next;
            }
            printf("%d",temp->data);
            case 4:
            exit(0);
            break;
    }
    }
    return 0;
}