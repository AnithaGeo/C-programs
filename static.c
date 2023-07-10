#include<stdio.h>
int stat()
{
static int count = 0;
count++;                   //modifying static variable
return count;
}

int var()
{
int count = 0;
count++;                  //modifying variable
return count;
}

int main()
{
printf("%d ", stat());
printf("%d \n", stat());
printf("Static variable modified\n");
printf("%d ", var());
printf("%d ", var());
return 0;
}
