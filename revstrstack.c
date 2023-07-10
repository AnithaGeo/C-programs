#include<stdio.h>
#include<string.h>
#define N 30
int top,stack[N];
void push(char a)
{
	if(top-1==N)
	{
		printf("Stack is full");
	}
	else
	{
		top=top+1;
		stack[top]=a;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("%c",stack[top]);
		top=top-1;
	}
}
int main()
{
  int l,i;
  char st[N];
  printf("Enter string:");
  scanf("%s",st);
  l=strlen(st);
  for(i=0;i<l;i++)
  {
  	push(st[i]);
	  }	
  for(i=0;i<l;i++)
  {
  	pop();
  }
  return 0;
}
