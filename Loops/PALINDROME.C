/*Write a program to check whether a number is palindrome or not*/

#include<stdio.h>
#include<conio.h>
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
s=(s*10)+r;
n=n/10;
}
if(p==s)
printf("Number is Palindrome");
else
printf("Number is not a palindrome");
getch();
}