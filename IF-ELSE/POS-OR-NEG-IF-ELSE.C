/*Write a program to check whether the entered non-zero number
 is positive or negative*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter the no. you want to check");
scanf("%d",&n);
if(n>0)
printf("the no. is positive");
else
printf("the no. is negative");
getch();
}