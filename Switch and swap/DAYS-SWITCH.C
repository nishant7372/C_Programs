/*Write a program to print days of week using switch statement*/

#include<stdio.h>
#include<conio.h>
void main()
{
int day;
clrscr();
printf("Enter your choice");
scanf("%d",&day);
switch(day)
{
case 1:
printf("Monday");
break;
case 2:
printf("Tuesday");
break;
case 3:
printf("Wednesday");
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("Saturday");
break;
case 7:
printf("Sunday");
break;
default:
printf("Enter between 1-7");
}
getch();
}