#include<stdio.h>
#include<stdlib.h>
	struct node
	{
		int data;
		struct node*next;
	};
  struct node *createnode()
  {
  	struct node *p;
  	p=((struct node*)malloc(sizeof(struct node)));
  	return p;
  }
int main()
{	
	struct node *top,*p;
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
				printf("PUSH operation");
				p=createnode();
				printf("enter the info:\n");
				scanf("%d",&p->data);
				if(top==NULL)
				{
					p->next=NULL;
					top=p;
				}
				else
				{
					p->next=top;
					top=p;
				}
				break;
				case 2:
					printf("POP operation");
					if(top!=NULL)
					{
						p=top;
						top=top->next;
						p->next=NULL;
						printf("Pop item is:%d",p->data);
						free(p);
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
							p=top;
							while(p!=NULL)
							{
								printf("\n%d",p->data);
								p=p->next;
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