//STACK
#include <stdio.h>
int a[5];
int top = -1;
void push()
{
 if(top+1 == 5)
 {
 printf("Array is Full");
 }
 else
 {
 printf("Enter the value to be pushed");
 scanf("%d",&a[++top]);
 }
}

void pop()
{
 if(top == -1)
 {
 printf("Array is Empty");
 }
 else
 {
 printf("\nPop %d",a[top--]);
 }
}

void peep()
{
 if(top == -1)
 {
 printf("Array is Empty");
 }
 else
 {
 printf("\nPeep %d",a[top]);
 }
}

int menu()
{
 int ch;
 printf("Push -1\nPop - 2\nPeep - 3\nExit-4\nUser Choice");
 scanf("%d",&ch);
 return ch;
}
int main()
{
 int ch;
 for(ch=menu();ch != 4;ch = menu())
 {
 switch(ch)
 {
 case 1: //push
 push();
 break;
 case 2: //pop
 pop();
 break;
 case 3: //peep or peek
 peep();
 break;
 case 4:
 break;
 default:
 printf("Wrong Choice");
 break;
 }
 }
 return 0;
}
