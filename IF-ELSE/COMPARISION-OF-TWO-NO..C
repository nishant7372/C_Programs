/*Write a program for comparison of two numbers*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the numbers");
scanf("%d%d",&a,&b);
if(a==b)
printf("%d is equal to %d",a,b);
else if(a>b)
printf("%d is largest",a);
else if(a<b)
printf("%d is largest",b);
getch();
}