/*Write a program to calculate the sum of first n natural number*/

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
printf("Enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
}