#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c;
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head,*newnode,*temp;
	temp=head=NULL;
	while(1)
	{
		printf("do you have a 1/0\n");
		scanf("%d",&c);
		if(c==0)
		{
			break;
		}
		else
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("enter the node data\n");
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
		}
		printf("the data in the list are\n");
		temp=head;
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}