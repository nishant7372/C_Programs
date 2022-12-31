/*Write a program to perform addition of two numbers using function.
(Function with arguments but no return value)*/

#include<stdio.h>
#include<conio.h>
void add();
void main()
{
int a=4,b=5;
add(a,b);
getch();
}

void add(int x,int y)     //x=4,y=5
{
int z;
clrscr();
z=x+y;
printf("%d",z);
}