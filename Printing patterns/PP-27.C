/* Write a program to print the following pattern:
   *       *
   **     **
   ***   ***
   **** ****
   *********  */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,c=7,l,m;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
for(k=1;k<=c;k++)
{
printf(" ");
}
c=c-2;
for(m=1;m<=i;m++)
{
if((i==5)&&(m==5))
printf("");
else
printf("*");
}
printf("\n");
}
getch();
}