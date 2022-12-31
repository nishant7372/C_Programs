/*Write a program to calculate Circumference and Area of a circle*/

#include<stdio.h>;
#include<conio.h>;
void main()
{
float cir,area,r;
clrscr();
printf("Enter the Value of Radius");
scanf("%f",&r);
cir=2*3.14*r;
area=3.14*r*r;
printf("\nCircumference of circle is %f",cir);
printf("\nArea of circle is %f",area);
getch();
}