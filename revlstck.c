#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack
{
	char data;
	struct stack *next;
};

typedef struct stack stack;
stack*top=NULL;

void push(char e)
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
		printf("\nStack Empty");
	else
	while(top!=NULL)
	{
		printf("%c", top->data);
		top=top->next;
	}
}

void main()
{
	int i=0,ch;
	char n[20];
	printf("\nEnter name to reverse\n");
	scanf("%s", n);		
	while(i<strlen(n))
	{
		push(n[i]);
		i++;
	}
	printf("\nReversed\n");
	pop();
}

//...............................
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//struct stack
//{
//	char data;
//	struct stack *next;
//};
//
//typedef struct stack stack;
//stack*top=NULL;
//
//void push(char e)
//{
//	stack *t;
//	t=(stack *)malloc(sizeof(stack));
//	t->data=e;
//	t->next=top;
//	top=t;
//}
//
//void pop()
//{
//	if(top==NULL)
//		printf("\nStack Empty");
//	else
//	while(top!=NULL)
//	{
//		printf("%c", top->data);
//		top=top->next;
//	}
//}
//
//void main()
//{
//	int i=0,ch;
//	char n[20];
//	while(ch!=2)
//	{
//		printf("\n1. Insert\n2. Exit\nEnter your choice");
//		scanf("%d", &ch);
//		switch(ch)
//		{
//			case 1:
//				printf("\nEnter name to reverse\n");
//				scanf("%s", n);
//				//fgets(n, 20, stdin);
//				while(i<strlen(n))
//				{
//					push(n[i]);
//					i++;
//				}
//				printf("\nReversed\n");
//				pop();
//				break;
//			case 2:
//				break;
//			default:
//				printf("\n........Wrong choice..........\n");
//		}
//	}
//}
//...................................
//
//

