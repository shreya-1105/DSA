#define max 5
#include<stdio.h>
struct stack
{
	int a[max];
	int top;
};
void init(struct stack *s)
{
	s->top=-1;
}
int isempty(struct stack *s)
{
	if(s->top==-1)
	return 1;
	else
	return 0; 
}
int isfull(struct stack *s)
{
	if(s->top==max-1)
	return 1;
	else
	return 0;
}
void push(struct stack *s,int num)
{
	if(isfull(&s))
	{
		printf("stack is full do not insert numbers!");
	}
	else
	{
		s->top++;
		s->a[s->top]=num;
		printf("\n push successfully done!!");
	}
	
}
void pop(struct stack *s)
{
	int val;
	if(isempty(&s))
	{
		printf("stack is empty");
	}
	else
	{
		val=s->a[s->top];
		s->top--;
		printf("\n poped value:%d",val);
	}
	
	
}
void disp(struct stack *s)
{
	int i;
	for(i=s->top;i>=0;i--)
	{
		printf("%d\t",s->a[i]);
	}
}
int main()
{
	int ch ,num;
	struct stack *s;
	init(&s);
	do
	{
		printf("\n 1-push\n2-pop\n3-disp\n");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter numbers:");
					scanf("%d",&num);
					push(&s,num);
					break;
			case 2:pop(&s);
			break;
			case 3:disp(&s);
			break;
			default:printf("invalid choice");
			break;
		}
	}while(ch<4);
}
