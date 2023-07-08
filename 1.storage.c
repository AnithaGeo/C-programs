//STORAGE CLASSES

#include<stdio.h>
int c=10;                             //global variable initialized
void localv()
{
	int a=5;                         //local variable initialized
	printf("local var= %d\n",a);  
	a++;
	printf("local variable increased as %d\n", a);   
}
void statv()
{	
	static int b;                    //static variable declared
	printf("static var= %d\n",b++);  //static variable retains previous invocation value
}
void globalv()
{  
	printf("global var= %d\n",c);   //value of global variable printed
}
void registerv()
{
	register int i;
	int s=0;
	for(i=0; i<5; i++)
	s=s+i;
	printf("register i= %d",i);
}
int main()
{
	localv();
	localv();                       //local variable does not rtain previous invocation value
	statv();
	statv();                        
	globalv();
	registerv();
}
