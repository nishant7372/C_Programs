/*Write the output of the following program:*/

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=2;i++)
{
for(j=1;j<=2;j++)
{
if(i==j)
continue;
printf("%d \t %d \n",i,j);
}}
getch();
}

/* Output:
    i  j
    1  2
    2  1   */