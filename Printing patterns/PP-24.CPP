 /*Write a program to print pattern:
 a
 ba
 aba
 baba using increment operators only.*/

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
if((i+j)%2==0)
printf("a");
else
printf("b");
}
printf("\n");
}
getch();
}