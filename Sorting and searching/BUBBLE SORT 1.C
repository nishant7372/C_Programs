/*WAP to sort an array in ascending order usng bubble sort method*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={38,45,23,16,32};
int i,j,temp;
clrscr();
printf("Array before sorting: \n");
for(i=0;i<=4;i++)
printf("%d ",a[i]);
for(i=0;i<=4;i++)
{
for(j=0;j<=3;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nArray after sorting: \n");
for(i=0;i<=4;i++)
{
printf("%d ",a[i]);
}
getch();
}