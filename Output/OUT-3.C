#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,j=1,k=2,m;
clrscr();
m=++i&&j--||++k;
printf("%d,%d,%d,%d",i,j,k,m);
getch();
}

Output - i=1, j=0, k=2, m=1