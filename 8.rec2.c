#include<stdio.h>

int print(int a[], int p)
{
	if(p==0)
		printf("%d", a[p]);
	else
		{
			printf("%d\t", a[p]);
			print(a, --p);
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
	printf("Given array in reverse\n");
	print(a,n-1);
}
