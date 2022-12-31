/* Call by Reference */

#include<stdio.h>
#include<conio.h>
void swap();
void main()
{
int a=4,b=5;
clrscr();
swap(&a,&b);
printf("%d,%d",a,b);
getch();
}

void swap(int*x,int*y)
{
int t;                                 // a   b
t=*x;        //t=4              // input  4   5
*x=*y;       //100=5            // output 5   4
*y=t;        //200=4
}