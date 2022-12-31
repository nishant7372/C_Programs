/*Write a program to calculate factorial of
 a number using do-while loop*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int n,i=1,fact=1;
 clrscr();
 printf("Enter any number \n");
 scanf("%d",&n);
 do
 {
 fact=fact*i;
 i++;
 }
 while(i<=n);
 printf("%d",fact);
 getch();
 }