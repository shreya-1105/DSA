#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f;
	int code,f1=0;
	char name[20],c[20];
	f=fopen("city.txt","r");
	if(f==NULL)
	{
		printf("file not found......");
		exit(0);
	}
	printf("Enter city to search:");
	scanf("%s",&c);
	
	while(!feof(f))
	{
		fscanf(f,"%s%d",&name,&code);
		if(strcmp(name,c)==0)
		{
			f1=1;break;
		}
	}
	if(f1==1)
	printf("STD code of the city:%d",code);
	else
	printf("City not found");
	
	fclose(f);
	
}
