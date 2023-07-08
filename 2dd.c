#include<stdio.h>
#include<process.h>
void add(int a[10][10],int b[10][10],int m, int n)
{
int i,j,sum[10][10];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
sum[i][j]=a[i][j]+b[i][j];
}
printf("\n Addition :");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("%d\t",sum[i][j]);
}
}
void sub(int a[10][10],int b[10][10],int m, int n)
{
int i,j,sub[10][10];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
sub[i][j]=a[i][j]-b[i][j];
}
printf("\n Subtraction :");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("%d\t",sub[i][j]);
}
}
void det(int a[10][10],int m,int n)
{
int det,i,j;
if(m==2){
det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
printf("%d",det);
}
else if(m==3)
{


det=a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
printf("%d",det);
}
}
void trans(int a[10][10],int m,int n)
{
int trans[10][10],i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
trans[i][j]=a[j][i];
}
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("%d\t",trans[i][j]);
}
}
void mul(int a[10][10],int b[10][10],int m,int n,int p,int q) 
{
int k,prod[10][10],i,j;
for(i=0;i<m;i++){
for(j=0;j<q;j++)
prod[i][j]=0;
}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<n;k++)
prod[i][j]+=a[i][k]*b[k][j];
}
}
printf("\n Multiplication :");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("%d\t",prod[i][j]);
}
}
void main()
{
int a[10][10],b[10][10],m,i,j,n,p,q,ch;
printf("\n\t\tMATRIX OPERATIONS");
printf("\n\t\t-----------------");
printf("\n Enter row and column of matrix A:");
scanf("%d%d",&m,&n);
printf("\n Enter row and column of matrix B:");
scanf("%d%d",&p,&q);
printf("\n Enter elements of matrix A:");
for( i=0;i<m;i++){

for( j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("\n Enter elements of matrix B:");
for( i=0;i<p;i++){
for( j=0;j<q;j++)
scanf("%d",&b[i][j]);
}
printf("\n----------");
printf("\nMATRIX A :");
printf("\n----------");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("%d\t",a[i][j]);
}
printf("\n----------");
printf("\n MATRIX B :");
printf("\n----------");
for(i=0;i<p;i++)
{
printf("\n");
for(j=0;j<q;j++)
printf("%d\t",b[i][j]);
}
do{
printf("\n=====\nMenu\n=====\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Determinant\n5.Transpose\n6.Exit\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:if(m==p && n==q)
        	add(a,b,m,n);
       else
        	printf("Not possible...");
       break;
case 2:if(m==p && n==q)
			sub(a,b,m,n);
	   else
			printf("Not possible.....");
       break;
case 3:mul(a,b,m,n,p,q);
	   break;
case 4:if(m==n && p==q){
			printf("\n Determinant of matrix A=");
			det(a,m,n);
			printf("\n Determinant of matrix B=");
			det(b,p,q);
		}
	   else
			printf("Not possible...");
       break;
case 5:printf("\n Transpose of matrix A:");

	   trans(a,m,n);

       printf("\n Transpose of matrix B :");
       trans(b,p,q);

       break;
case 6:exit(1);
}
}while(1);
}

