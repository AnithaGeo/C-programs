#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
} Node;
typedef struct stack
{
	Node *node;
	struct stack *next;
} LStack;
typedef struct poststack
{
	Node *node;
	int count;
	struct poststack *next;
} Poststack;
LStack *top=NULL;
LStack *head=NULL;
Poststack *ptop=NULL;
Poststack *phead=NULL;
Node *tree=NULL;
void insert(int data)
{
	Node *newnode=(Node *)malloc(sizeof(Node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	if (tree==NULL)
	{
		tree=newnode;
	}
	else
	{
		Node *t=tree, *x=NULL;
		while(t!=NULL)
		{
			x=t;
			if(data<t->data)
			{
				t=t->left;
			}
			else
			{
				t=t->right;
			}
		}
		if(data<x->data)
		{
			x->left=newnode;
		}
		else
		{
			x->right=newnode;
		}
	}
}

void push(Node *t)
{
	LStack *newnode=(LStack *)malloc(sizeof(LStack));
	newnode->node=t;
	if(head==NULL)
	{
		head=newnode;
		head->next=top;
		top=head;
	}
	else
	{
		newnode->next=top;
		top=newnode;
	}
}
	
Node *pop()
{
	if (top!=NULL)
	{
		Node *x=top->node;
		top=top->next;
		return x;
	}
	else
	{
		return NULL;
	}
}

void postStackPush(Node *t)
{
	Poststack *newnode=(Poststack *)malloc(sizeof(Poststack));
	newnode->node=t;
	newnode->count=1;
	if(phead==NULL)
	{
		newnode->next=ptop;
		phead=newnode;
		ptop=phead;
	}
	else
	{
		newnode->next=ptop;
		ptop=newnode;
	}
}

Node *postStackPop()
{
	if (ptop!=NULL)
	{
		Node *x=ptop->node;
		ptop=ptop->next;
		return x;
	}
	else
	{
		return NULL;
	}
}

void postorder()
{
	if (tree==NULL)
	{
		return;
	}
	Node *current=tree;
	while(current!=NULL)
	{
		postStackPush(current);
		current=current->left;
	}
	Poststack *i=ptop;
	Node *c;
	for(i=ptop;i!=NULL;i=ptop)
	{
		if(i->count==2)
		{
			c=postStackPop();
			printf("%d\t",c->data);
		}
		else
		{
			i->count=2;
			if(i->node->right!=NULL)
			{
				current=i->node->right;
				while(current!=NULL)
				{
					postStackPush(current);
					current=current->left;
				}
			}
		}
	}
	printf("\n");
}

void inorder()
{
	Node *i;
	if (tree==NULL)
	{
		return;
	}
	Node *current=tree;
	while(current!=NULL)
	{
		push(current);
		current=current->left;
	}
	for(i=pop();i!=NULL;i=pop())
	{
		current=i;
		printf("%d\t",current->data);
		if (current->right!=NULL)
		{
			current=current->right;
			while (current!=NULL)
			{
				push(current);
				current=current->left;
			}
		}
	}
	printf("\n");
}

void preorder()
{
	if (tree==NULL)
	{
		return;
	}
	Node *current=tree, *i;
	while (current!=NULL)
	{
		printf("%d\t",current->data);
		push(current);
		current=current->left;
	}
	for(i=pop();i!=NULL;i=pop())
	{
		current=i;
		if(current->right!=NULL)
		{
			current=current->right;
			while(current!=NULL)
			{
				printf("%d\t",current->data);
				push(current);
				current=current->left;
			}
		}
	}
	printf("\n");
}

int main()
{
	int ch,n;
	while(ch!=5)
	{
		printf("1.Insert\t2.Inorder\t3.Preorder\t4.Postorder\t5.Exit\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value to be inserted: ");
				scanf("%d",&n);
				insert(n);
				break;
			case 2:
				inorder();
				break;
			case 3:
				preorder();
				break;
			case 4:
				postorder();
				break;
			case 5:
				break;
			default:
				printf("Invalid Choice\n");
		}
	}
	return 0;
}
