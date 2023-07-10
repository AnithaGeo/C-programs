#include<stdio.h>
#define N 5

void init(int arr[][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			arr[i][j]=0;
		}
	}
}

void edge(int arr[][N],int i,int j)
{
	arr[i][j]=1;
}

void adjmatrix(int arr[][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int matrix[N][N];
	init(matrix);
	int ch,e1,e2;
	while(ch!=3)
	{
		printf("1.Edges\t2.Display\t3.Exit\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the first edge: ");
				scanf("%d",&e1);
				printf("Enter the second edge: ");
				scanf("%d",&e2);
				edge(matrix,e1,e2);
				break;
			case 2:
				printf("The matrix is\n");
				adjmatrix(matrix);
				break;
			case 3:
				break;
			default:
				printf("Invalid choice\n");
		}
	}
}
