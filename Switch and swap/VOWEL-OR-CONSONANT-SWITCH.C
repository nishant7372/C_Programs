/*WAP to check whether the entered character is a vowel or a consonant*/

#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter any alphabet");
scanf("%c",&ch);
ch=tolower(ch);
switch(ch)
{
case 'a':
printf("Vowel");
break;
case 'e':
printf("Vowel");
break;
case 'i':
printf("Vowel");
break;
case 'o':
printf("Vowel");
break;
case 'u':
printf("Vowel");
break;
default:
printf("Consonant");
}
getch();
}