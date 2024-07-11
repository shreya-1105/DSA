#include<stdio.h>
int main()
{
	int a[100],i,n,pass,t,max,index;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter n numbers");
	for(i=0;i<n;i++)
	{
		a[i]=rand();
	}
	printf("random numbers");
	for(i=0;i<n;i++)
	{
			printf("%d\t",a[i]);
	}
	
	for(pass=0;pass<n;pass++)
	{
		max=a[pass];
		index=pass;
		
		for(i=pass+1;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				index=i;
			}
		}
		t=a[pass];
		a[pass]=max;
		a[index]=t;
	}
	printf("\nsorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
