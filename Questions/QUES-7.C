/* Write a program to calculate electricity bill
 based on the following information:

 Consumption unit   Rate of charge

 0-150              Rs. 3 per unit
 151-350            100 plus for Rs.3.75 per unit exceeding 150 units
 351-450            250 plus for Rs. 4 per unit exceeding 350 units
 Above 450          400 plus for Rs. 5 per unit eceeding 450 units*/

#include<stdio.h>
#include<conio.h>
void main()
{
float unit,charge;
clrscr();
printf("Enter the number of consumed units: \n");
scanf("%f",&unit);
if(unit<=150)
{
charge=3.00*unit;
printf("charge is Rs. %f",charge);
}
else if((unit>=151)&&(unit<=350))
{
charge=100+(3.75*unit);
printf("charge is Rs. %f",charge);
}
else if((unit>=351)&&(unit<=450))
{
charge=250+(4.00*unit);
printf("charge is Rs. %f",charge);
}
else if(unit>450)
{
charge=400+(5.00*unit);
printf("charge is Rs. %f",charge);
}
else
printf("Errror!!!");
getch();
}