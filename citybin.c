#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f;
	int f1=0,mid,top,bottom,n;
	char name[20];
	struct city
	{
		int code;
		char city[20];
	}c1[100];
	
	f=fopen("city.txt","r");
	if(f==NULL)
	{
		printf("file not found......");
		exit(0);
	}
	int i=0;
	while(!feof(f))
	{
		fscanf(f,"%s%d",&c1[mid].city,&c1[i].code);
		i++;
	}
	printf("Enter city to search:");
	scanf("%s",&name);
	top=0;
	bottom=n-1;
	
	while(top<=bottom)
	{
		mid=top+bottom/2;
		if(strcmp(c1[mid].city)==0)
		{
			f1=1;break;
		}
		if(strcmp(c1[mid].city)>0)
		{
			top=mid+1;
		}
		else
		{
			bottom=mid-1;
		}
		
	}
	if(f1==1)
	printf("STD code of the city:%d",c1[mid].code);
	else
	printf("City not found");
	
	fclose(f);
	
}
