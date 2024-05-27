include<stdio.h>
int main()
{
    struct stack
    {
        int top;
        int element;
        int a[10];
    }s;
    struct stack temp;
    int i,c;
    s.top=-1;
    while(1)
    {
        printf("enter choice\tpush:1 pop:2 pick:3 display:4 exit:5\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("push operation:\n");
            if(s.top!=9)
            {
                printf("enter element to push:\n");
                scanf("%d",&s.element);
                s.top++;
                s.a[s.top]=s.element;
            }
            else
            {
                printf("stack is full\n");
            }
            break;
            case 2:
            printf("pop operation:\n");
            if(s.top==-1)
            {
                printf("stack is empty\n");
            }
            else
            {
                printf("element poped is %d\n",s.a[s.top]);
               s. top--;
            }
            break;
            case 3:
            printf("peek operation:\n");
            printf("peek element is: %d\n",s.a[s.top]);
            break;
            case 4:
            printf("display operation:\n");
            temp.top=s.top;
            printf("stack elements are:\n");
            while(temp.top!=-1)
            {
                printf("%d\t",s.a[temp.top]);
                temp.top--;
            }
            break;
            case 5:
            printf("exit operation:\n");
            return(0);
            break;
            default:
            printf("enter the right choice\n");

        }
    }
    
    return 0;
}
