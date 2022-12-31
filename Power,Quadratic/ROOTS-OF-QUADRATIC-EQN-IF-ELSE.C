/*Write a program to calculate roots of a quadratic equation*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
float d,x1,x2;
clrscr();
printf("Enter the values of a,b,c: ");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
printf("discriminant is %f \n",d);
if(d>0)
{
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("roots are %f and %f \n",x1,x2);
}
else if(d==0)
{
x1=x2=-b/(2*a);
printf("roots are %f and %f \n",x1,x2);
}
else
printf("imaginary roots");
getch();
}

