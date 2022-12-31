/* Use of continue in loop */

#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=1;i<=20;i++)
{
if((i==5)||(i==10))
continue;
printf("%d \t",i);
}
getch();
}