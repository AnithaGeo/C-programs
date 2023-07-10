#include<stdio.h>
int a[4][4], t[16][3];
int main()
{
	int i,j;
	printf("Enter the elements");
	for(i=0; i<4; i++)
		for(j=0; j<4; j++)
			scanf("%d", &a[i][j]);
	printf("Given Array\n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
    }
    printf("\nSparse matrix\n");
    int m=0, n=0;
    for(i=0; i<4; i++)
		for(j=0; j<4; j++)
			if(a[i][j]!=0)
				for(m; m<16; )
				{
					for(n=0; n<3; n++ )
					{
						t[m][n]=i;
						n++;
						t[m][n]=j;
						n++;
						t[m][n]=a[i][j];
					}
					m++;
					break;
				}
	for(i=0; i<m; i++)
	{
		for(j=0; j<3; j++)
			printf("%d\t", t[i][j]);
		printf("\n");
	}
}
