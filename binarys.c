#include<stdio.h>
int main()
{
	int a[100],bottom,top,mid,num,f=0,n,i;
	printf("Enter limit:");
	scanf("%d",&n);
	
	printf("Enter array elements in order:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	top=0;
	bottom=n-1;
	
	printf("Enter element to search:");
	scanf("%d",&num);
	while(top<=bottom)
	{
		mid=(top+bottom)/2;
		
		if(a[mid]==num)
		{
			f=1;
			break;
		}
		if(num>a[mid])
		{
			top=mid+1;
		}
		else
		{
			bottom=mid-1;
		}
	}
	
	if(f==1)
	{
		printf("Item found at %d position",mid);
	}
	else
	{
		printf("Item not found!!");
	}
}
