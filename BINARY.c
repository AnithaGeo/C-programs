#include <stdio.h>
int readArray(int a[])
{
 int n,i;
 printf("Enter the no of elements");
 scanf("%d",&n);
 for( i = 0;i < n;i++)
 {
 printf("Enter the value of a[%d]",i);
 scanf("%d",&a[i]);
 }
 return n;
}
void bubbleSort(int a[],int n) {
 int i,j,t;
 for(i = 0;i < n;i++) {
 for(j = 0; j < n-i-1;j++) {
 if(a[j] > a[j+1]) {
 t = a[j];
 a[j] = a[j + 1];
 a[j + 1] = t;
 }
 }
 }
}
void binarySearch(int a[],int n,int s) {
 int left,right,mid;
 left = 0;
 right = n-1;
 while(left <= right) {
 mid = (left + right) / 2;
 if(a[mid] == s) {
 printf("Found at %d",mid);
 break;
 }
 else if(a[mid] < s)
 left = mid + 1;
 else
 right = mid - 1;
 }
 if(left>right)
 printf("Not Found");
}
void dispArray(int a[],int n) {
 int i;
 for(i = 0;i < n;i++) {
 printf("%d\t",a[i]);
 }
 printf("\n");
}
int main()
{
 int a[10],n,s;
 n = readArray(a);
 bubbleSort(a,n);
 dispArray(a,n);
 printf("Enter the searching element");
 scanf("%d",&s);
 binarySearch(a,n,s);
 return 0;
}

