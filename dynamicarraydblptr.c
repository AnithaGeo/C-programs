#include <stdio.h>
#include <stdlib.h>
int main()
{
	int r ,c, i, j, count;
	int **a;
 	printf("Enter the no of rows and columns:");
 	scanf("%d%d",&r,&c);
	a = (int **)malloc(r * sizeof(int *));
 	for (i=0; i<r; i++)
 	{
 		a[i] = (int *)malloc(c * sizeof(int));
	}
 	count = 0;
 	for (i = 0; i < r; i++)
 	{
	 	for (j = 0; j < c; j++)
		{
 			a[i][j] = ++count;
		}
	}
 	for (i = 0; i < r; i++)
 	{
 		for (j = 0; j < c; j++)
 		{
 			printf("%d\t", a[i][j]);
		}
	printf("\n");
	}
 	return 0;
}

