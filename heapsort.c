#include <stdio.h>
#define N 5
int a[N];
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void heapify(int arr[], int n, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && arr[left] > arr[largest])
 	largest = left;
	if (right < n && arr[right] > arr[largest]) 
	largest = right;
	if (largest != i)
	{
		swap(&arr[i], &arr[largest]); heapify(arr, n, largest); 
	}
}
void heapSort(int arr[], int n)
{
	int i;
   	for ( i = n / 2 - 1; i >= 0; i--)
	heapify(arr, n, i);
	for (i = n - 1; i >= 0; i--)
	{
		swap(&arr[0], &arr[i]); heapify(arr, i, 0);
	}
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; ++i) 
	printf("%d ", arr[i]); printf("\n");
}
int main() 
{
	int i;
	printf("\nArray Size : %d\n",N); 
	for( i=0; i<N; i++)
	{
		printf("\nEnter the array [%d] element --> ",i+1); scanf("%d",&a[i]);
	}
	int n = sizeof(a) / sizeof(a[0]); heapSort(a, n);
	printf("\nHeap sorted array is : "); printArray(a, n);
	return 0;
}

