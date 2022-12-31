/*WAP to input and print an array*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
for(i=0;i<=4;i++)
scanf("%d",&a[i]);
for(i=0;i<=4;i++)
printf("%d",a[i]);
getch();
}