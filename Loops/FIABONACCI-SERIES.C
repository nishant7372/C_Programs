/*Write a program to print n terms of fibonacci series.*/
//0 1 1 2 3 5 8 13.......

#include<stdio.h>
#include<conio.h>
void main()
{
int i,a=-1,b=1,c,n;
clrscr();
printf("Enter any number as n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
}
getch();
}