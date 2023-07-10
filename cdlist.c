#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

typedef struct node cdlist;
cdlist *head =NULL;

void disp()
{
	cdlist *t;
	if(head==NULL)
		printf("\nEmpty\n");
	else
	{
		t=head;
		do{
			printf("%d\t", t->data);
			t=t->next;
		}while(t!=head);
		printf("\n");
	}	
}

void insert(int e)
{
	cdlist *t;
	if(head==NULL)
	{
		head=(cdlist*)malloc(sizeof(cdlist));
		head->data=e;
		head->next =head;
		head->prev=head;
	}
	else
	{
		t=head;
		while(t->next!=head)
			t=t->next;
		t->next=(cdlist*)malloc(sizeof(cdlist));
		t->next->data=e;
		t->next->next=head;
		t->next->prev=t;
		head->prev=t->next;
	}
}

void delet(int e)
{
	cdlist *t;
	if(head==NULL)
		printf("cdlist empty");
	else if(head->data==e && head->next==head)
		head=NULL;
	else if(head->data==e)
	{
		head->next->prev=head->prev;
		head->prev->next=head->next;
		head=head->next;
	}
	else
	{
		t=head->next;
		while(t!=head && t->data!=e)
			t=t->next;
		if(t==head)
			printf("Not found");
		else
		{
			t->prev->next=t->next;
			t->next->prev=t->prev;
		}	
	}
}

void main()
{	
	int n,ch;
	while(ch!=4)
	{
		printf("1. Insert\n2. Delete\n3. display\n4. Exit\nEnter your choice");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter ele to insert\n");
				scanf("%d", &n);
				insert(n);
				break;
			case 2:
				printf("\nEnter ele to delete\n");
				scanf("%d", &n);
				delet(n);
				break;
			case 3:
				disp();
				break;
			case 4:
				break;
			default:
				printf("\n........Wrong choice..........\n");
		}
	}
		
}
