/*Ramesh basic salary is input through the keyboard.
His da is 40% of his basic salary and hra is 20% of basic salary.
Write a progam to calculate his gross salary.*/

#include<stdio.h>
#include<conio.h>
void main()
{
float da,hra,bas_sal,gross_sal;
clrscr();
printf("Enter the basic salary");
scanf("%f",&bas_sal);
da=bas_sal*0.4;
hra=bas_sal*0.2;
gross_sal=bas_sal+da+hra;
printf("Gross Salary of Ramesh is %f",gross_sal);
getch();
}