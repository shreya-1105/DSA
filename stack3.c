#define max 15
#include<stdio.h>
struct stack
{
	char a[max];
	int top;
}*s;
void init()
{
	s->top=-1;
}
int isfull()
{
	if(s->top==max-1)
	return 1;
	else
	return 0;
}
void push(char c)
{
	if(isfull())
	{
		printf("stack is full do not insert char!");
	}
	else
	{
		s->top++;
		s->a[s->top]=c;
		//printf("\n push successfully done!!");
	}
	
}
void disp()
{
	int i;
	for(i=s->top;i>=0;i--)
	{
		printf("%c",s->a[i]);
	}
}
int main()
{
	int i ;
	char s1[20];
	printf("Enter string:");
	scanf("%s",&s1);
	init();
	for(i=0;s1[i]!='\0';i++)
	{
		push(s1[i]);
	}
	
	printf("reverse string is:");
	disp();
	
}
