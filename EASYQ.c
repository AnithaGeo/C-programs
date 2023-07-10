#include<stdio.h>
#define N 30
char stack[N];
int top=-1;
int push(char e)
{
	top=top+1;
	stack[top]=e;
	return 0;
}
char pop()
{
	char ch;
	ch=stack[top];
	top=top-1;
	return ch;
}
int main()
{
	int i;
	char s;
	char str[N];
	printf("Enter the string : ");
	scanf("%s",str);
	while(str[i]!='\0')
	{
	
		if(str[i]=='*')
		{
			printf("%c",pop());
		}
		else
		{
			push(str[i]);
		}
		i++;
	}
	return 0;
}

