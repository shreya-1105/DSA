#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
//create function
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
//display function
void disp(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
//insert end
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
//insert beginning
struct node *insertbeg(struct node *head,int val)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=head;
	head=newnode;
	return head;
}
 //insert middle
struct node *insertmid(struct node *head,int val,int pos)
{
	struct node *temp,*newnode;
	int i;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=val;
	for(temp=head,i=1;i<pos-1&&temp->next!=NULL;i++,temp=temp->next);
	newnode->next=temp->next;
	temp->next=newnode;
	return head;
}
//delete beginning
struct node *delbeg(struct node *head)
{
	struct node *p;
	p=head;
	head=head->next;
	free(p);
	return head;
}
//delete mid
struct node *delmid(struct node *head,int pos)
{
	struct node *p,*temp;
	int i;
	for(temp=head,i=1;i<pos-1&&temp->next!=NULL;i++,temp=temp->next);
	p=temp->next;
	temp->next=p->next;
	free(p);
	return head;
}
//delete end
struct node *delend(struct node * head)
{
	struct node *temp,*p;
	int i;
	for(temp=head;temp->next->next!=NULL;temp=temp->next);
	p=temp->next;
	temp->next=NULL;
	free(p);
	return head;
}
//main function
int main()
{
	struct node *head=NULL;
	int val,ch,pos;
	do
	{
		printf("\n 1-create \n2-disp \n3-insert end \n4-insert begining \n5-insert mid");
		printf("\n6-delete beg \n7-delete mid \n8-delete end");
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
			
			case 4:printf("Enter value:");
					scanf("%d",&val);
					head=insertbeg(head,val);
					break;
			
			case 5:printf("Enter value:");
					scanf("%d",&val);
					printf("Enter position:");
					scanf("%d",&pos);
					head=insertmid(head,val,pos);
					break;
				
			case 6:head=delbeg(head);
					break;
					
			case 7:head=delmid(head,pos);
					break;
					
			case 8:head=delend(head);
				break;
				
			default:printf("Invalid choice");
		}
	}while(ch<9);
}
