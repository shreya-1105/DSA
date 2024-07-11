#include<stdio.h>
int main()
{
	int a[100],i,n,pass,t,min,index;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter n numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(pass=0;pass<n;pass++)
	{
		min=a[pass];
		index=pass;
		
		for(i=pass+1;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				index=i;
			}
		}
		t=a[pass];
		a[pass]=min;
		a[index]=t;
	}
	printf("\nsorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
