/* Write a program to print the following pattern:
   ********
   ********
      **
      **
      **
      **     */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=6;i++)
{
if(i<=2)
for(j=1;j<=8;j++)
{
printf("*");
}
else
{
for(j=1;j<=3;j++)
{
printf(" ");
}
for(j=1;j<=2;j++)
{
printf("*");
}}
printf("\n");
}
getch();
}