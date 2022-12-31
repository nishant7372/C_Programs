/*WAP to find the largest and smallest element in the array*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[4]={20,30,40,10},lar,small,i;
clrscr();
lar=a[0];
for(i=0;i<=3;i++)
{
if(a[i]>lar)
lar=a[i];
}
small=a[0];
for(i=0;i<=3;i++)
{
if(a[i]<small)
small=a[i];
}
printf("Largest element is %d \n",lar);
printf("Smallest element is %d",small);
getch();
}