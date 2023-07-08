//SORTING

#include<stdio.h>

#define n 5
int a[n];
int i,j;

void disp()
{
	for(i=0; i<n; i++)
		printf("%d\t",a[i]);
	printf("\n");
}
void read()
{
	printf("Enter 5 elements into array\n");
	for( i=0; i<n; i++)
		scanf("%d",&a[i]);
	printf("\nGiven array:\n");
	disp();
}
void sort()
{
	int temp;
	printf("\n.........Sorting.........\n");
	for( i=0; i<=n; i++)
		for( j=i+1; j<n; j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	printf("Sorted array:\n");
	disp();
}

int main()
{
	
	read();
	sort();
	return 0;
}
