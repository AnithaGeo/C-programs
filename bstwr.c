#include <stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left,*right;
};

typedef struct node tree;
tree *root = NULL;

void insert(int e)
{
	tree *t,*p;
	if(root==NULL)
	{
		root=(tree *)malloc(sizeof(tree));
		root->data=e;
		root->left=NULL;
		root->right=NULL;
	}
	else
	{
		t=root;
		while(t!=NULL)
		{
			p=t;
			if(t->data==e)
			{
				printf("Duplicate Key");
				return;
			}
			else if(t->data <e)
			{
				t=t->right;
			}
			else
			{
				t=t->left;
			}
		}
		if(p->data <e)
		{
			p->right=(tree *)malloc(sizeof(tree));
			p->right->data=e;
			p->right->left=NULL;
			p->right->right=NULL;
		}
		else
		{
			p->left=(tree*)malloc(sizeof(tree));
			p->left->data=e;
			p->left->left=NULL;
			p->left->right=NULL;
		}
	}
}

void inorder(tree *r)
{
	if(r==NULL)
	return;
	inorder(r->left);
	printf("%d\t",r->data);
	inorder(r->right);
}

void preorder(tree *r)
{
	if(r==NULL)
	return;
	printf("%d\t",r->data);
	preorder(r->left);
	preorder(r->right);
}

void postorder(tree *r)
{
	if(r==NULL)
	return;
	postorder(r->left);
	postorder(r->right);
	printf("%d\t",r->data);
}

int main()
{
	int ch,val;
	while(ch!=4)
	{
		printf("\n1.Insert\t2.Inorder\t3.Preorder\t4.Postorder\t5.Exit\nEnter your option:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value to insert:");
				scanf("%d",&val);
				insert(val);
			case 2:
				inorder(root);
				break;
			case 3:
				preorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				break;
			default:
				printf("Invalid Choice\n");
		}
	}
	return 0;
}
