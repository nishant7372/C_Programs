/* Write a program to print the following pattern:
   *********
   **** ****
   ***   ***
   **     **
   *       *  */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,c=-1,m;
clrscr();
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
printf("*");
}
for(k=1;k<=c;k++)
{
printf(" ");
}
c=c+2;
for(m=5;m>=i;m--)
{
if((i==1)&&(m==1))
printf(" ");
else
printf("*");
}
printf("\n");
}
getch();
}