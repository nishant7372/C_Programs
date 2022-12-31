/*Write a program to print thhe following pattern:
   1 0 0 0 0
   0 1 0 0 0
   0 0 1 0 0
   0 0 0 1 0
   0 0 0 0 1            */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(i==j)
printf("1 ");
else
printf("0 ");
}
printf("\n");
}
getch();
}