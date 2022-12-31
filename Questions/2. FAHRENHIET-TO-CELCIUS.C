/*Write a program to convert temperature from fahrenhiet to celcius*/

#include<stdio.h>
#include<conio.h>
void main()
{
float cel,fahren;
clrscr();
printf("Enter the value of temperature in fahrenhiet");
scanf("%f",&fahren);
cel=5*(fahren-32)/9;
printf("Temperature in celcius is %f",cel);
getch();
}