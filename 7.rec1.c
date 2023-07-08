#include<stdio.h>

int print(int a[], int i, int n)
{
	if(i==n-1)
		printf("%d", a[i]);
	else
		{
			printf("%d\t", a[i]);
			//i++;
			print(a, ++i, n);
		}
}
int main()
{
	int n,i;
	printf("Enter limit\n");
	scanf("%d", &n);
	int a[n];
	printf("Enter array\n");
	for( i=0; i<n; i++)
		scanf("%d", &a[i]);
	i=0;
	printf("Given array\n");
	print(a,i, n);
}
