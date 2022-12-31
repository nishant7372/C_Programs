/*A company decides to give bonus to all its employees on Diwali. A 5%
bonus on salary is given to male workers and 10% on salary to female workers.
Write a program to enter the salary and gender of the employee. If the salary
of the employee is less than Rs. 10000 than the employee gets an extra 2% bonus
on salary. Calculate the bonus that has to be given to the employee and display
the salary.*/

#include<stdio.h>
#include<conio.h>
void main()
{
float bonus,ex_bonus,bs;
char gen;
clrscr();
printf("Enter basic salary of the employee: \n");
scanf("%f%c",&bs,&gen);
printf("Enter gender of the employee: \n 'm' for male \n and 'f' for female \n");
scanf("%c",&gen);
if((gen=='m')&&(bs>=10000))
{
bonus=(0.05)*bs;
printf("Bonus given to employee: %f \n",bonus);
printf("Salary given to employee: %f \n",bs+bonus);
}
else if((gen=='f')&&(bs>=10000))
{
bonus=(0.1)*bs;
printf("Bonus given to employee: %f \n",bonus);
printf("Salary given to employee: %f \n",bs+bonus);
}
else if((gen=='m')&&(bs<10000))
{
bonus=(0.05)*bs;
ex_bonus=(0.02)*bs;
printf("Bonus given to employee: %f \n",bonus+ex_bonus);
printf("Salary given to employee: %f \n",bs+bonus+ex_bonus);
}
else if((gen=='f')&&(bs<10000))
{
bonus=(0.1)*bs;
ex_bonus=(0.02)*bs;
printf("Bonus given to employee: %f \n",bonus+ex_bonus);
printf("Salary given to employee: %f \n",bs+bonus+ex_bonus);
}
else
printf(" \n Error!!!");
getch();
}
