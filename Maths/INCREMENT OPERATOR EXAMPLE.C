/*Program having use of Prefix and Postfix Increment Operators*/

#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
x=5, y=15;
x=x++ + ++y;
y=++x + ++y;
printf("%d,%d",x,y);
getch();
}
