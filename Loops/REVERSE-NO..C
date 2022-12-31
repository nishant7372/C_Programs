/*Write a program to print reverse of a number*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,rev=0;
clrscr();
printf("Enter any number \n");
scanf("%d",&n);
while(n>0)
{
r=n%10;
rev=(rev*10)+r;
n=n/10;
}
printf("Reverse number is %d",rev);
getch();
}