/*Write a program to perform addition of two numbers using function.
(Function with no arguments and no return value).*/

#include<stdio.h>
#include<conio.h>
void add();
void main()
{
add();
getch();
}

void add()
{
int a=4,b=6,c;
clrscr();
c=a+b;
printf("%d",c);
}