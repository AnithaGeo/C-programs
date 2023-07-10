#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printrev(char ch[10])
{
	int i;
	printf("Printing in reversed order\n");
	for(i=strlen(ch); i>=0; i--)
		printf("%c", ch[i]);
}

void reverse(char ch[10])
{
	char c;
	int i, l=strlen(ch);
	for(i=0; i<l/2; i++)
	{
		c=ch[l-1-i];
		ch[l-1-i]=ch[i];
		ch[i]=c;
	}
	printf("\nReversed Array\n");
	printf("%s", ch);
}

int main()
{
	char ch[10];
	printf("Enter string\n");
	scanf("%s",ch);
	printrev(ch);
	reverse(ch);
}
