#include <stdio.h>
#define n 5
int f=-1,r = -1;
int q[n];

void enqueue(int e) //inserting an element on to the queue
{
	if(((r + 1) % 5) == f) //% reminder of the integer divison
		printf("\nQueue is full");

	else
	{
		if(f == -1)
			f = 0;
		r = ((r + 1) % 5);
		q[r] = e;
	}
}

void dequeue()
{
	if(f == -1)
		printf("\nQueue Empty");
	else
	{
		printf("\nItem : %d",q[f]);
		if(f == r)
			f = r = -1;
		else
			f = ((f + 1) % 5);
	}
}

int main()
{
	printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice\n");
	scanf("%d", &a);
	//char ar[25];
//	int  k;
	int ch=1;
	while(ch!=4)
	{
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: read(ar);
					break;
			case 2: disp(ar);
					break;
			case 3: printf("\nEnter position from which string is to be printed\n");
					scanf("%d", &k);
					DispByPos(ar, k-1);
					break;
			default: printf("Wrong choice!!!");		
		}
	}
	
	
	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	dequeue();
	enqueue(40);
	enqueue(50);
	enqueue(60);
	enqueue(70);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	return 0;
}
