#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char str[25][25], temp[25];
	printf("Enter no. of strings\n");
	scanf("%d",&n);
	printf("Enter each string\n");
	for(i=0; i<n; i++)
		scanf("%s", str[i]);
	for(i=0; i<=n; i++)
		for(j=i+1; j<=n; j++)
		{
			if(strcmp(str[i], str[j])>0)
			{
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	printf("\nSorted strings\n");
	for(i=0; i<=n; i++)
		printf("%s\n", str[i]);
}
