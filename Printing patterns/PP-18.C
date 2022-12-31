/* Write a program to print the following pattern:
   10000
   1000
   100
   10
   1      */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
if(j==5)
printf("1");
else
printf("0");
}
printf("\n");
}
getch();
}