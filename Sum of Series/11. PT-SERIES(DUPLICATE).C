#include<stdio.h>
#include<conio.h>
void main()
{
float sum=0.0,fact=1.0,i,n;
clrscr();
printf("Enter n");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
sum=sum+i/fact;
}
printf("%f",sum);
getch();
}
