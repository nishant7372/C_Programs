/*Write a program to check whether the entered character
is in uppercase or lowercase also changes its case*/

#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("Enter any character");
scanf("%c",&a);
if((a>=65)&&(a<=90))
{
printf("Character is in uppercase");
a=a+32;
printf("\nCorresponding lowercase is %c",a);
}
else if((a>=97)&&(a<=122))
{
printf("Character is in lowercase");
a=a-32;
printf("\nCorresponding uppercase is %c",a);
}
else
printf("\nit is not an alphabet");
getch();
}