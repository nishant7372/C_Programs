/* A company insures its drivers in the following cases:
1. If driver is married
2. If driver is unmarried, male and above 30 years of age
3. If driver is unmarried, female and above 25 years of age.
In all other cases the driver is not insured. If the marital status,
gender and age of the driver are the inputs, write a program to
determine whether the driver is to insured or not. */

#include<stdio.h>
#include<conio.h>
void main()
{
char ms;
char gen;
int age;
clrscr();
printf("Enter marital status: \n 'm' for married, \n 'u' for unmarried \n");
scanf("%c%c",&ms,&gen);
printf("Enter gender: \n 'm' for male, \n 'f' for female \n");
scanf("%c",&gen);
printf("Enter Age: \n");
scanf("%d",&age);
if(((ms=='m'))||((ms=='u')&&(gen=='m')&&(age>30))||((ms=='u')&&(gen=='f')&&(age>25)))
printf("\n Driver is Insured");
else
printf("\n Driver is not insured");
getch();
}