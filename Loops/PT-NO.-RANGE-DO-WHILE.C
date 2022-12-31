/*Write a program to print no. from the range 1-100 using do-while loop.*/

#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;
do
{
printf("%d \t",i);
i=i++;
}
while(i<=100);
getch();
}