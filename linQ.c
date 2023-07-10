#include<stdio.h>
#define n 5
int f=-1,r=-1;
int q[n];
void enq(int ele)
{
	if(r+1==n)
		printf("Q full");
	else
		r=r+1;
		q[r]=ele;
		if(f==-1)
			f=0;
}
void deq()
{
	int i;
	if(f==-1)
		printf("Q empty");
	else
		for(i=0; i<r; i++)
			q[i]=q[i+1];
		r=r-1;
	for(i=0; i<r; i++)
		printf("%d\t", q[i]);
	
}
int main()
{
	int ele;
	enq(10);
	printf("\n");
	enq(20);
	printf("\n");
	enq(40);
	printf("\n");
	deq();
	printf("\n");
	enq(50);
	printf("\n");
	enq(43);
	printf("\n");
	enq(3);
	printf("\n");
	deq();
	printf("\n");
	deq();
	printf("\n");
	deq();
	printf("\n");
	deq();
	printf("\n");
	return 0;
}
