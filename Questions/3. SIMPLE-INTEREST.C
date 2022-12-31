/*Write a Program to calculate simple interest where the value
 of p,r and t input through the keyboard*/

#include<stdio.h>;
#include<conio.h>;
void main()
{
float si,p,r,t;
clrscr();
printf("Enter the values of p,r and t(in years)");
scanf("%f%f%f",&p,&r,&t);
si=(p*r*t)/100;
printf("Simple Interest is %f",si);
getch();
}