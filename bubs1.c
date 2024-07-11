#include<stdio.h>
#include<string.h>
int main()
{
	int pass,i,n;
	char a[20],t[20];
	printf("Enter limit:");
	scanf("%d",n);
	
	printf("Enter n names:");
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	
	for(pass=1;pass=n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(strcmp(a[i],a[i+1])>0)
			{
				strcpy(t,a[i]);
				strcpy(a[i],a[i+1]);
				strcpy(a[i+1],t);
			}
		}
	}
	printf("n names after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%s",a[i]);
	}
}
