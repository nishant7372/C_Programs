/*write a program to check whether a number is prime or not using counter.*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,c=0;
clrscr();
printf("Enter any number \n");
scanf("%d",&n);
while(i<=n)
{
if(n%i==0)
c++;
i++;
}
if(c==2)
printf("It is a prime number");
else
printf("Not a prime number");
getch();
}
