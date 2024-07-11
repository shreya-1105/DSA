#define max 100
#include<stdio.h>
struct stack
{
	char a[max];
	int top;
	
}s;
void init()
{
	s.top=-1;
}
int isfull()
{
	if(s.top==max-1)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(s.top==-1)
	return 1;
	else
	return 0;
}
void push(char ch)
{
	if(isfull())
	printf("Stack is full....");
	else
	{
		s.top++;
		s.a[s.top]=ch;
	}
}
int pop()
{
	char ch;
	if(isempty())
	printf("stack is empty");
	else
	{
		ch=s.a[s.top];
		s.top--;
		return ch;
	}
}
int peek()
{
	return s.a[s.top];
}
int precedence(char ch)
{
	if(ch=='(')
	return 0;
	else if(ch=='+'||ch=='-')
	return 1;
	else if(ch=='*'||ch=='/')
	return 2;
	else if(ch=='$'||ch=='^')
	return 3;
}
int main()
{
	char infix[100],ch;
	int i;
	printf("Enter infix string:");
	gets(infix);
	init();
	printf("\n postfix string:");
	for(i=0;infix[i]!='\0';i++)
	{
		ch=infix[i];
		if(ch=='(')
		push(ch);
		else if(ch==')')
		{
			while((ch=pop())!='(')
			{
				printf("%c",ch);
			}
		}
		else if(isalpha(ch))
		{
			printf("%c",ch);
		}
		else
		{
			while((precedence(peek())>=precedence(ch))&&!isempty)
			{
				printf("%c",pop());
			}
			push(ch);
		}
		
	}
	while(!isempty())
	{
		printf("%c",pop());
	}
	getch();
}
