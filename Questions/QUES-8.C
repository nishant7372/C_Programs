/*The current year and the year in which the employee
 joined the organiztion are entered through the keyboard.
 If the number of years for which the employee has served
 the organization is greater than three, then a bonus of
 Rs. 2500 is given to the employee. If the year of service
 are not greater than three,then no bonus is given to the
 employee.*/

#include<stdio.h>
#include<conio.h>
void main()
{
int cy,yoj,no_of_years,bonus;
clrscr();
printf("Enter the current year and year of joining");
scanf("%d%d",&cy,&yoj);
no_of_years=cy-yoj;
if(no_of_years>3)
{
bonus=2500;
printf("bonus=%d",bonus);
}
else{
printf("\nNo bonus!!!!!");
}
getch();
}