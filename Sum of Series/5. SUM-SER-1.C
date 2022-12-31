/*Write a program to calculate the sum of the following series:
  1/1 + 2^2/2 + 3^3/3 + .... upto n term, where the value of
  n is input through the keyboard.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("Enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+pow(i,i-1);
}
printf("%d",sum);
getch();
}