#include<stdio.h>
void divide(int arr[],int si,int ei)
{
	if(si>=ei)
	{
		return;
	}
	
	int mid=si+(ei-si)/2;
	divide(arr,si,mid);
	divide(arr,mid+1,ei);
	conquer(arr,si,mid,ei);//calling of conquer function
}
void conquer(int arr[],int si,int mid,int ei)
{
	int merged[]=int[ei-si+1];//creating merged array(third array)
	int idx1=si;//first array index
	int idx2=mid+1;//second array index
	int x=0;
	while(idx1<=mid&&idx2<=ei)//check which element is small either of 1st array or 2nd array
	{
		if(arr[idx1]<=arr[idx2])//if element of 1st array is small
		{
			merged[x++]=arr[idx1++];//then put that element in the third array	
		}
		else//if element of 2nd array is small
		{
			merged[x++]=arr[idx2++];//then put that element in the third array
		}
	}
	
	while(idx1<=mid)//remaining elements of 1st array
	{
		merged[x++]=arr[idx1++];
	}
	while(idx2<=ei)//remaining elements of 2nd array
	{
		merged[x++]=arr[idx2++];
	}
	
	//now to put the elements of merged array into original array
	
	for(int i=0,j=si;i<n;i++,j++)
	{
		arr[j]=merged[i];
	}
}

int main()
{
	int arr[100],n,i;
	printf("Enter limit of array:");
	scanf("%d",&n);
	
	printf("\n Enter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	divide(arr,0,n-1);//calling
	
	//print final array
	printf("\n Sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
