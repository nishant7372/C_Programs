/*Write a program to print hte following pattern:
  *
  **
  ***
  ****
  ***
  **
  *                */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=7;i++)
{
if(i<=4)
{
for(j=1;j<=i;j++)
{
printf("*");
}}
else
{
for(j=3;j>=i-4;j--)
{
printf("*");
}}
printf("\n");
}
getch();
}