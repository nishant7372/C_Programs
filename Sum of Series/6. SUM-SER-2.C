/*Write a program to calculate the sum of the following series:
  1/1! + 2/2! + 3/3! + .... upto 7 terms. */

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float i,sum=0.0,fact=1.0;
clrscr();
for(i=1;i<=7;i++)
{
fact=fact*i;
sum=sum+(i/fact);
}
printf("%f",sum);
getch();
}