#include<stdio.h>
#define n 3
int i,j;
int read(int m[n][n])
{
	for( i=0; i<n;i++)
		for( j=0; j<n;j++)
			scanf("%d",&m[i][j]);
}
int disp(int p[n][n])
{
	printf("Displaying the matrix\n");
	for( i=0; i<n;i++)
	{
		for( j=0; j<n; j++)
			printf("%d\t",p[i][j]);
		printf("\n");
	}
}
int add(int a[n][n],int b[n][n])
{
	int sum[n][n];
	for( i=0; i<n;i++)
		for(j=0; j<n; j++)
			sum[i][j]= a[i][j] + b[i][j];
	printf("Sum\n");
	disp(sum);
}
int subtract(int a[n][n], int b[n][n])
{
	int diff[n][n];
	for( i=0; i<n; i++)
		for( j=0; j<n; j++)
			diff[i][j]= a[i][j] - b[i][j];
	printf("Difference\n");
	disp(diff);
}

int product(int a[n][n], int b[n][n])
{
	int k;
	int pr[n][n];
	for( i=0; i<n; i++)
		for( j=0; j<n; j++)
			for(k=0; k<n; k++)
				pr[i][j] += a[i][k]*b[k][j];
	printf("Displaying product of matrices\n");
	disp(pr);
}
int transpose(int a[n][n])
{
	int tr[n][n];
	for( i=0; i<n; i++)
		for(j=0; j<n; j++)
			tr[i][j]=a[j][i];
	printf("Displaying transpose of matrix\n");
	disp(tr);

}

int main()
{

	int a[n][n],b[n][n],sum[n][n], diff[n][n], pr[n][n], tr[n][n];
	printf("Enter matrix 1\n");
	read(a);
	disp(a);
	printf("Enter matrix 2\n");
	read(b);
	disp(b);
	int ch;
	while(ch!=5)
	{
		printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Transpose\n5.Exit\nEnter your choice\n");
		scanf("%d",&ch);

		switch (ch)
			{
				case 1:
					add(a, b);
					break;
				case 2:
					subtract(a, b);
					break;
				case 3:
					product(a, b);
					break;
				case 4:
					printf("\nChoose the matrix(1/2)\n");
					scanf("%d", &ch);
					if(ch==1)
						transpose(a);
					else if(ch==2)
						transpose(b);
					break;
				case 5:
					break;
			}
	}
}

