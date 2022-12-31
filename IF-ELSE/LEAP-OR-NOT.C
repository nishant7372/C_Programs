/*Write a program to check whether the entered year is leap or not*/

#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("Enter the year");
scanf("%d",&year);
if((year%400==0)||((year%4==0)&&(year%100!=0)))
printf("this is a leap year");
else
printf("this is not a leap year");
getch();
}