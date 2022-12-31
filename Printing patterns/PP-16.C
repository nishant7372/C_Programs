/* Write a program to print the following pattern:
	***
	***
	***
    ***********
    ***********
	***
	***
	***        */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=8;i++)
{
if(i<=3)
{
for(j=1;j<=4;j++)
{
printf(" ");
}
for(k=1;k<=3;k++)
{
printf("*");
}}
else if((i==4)||(i==5))
for(j=1;j<=11;j++)
{
printf("*");
}
else
{
for(j=1;j<=4;j++)
{
printf(" ");
}
for(k=1;k<=3;k++)
{
printf("*");
}}
printf("\n");
}
getch();
}
