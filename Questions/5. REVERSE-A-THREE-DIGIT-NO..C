/*Write a program to reverse a three digit number*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,c,rev_num;
clrscr();
printf("Enter the three digit no. you want to reverse");
scanf("%d",&n);
a=n/10;
b=n%10;
n=a;
a=n/10;
c=n%10;
rev_num=b*100+c*10+a;
printf("%d",rev_num);
getch();
}