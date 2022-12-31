/*Write a program to check whther the entered number is even or odd*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the no. you want to check");
scanf("%d",&n);
if(n%2==0)
printf("the no. is even");
else
printf("the no. is odd");
getch();
}