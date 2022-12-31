/*The marks obtained by a tudent in five different subjects
 are input through the keyboard. The student gets a division
 according to following rules:
 60-100 - first division
 50-60 - second divison
 40-50 - third divison
 less than 40 - fail*/

#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3,m4,m5,per;
clrscr();
printf("Enter the marks of student in 5 Subjects");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
per=(m1+m2+m3+m4+m5)/5;
printf("percentage is %d",per);
if(per>=60)
printf("\nfirst division");
else if(per>=50)
printf("\nSecond division");
else if(per>=40)
printf("\nThird Division");
else
printf("\nfail");
getch();
}