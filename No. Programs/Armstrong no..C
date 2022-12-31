/*Write a program to check whether a number is armstrong or not*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,r,p,s=0;
clrscr();
printf("Enter any number");
scanf("%d",&n);
p=n;
while(n!=0)
{
r=n%10;
s=s+pow(r,3);
n=n/10;
}
if(p==s)
printf("Number is Armstrong");
else
printf("Number is not Armstrong");
getch();
}