/*Write a program to calculate factorial of a
 number using for loop*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,fact=1,n;
 clrscr();
 printf("Enter any number \n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 fact=fact*i;
 }
 printf("%d",fact);
 getch();
 }
