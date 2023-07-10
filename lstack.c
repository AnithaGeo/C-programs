#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int data;
	struct stack *next;
};

typedef struct stack stack;
stack*top=NULL;

void push(int e)
{
	stack *t;
	t=(stack *)malloc(sizeof(stack));
	t->data=e;
	t->next=top;
	top=t;
}

void pop()
{
	if(top==NULL)
		printf("Stack Empty");
	else
	{
		printf("\nPopped\t%d", top->data);
		top=top->next;
	}
}

void main()
{
	int n,ch;
	while(ch!=3)
	{
		printf("\n1. Insert\n2. Delete\n3. Exit\nEnter your choice");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter ele to insert\n");
				scanf("%d", &n);
				push(n);
				break;
			case 2:
				pop();
				break;
			case 3:
				break;
			default:
				printf("\n........Wrong choice..........\n");
		}
	}
}

