/*In a company an employee is paid as under:
If his basic salary is less than Rs. 1500,then HRA=10%
of basic salary andn DA=90% of basic salary.
If his salary is either equal to or above Rs. 1500
then HRA=Rs. 500 and DA=90% of basic salary.
If the employee's salary is input through the keyboard.
Write a program to find his gross salary.*/

#include<stdio.h>
#include<conio.h>
void main()
{
float bas_sal,hra,da,gross_sal;
clrscr();
printf("Enter the basic salary of employee");
scanf("%f",&bas_sal);
if(bas_sal<1500)
{
hra=bas_sal*0.1;
da=bas_sal*0.9;
gross_sal=bas_sal+hra+da;
printf("Gross Salary of employee is %f",gross_sal);
}
else if(bas_sal>=1500)
{
hra=500;
da=bas_sal*0.9;
gross_sal=bas_sal+hra+da;
printf("Gross salary of employee is %f",gross_sal);
}
getch();
}