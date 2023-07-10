#include<stdio.h>
int q[10];
int f=-1,r=-1;
void enqueue(int e)
{
	if(r==10-1)
	{
		printf("\nQueue is full");
	}
	else
	{
		if(f==-1)
		{
			f=0;
		}
		r=r+1;
		q[r]=e;
		printf("\nenqueued:%d",e);
	}
}
void dequeue()
{
	int i;
	if(f==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		printf("\nDequeing  %d: ",q[f]);
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
			for(i=0;i<r;i++)
			{
				q[i]=q[i+1];
			}
			r=r-1;
		}
	}
}

int main()
{
	int i;
	for(i=5;i<10;i++)
	{
		enqueue(i);
	}
	for(i=6;i<8;i++)
	{
		dequeue();
	}
}

