#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node list;
list *head=NULL;

void insert(list **head,int e)
{
	list *t;
	if(*head==NULL)
	{
		*head=(list *)malloc(sizeof(list));
		(*head)->data=e;
		(*head)->next=NULL;
	}
	else
	{
		t=*head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=(list *)malloc(sizeof(list));
		t->next->data=e;
		t->next->next=NULL;
	}
}

void disp(list *head)
{
	list *t;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		t=head;
		while(t!=NULL)
		{
			printf("%d\t",t->data);
			t=t->next;
		}
	}
}

list *merge(list *head1,list *head2)
{
	if(head1==NULL)
	{
		return head1;
	}
	else if(head2==NULL)
	{
		return head2;
	}
	else
	{
		list *head3=NULL;
		list *temp=head1;
		while(temp!=NULL)
		{
			insert(&head3,temp->data);
			temp=temp->next;
		}
		temp=head2;
		while(temp!=NULL)
		{
			insert(&head3,temp->data);
			temp=temp->next;
		}
		printf("Merged\n");
		return head3;
	}
}

void sort(list **head)
{
	int temp;
	list *t1,*t2;
	for(t1=*head;t1!=NULL;t1=t1->next)
	{
		for(t2=t1->next;t2!=NULL;t2=t2->next)
		{
			temp=t1->data;
			t1->data=t2->data;
			t2->data=temp;
		}
	}
	printf("Sorted\n");
}
void main()
{
	list *list1=NULL;
	list *list2=NULL;
	list *list3=NULL;
	int ch,e;
	while(ch!=8)
	{
		printf("*********");
		printf("\n1.insert into list one\n2.insert into list two\n3.display list one\n4.display list two\n5.merge both list\n6.display new list\n7.sort new list\n8.exit\nEnter your option:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	printf("enter the element to insert:");
					scanf("%d",&e);
					insert(&list1,e);
					break;
			case 2:	printf("enter the element to insert:");
					scanf("%d",&e);
					insert(&list2,e);
					break;
			case 3:	disp(list1);
					break;
			case 4:	disp(list2);
					break;
			case 5:	list3=merge(list1,list2);
					break;
			case 6:	disp(list3);
					break;
			case 7:	sort(&list3);
					break;
			case 8:	break;
			default:
				printf("Worng optioin");
		}
	}
}
