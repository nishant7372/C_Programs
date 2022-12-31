/*Write a program to check whether the entered character
 is in uppercase or not*/

#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("Enter the character you want to check");
scanf("%c",&a);
if((a>=65)&&(a<=90))
printf("the character is in uppercase");
else
printf("the character is in lowercase");
getch();
}