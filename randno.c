#include<stdio.h>
int main()
{
	int a[100],pass,i,n,t;
	printf("Enter limit:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		a[i]=rand()%1000;
	}
	
	printf("Random numbers::");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
