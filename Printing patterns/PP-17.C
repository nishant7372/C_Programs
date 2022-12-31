/*   Write a program to print hte following pattern:
       *
      ***
     *****
    *******
     *****
      ***
       *               */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,c=1,d=13,k;
clrscr();
for(i=1;i<=7;i++)
{
if(i<=4)
{
for(j=3;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=c;k++)
{
printf("*");
}}
else if(i>4)
{
for(j=1;j<=i-4;j++)
{
printf(" ");
}
for(k=1;k<=d;k++)
{
printf("*");
}}
d=d-2;
c=c+2;
printf("\n");
}
getch();
}