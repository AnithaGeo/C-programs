#include<stdio.h>
#define N 20
int main()
{
	int a[N][N],b[N][N],r,c,i,j,p,q;
	printf("enter the row limit");
	scanf("%d",&r);
	printf("enter the column limit");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("the sparx matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{			
						b[0][0]=i;
						b[0][1]=j;
						b[i][j]=a[i][j];
					printf("\n%d",i);
					printf("\t%d",j);
					printf("\t%d",a[i][j]); 
			
			}
		}
	}
}

