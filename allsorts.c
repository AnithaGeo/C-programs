#include <stdio.h>
int readArray(int a[]) {
 int n,i;
 printf("Enter the no of elements");
 scanf("%d",&n);
 for(i = 0;i < n;i++) {
 printf("Enter a[%d]",i);
 scanf("%d",&a[i]);
 }
 return n;
}
void dispArray(int a[],int n) {
 int i; 
 printf("\n");
 for(i = 0;i < n;i++) {
 printf("%d\t",a[i]);
 }
}
void insertionSort(int a[],int n) {
 int i,j,e,t;
 for(i = 1;i < n;i++) {
 e = a[i];
 j = i-1;
 while(j>=0 && a[j] > e) {
 a[j+1] = a[j];
 j--;
 }
 a[j+1] = e;
 }
}
void selectionSort(int a[],int n) {
 int i,j,t;
 for(i = 0;i < n;i++) {
 for(j = i+1;j < n;j++) { // i = 0 j from 1 to n-1
 if(a[i] > a[j]) { // i = 1 j from 2 to n-1
 t = a[i];
 a[i] = a[j];
 a[j] = t;
 }
 }
 }
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
int main()
{
 int a[10],n,ch;
 do{
 	printf("\n1.BUBBLE SORT\n2.SELECTION SORT\n3.INSERTION SORT\n4.EXIT");
 	printf("\nEnter your choice");
 	scanf("%d",&ch);
 	switch(ch)
	{
 	case 1:
 		n = readArray(a);
 		dispArray(a,n);
 		bubbleSort(a,n);
 		printf("\nafter bubble sorting :\n");
 		dispArray(a,n);
 		break;
 	case 2:
 		n = readArray(a);
 		dispArray(a,n);
 		selectionSort(a,n);
 		printf("\nafter selection sorting :\n");
 		dispArray(a,n);
 		break;
 	case 3:
 		n = readArray(a);
 		dispArray(a,n);
 		insertionSort(a,n);
 		printf("\nafter insertion sorting :\n");
 		dispArray(a,n);
 		break;
 	case 4:
 		exit(4);
 		break;
 	default:
 		printf("wrong choice");
 	}
 }while(4);
}

