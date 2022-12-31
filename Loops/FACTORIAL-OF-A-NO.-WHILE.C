/*Write a program to calculate factorial of n using while loop*/

#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n,fact=1;
clrscr();
printf("Enter the value of n");
scanf("%d",&n);
while(i<=n)
{
fact=fact*i;
i++;
}
printf("%d \n",fact);
getch();
}