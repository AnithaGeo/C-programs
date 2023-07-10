//realloc
#include <stdio.h>
int main()
{
 int a; 
 int *p; // p is a pointer variable

 a = 20; // the memory of contains 20

 p = &a; // p points to the address of address

 printf("Address of a is : %d and the value of a is %d\n",&a,a);

 printf("Address of p is : %d and the value of p is %d\n",&p,p);

 printf("Value at p %d",*p);
 return 0;
}

