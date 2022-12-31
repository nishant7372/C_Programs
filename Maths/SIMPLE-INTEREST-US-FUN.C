/*Write a program to calculate simple interest using function*/

#include<stdio.h>
#include<conio.h>
void output();
void main()
{
output();
getch();
}

void output()
{
float si,p,r,t;
clrscr();
printf("Enter p,r,t: \n");
scanf("%f%f%f",&p,&r,&t);
si=(p*r*t)/100;
printf("\n Simple interest is %f",si);
}