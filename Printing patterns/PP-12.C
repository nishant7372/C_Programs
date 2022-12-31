/* Write a program to print the following pattren:
       *
      **
     ***
    ****
   *****         */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=5;i++)
{
for(j=4;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("*");
}
printf("\n");
}
getch();
}