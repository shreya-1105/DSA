#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node *create(struct node *head)
{
	int i,n;
	struct node *temp,*newnode;
	printf("Enter limit:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter num:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}return head;	
}
void disp(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
struct node *insertend(struct node *head,int val)
{
	struct node *temp,*newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	for(temp=head;temp->next!=NULL;temp=temp->next);
	temp->next=newnode;
	return head;
	
}
int main()
{
	struct node *head=NULL;
	int val,ch;
	do
	{
		printf("\n 1-create \n2-disp \n3-insert end");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:head=create(head);
					break;
					
			case 2:disp(head);
					break;
			
			case 3:printf("Enter value to add:");
					scanf("%d",&val);
					head=insertend(head,val);
					break;
		}
	}while(ch<4);
}
