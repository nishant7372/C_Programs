/* Write a program to perform addition, subtraction,
multiplication and division of two variables using switch*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,ch;
clrscr();
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
printf("\n Menu");
printf("\n 1: Addition");
printf("\n 2: Subtraction");
printf("\n 3: Multiplication");
printf("\n 4: Division");
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
c=a+b;
printf("%d",c);
break;
case 2:
c=a-b;
printf("%d",c);
break;
case 3:
c=a*b;
printf("%d",c);
break;
case 4:
c=a/b;
printf("%d",c);
break;
default:
printf("Enter between 1-4");
}
getch();
}