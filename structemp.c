#include<stdio.h>
int main()
{
	struct emp
	{
		int eno;
		char ename[20];
		long int sal;
	}*e;
	
	e=(struct emp*)malloc(sizeof(struct emp));//user defined datatype struct emp
	printf("enter emp no name and salary:");
	scanf("%d%s%ld",&e->eno,e->ename,&e->sal);
	printf("emp no name and salary:%d\t%s\t%ld",e->eno,e->ename,e->sal);
	free(e);	
}
