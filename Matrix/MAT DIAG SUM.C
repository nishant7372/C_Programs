/*WAP to program to calculate the sum of diagonal of a matrix*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,sum=0;
clrscr();
printf("Enter the elements in matrix a: \n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
if(i==j)
sum=sum+a[i][j];
}}
printf("sum is %d",sum);
getch();
}