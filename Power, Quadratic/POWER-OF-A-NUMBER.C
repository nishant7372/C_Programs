/*  Write a program to find the power of a number
                       or
             Use of Power function  */

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,y,z;
clrscr();
printf("Enter the value of x and y");
scanf("%d%d",&x,&y);
z=pow(x,y);
printf("x^y is %d",z);
getch();
}