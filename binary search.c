#include<stdio.h>
void main()
{
	int a[10], n, start, middle, end;
	printf("Enter limit\n");
	scanf("%d", &n);
	printf("Enter sorted array \n");
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	printf("Enter ele to be searched");
	scanf("%d", &ele);
	start=0, end=n-1;
	for(i=start; i<end; i++)
	if(a[middle]<ele)
	start=middle+1;
	else if(a[middle]==ele)
	printf("Ele found at %d", middle+1);
	
}
