#define max 5
#include<stdio.h>
struct stack
{
	int a[max];
	int top;
}*s;
void init()
{
	s->top=-1;
}
int isempty()
{
	if(s->top==-1)
	return 1;
	else
	return 0; 
}
int isfull()
{
	if(s->top==max-1)
	return 1;
	else
	return 0;
}
void push(int num)
{
	if(isfull())
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
void pop()
{
	int val;
	if(isempty())
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
void disp()
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
	init();
	do
	{
		printf("\n 1-push\n2-pop\n3-disp\n");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter numbers:");
					scanf("%d",&num);
					push(num);
					break;
			case 2:pop();
			break;
			case 3:disp();
			break;
			default:printf("invalid choice");
			break;
		}
	}while(ch<4);
}
