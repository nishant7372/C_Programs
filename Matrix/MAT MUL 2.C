/*WAP to perform matrix multiplication where order
 of the matrices is input through the keyboard*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,k;
int r1,r2,c1,c2;
clrscr();
printf("Enter the order of matrix a: \n");
scanf("%d%d",&r1,&c1);
printf("Enter the order of matrix b; \n");
scanf("%d%d",&r2,&c2);
if(c1==r2)
{
printf("Enter the elements in matrix a: \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
}
printf("Enter the elements in matrix b: \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);
}
for(i=0;i<r1;i++)
{
for(j=0;j<=c2;j++)
{
c[i][j]=0;
for(k=0;k<=c1;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}}}
printf("Resultant Matrix: \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
}
else
printf("Multiplication is not possible");
getch();
}