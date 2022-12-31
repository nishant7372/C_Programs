/*WAP to perform Matrix Addition where order of the matrices
 is input through the keyboard*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],b[100][100],c[100][100];
int i,j,r1,r2,c1,c2;
clrscr();
printf("Enter the order of Matrix a: \n");
scanf("%d%d",&r1,&c1);
printf("Enter the order of Matrix b: \n");
scanf("%d%d",&r2,&c2);
if((r1==r2)&&(c1==c2))
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
printf("Resultant Matrix:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d ",c[i][j]);
}
}
}
else
printf("Matrix Addition is not possible");
getch();
}