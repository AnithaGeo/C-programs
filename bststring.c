#include<stdio.h>
#include<string.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	char name[20];
	struct node *left,*right;
};
typedef struct node tree;
tree *root=NULL;

void insert()
{
	tree *p,*t;
	char a[20];
	printf("Enter the name to insert:");
	scanf("%s",a);
	if(root==NULL)
	{
		root=(tree *)malloc(sizeof(tree));
		strcpy(root->name,a);
		root->left=NULL;
		root->right=NULL;
	}
	else
	{
		t=root;
		while(t!=NULL)
		{
			p=t;
			if(strcmp(t->name,a)==0)
			{
				printf("Duplicate Key");
				return;
			}
			else if(strcmp(t->name,a)<0)
			{
				t=t->right;
			}
			else
			{
				t=t->left;
			}
		}
		if(strcmp(p->name,a)<0)
		{
			p->right=(tree *)malloc(sizeof(tree));
			strcpy(p->right->name,a);
			p->right->right=NULL;
			p->right->left=NULL;
		}
		else
		{
			p->left=(tree *)malloc(sizeof(tree));
			strcpy(p->left->name,a);
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
	printf("%s\t",r->name);
	inorder(r->right);
}

void preorder(tree *r)
{
	if(r==NULL)
		return;
	printf("%s\t",r->name);
	preorder(r->left);
	preorder(r->right);
}

void postorder(tree *r)
{
	if(r==NULL)
		return;
	postorder(r->left);
	postorder(r->right);
	printf("%s\t",r->name);
}

void main()
{
	int ch;
	while(ch!=5)
	{
		printf("\n1.Insert\t2.Inorder\t3.Preorder\t4.Postorder\t5.Exit\nEnter your option:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
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
}
