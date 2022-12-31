/*Write the output:*/

#include<stdio.h>
#include<conio.h>
void main()
{
int x=20,y=35;
clrscr();
x=y++ + x++ + ++y;
y=++y + ++x + y++;
printf("x=%d \ny=%d \n",x,y);
getch();
}


Output - x=94
         y=171