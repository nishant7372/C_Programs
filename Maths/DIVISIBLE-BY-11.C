/*Write a program to check whther the entered number is
 divisible by 11 or not*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the number");
scanf("%d",&n);
if(n%11==0)
printf("no. is divisible by 11");
else
printf("no. is not divisible by 11");
getch();
}
