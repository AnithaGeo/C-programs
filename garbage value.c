//GARBAGE VALUE
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a,*p;
 p = (int *)malloc(sizeof(int));
 printf("Not initiliazed .. so grabage value\n\n");
 printf("a = %d and *p=%d\n\n",a,*p);

 a = 10;
 *p = 20;

 printf("\nAfter Initilization\n");

 printf("a = %d and *p = %d",a, *p);

 free(p);
 return 0;
}
