/*Write a program to pprint he following pattern:
  1        1
  12      21
  123    321
  1234  4321
  1234554321      */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,c=8;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
for(k=1;k<=c;k++)
{
printf(" ");
}
c=c-2;
for(j=0;j<=i-1;j++)
{
printf("%d",i-j);
}
printf("\n");
}
getch();
}