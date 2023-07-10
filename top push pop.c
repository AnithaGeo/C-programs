//TOP PUSH POP
#include <stdio.h>

int main()
{
 int a[5];
 int top=-1,ch;
 for(;ch != 4;)
 {
 printf("Push -1\nPop - 2\nPeep - 3\nExit-4\nUser Choice");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: //push
 if(top+1 == 5)
 {
 printf("Array is Full");
 }
 else
 {
 printf("Enter the value to be pushed");
 scanf("%d",&a[++top]);
 }
 break;
 case 2: //pop
 if(top == -1)
 {
 printf("Array is Empty");
 }
 else
 {
 printf("\nPop %d",a[top--]);
 }
 break;
 case 3: //peek
 if(top == -1)
 {
 printf("Array is Empty");
 }
 else
 {
 printf("\nPeep %d",a[top]);
 }
 case 4:
 break;
 default:
 printf("Wrong Choice");
 break;
 }
 }
 return 0;
}
