#include<stdio.h>
#define N 5
int a[N];                //global variables
int n=-1;                //global variables
void insert()            //function to insert element
{
	if(n+1==N)
		printf("Array is full");
	else
	{
		n=n+1;
		printf("Enter value\t");
		scanf("%d",&a[n]);
	}
}
void disp()              //function to display array
{
	int i;
	if(n==-1)
		printf("Array is empty");
	else
	{
		for(i=0;i<=n;i++)
			printf("%d\t",a[i]);
	}
}
int search(int k)        //function to search for an element
{
	int i;
	for(i=0; i<=n&&a[i]!=k; i++)
	;
	return i;
}
int deleting(int pos)   //function to delete an element
{
	int i;
	for(i=pos; i<n; i++)
		a[i]=a[i+1];
	n=n-1;
	return n;
}
void sort()               //fuction to sort elements
{
	int i,j,temp;
	for(i=0; i<=n; i++)
		for(j=i+1; j<n; j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	disp();              //displaying sorted elements
}
int menu()              //function to print menu
{
	int ch;
	printf("\n1.Insert\t2.Display\t3.Search\t4.Delete\t5.Sort\t6.Exit\nEnter your choice\t");
	scanf("%d",&ch);
	return ch;
}
int processarray()      //function to drive the menu
{
	int ch,pos;
	for(ch=menu(); ch!=6; ch=menu())
	{
		switch (ch)
		{
			case 1:
				insert();
				break;
			case 2:
				disp();
				break;
			case 3:
				if(n>=0)
				{
					printf("\nEnter element\t");
					scanf("%d",&ch);
					pos=search(ch);
					if(pos>n)
						printf("%d not found",ch);
					else
						printf("%d present at %d",ch,pos+1);
				}
				else
					printf("Array empty");
					break;
			case 4:
				if(n>=0)
				{
					printf("\nEnter element\n");
					scanf("%d",&ch);
					pos=search(ch);
					if(pos>n)
						printf("%d not found",ch);
					else
						n=deleting(pos);
				}
				else
					printf("Array empty");
					break;
			case 5:
				sort();
				break;
			default:
				printf("Wrong choice");
				break;
		}
	}
}
int main()              //main function
{
	processarray();
	return 0;
}
