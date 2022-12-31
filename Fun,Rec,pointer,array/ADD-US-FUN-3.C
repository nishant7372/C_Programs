/*Write a program to perform addition of two numbers using function.
(Function with no arguments and return value).*/

#include<stdio.h>
#include<conio.h>
int add();
void main()
{
int d;
d=add();
printf("%d",d);
getch();
}

int add()
{
int a=4,b=6,c;
clrscr();
c=a+b;
return c;
}