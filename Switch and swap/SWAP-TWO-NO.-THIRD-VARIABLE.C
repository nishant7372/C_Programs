/*Write a program to swap two numbers using a third variable*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
printf("\nNumbers before swapping are %d,%d",a,b);
c=a;
a=b;
b=c;
printf("\nNumbers after swapping are %d,%d",a,b);
getch();
}