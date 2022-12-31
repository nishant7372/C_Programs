/*WAP to find the smallest element in the array*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[4]={20,30,40,10},small,i;
clrscr();
small=a[0];
for(i=0;i<=3;i++)
{
if(a[i]<small)
small=a[i];
}
printf("Smallest element is %d",small);
getch();
}