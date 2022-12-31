/* Declaration of one dimensional array */

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];          //declaration of an Array
int i;
clrscr();
printf("Enter the elements in array: \n");
for(i=0;i<=4;i++)
scanf("%d",&a[i]);
for(i=0;i<=4;i++)
printf("%d,",a[i]);
getch();
}
