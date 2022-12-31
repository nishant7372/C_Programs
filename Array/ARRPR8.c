/*WAP to search an element in the array using linear search*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={30,20,40,10,50};
int i,target,flag=100;
clrscr();
printf("Enter the target element: \n");
scanf("%d",&target);
for(i=0;i<=4;i++)
{
if(target==a[i])
{
printf("Target element is found");
flag=i;
}
}
if(flag==100)
printf("Target element not found");
getch();
}