/*Write a program to perform addition of two numbers using function.
(Function with arguments and return values also).*/

#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
int a=4,b=6,d;
d=add(a,b);
printf("%d",d);
getch();
}

int add(int x,int y)
{
int z;
clrscr();
z=x+y;
return z;
}