/*Write a program to print the following pattern:
 A A A A A
 B B B B
 C C C C
 D D
 E        */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=65;i<=69;i++)
{
for(j=69;j>=i;j--)
{
printf("%c ",i);
}
printf("\n");
}
getch();
}