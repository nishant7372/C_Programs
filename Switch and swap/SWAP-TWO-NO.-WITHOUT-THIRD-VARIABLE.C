/*Write a program to swap two numbers without using
 a third variable*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter two numbers");
scanf("%d%d",&a,&b);
printf("\nNumbers before swapping are %d,%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nNumbers after swapping are %d,%d",a,b);
getch();
}