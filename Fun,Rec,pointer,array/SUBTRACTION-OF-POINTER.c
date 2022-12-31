/* Subtraction using pointer */

#include<stdio.h>
#include<conio.h>
void main()
{
int a[]={10,20,30,40};
int*i,*j,c;
clrscr();
i=&a[1];
j=&a[3];
c=(*j-*i);
printf("%d",c);
getch();
}