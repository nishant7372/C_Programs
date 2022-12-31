/*Pointer to pointer*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a=4,*p1;
int **p2;
clrscr();
p1=&a;
p2=&p1;
printf("%d",**p2);
getch();
}