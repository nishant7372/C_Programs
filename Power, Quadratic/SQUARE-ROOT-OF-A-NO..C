/*Write a program to find the value of square root of a given number*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float n,val;
clrscr();
printf("Enter any number\n");
scanf("%f",&n);
val=sqrt(n);
printf("The square root of the given no. is %f",val);
getch();
}