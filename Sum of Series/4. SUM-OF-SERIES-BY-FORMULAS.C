/*Write a program to find sum of n natural numbers,
 square sries, cubic sreies using formula*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,sum1,sum2,sum3;
clrscr();
printf("Enter the number upto which you have to find sum: ");
scanf("%d",&n);
sum1=n*(n+1)/2;
sum2=(n*(n+1)*(2*n+1))/6;
sum3=pow(((n)*(n+1)),2)/4;
printf("sum of numbers is %d \n",sum1);
printf("sum of square series is %d \n",sum2);
printf("sum of cubic series is %d \n",sum3);
getch();
}