/*Write a program to convert temperature from celcius to fahranhiet*/

#include<stdio.h>
#include<conio.h>
void main()
{
float cel,fahren;
clrscr();
printf("Enter the temperaure in celcius");
scanf("%f",&cel);
fahren=9*cel/5+32;
printf("Temperature in fahrenhiet is %f",fahren);
getch();
}