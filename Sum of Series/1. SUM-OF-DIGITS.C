/*Write a program to calculate the sum of digits of a number*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,rev=0;
clrscr();
printf("Enter any number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
rev=rev+r;
n=n/10;
}
printf("%d",rev);
getch();
}