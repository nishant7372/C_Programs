/*Write a Program to calculate compound interest where the value of
 p,r and t input through the keyboard*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float ci,p,r,t;
clrscr();
printf("Enter the values of p,r and t(in years)");
scanf("%f%f%f",&p,&r,&t);
ci=p*pow((1+r/100),t);
printf("Compound interest is %f",ci);
getch();
}