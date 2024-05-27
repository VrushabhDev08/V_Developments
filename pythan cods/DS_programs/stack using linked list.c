#include<stdio.h>
#include<stdlib.h>
	struct node
	{
		int data;
		struct node*next;
	};
  
int main()
{	
	struct node *top,*newnode,*temp;
	top=NULL;
	int i,j,c,choice;	

	while(c!=4)
	{
		printf("\n1:Push 2:Pop  3:Display  4:Exit\n");
		printf("enter the choice\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("PUSH operation\n");
				newnode=((struct node*)malloc(sizeof(struct node)));
				printf("enter the data to be pushed:\n");
				scanf("%d",&newnode->data);
				if(top==NULL)
				{
					newnode->next=NULL;
					top=newnode;
				}
				else
				{
					newnode->next=top;
					top=newnode;
				}
				break;
				case 2:
					printf("POP operation");
					if(top!=NULL)
					{
						temp=top;
						top=top->next;
						temp->next=NULL;
						printf("Pop item is:%d",temp->data);
						free(temp);
					}
					else
					{
						printf("stack is empty");
						
					}
					break;
					case 3:
						printf("DISPLAY operation:");
						if(top!=NULL)
						{
							temp=top;
							while(temp!=NULL)
							{
								printf("\n%d",temp->data);
								temp=temp->next;
							}
						}
						else
						{
							printf("\nstack is empty");
						}
						break;
						default:
							printf("invalid choice");
							break;
		}
	}
}