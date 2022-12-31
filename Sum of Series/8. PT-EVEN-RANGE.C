 /*Write a program to print even numbers in range of 1-100.*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i;
 clrscr();
 for(i=1;i<=100;i++)
 {
 if(i%2==0)
 printf("%d \t",i);
 }
 getch();
 }