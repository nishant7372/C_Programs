#include<stdio.h>
#include<conio.h>
void main()
{
int fact=1,i=1,n;
clrscr();
printf("Enter any number");
scanf("%d",&n);
while(i<=n)
{
fact=fact*i;
i=i+1;
}
printf("%d",fact);
getch();
}
