/*If the marks obtained by a student in five different subjects
 are input through the keyboard, find out the sum and percentage
 marks obtained by the student */

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int m1,m2,m3,m4,m5,mm,sum;
 unsigned long int per;
 clrscr();
 printf("Enter the marks of student in five subjects");
 scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
 printf("\nEnter the maximum marks");
 scanf("%d",&mm);
 sum=m1+m2+m3+m4+m5;
 per=(sum*100)/mm;
 printf("sum and percentage marks are %d,%d",sum,per);
 getch();
 }