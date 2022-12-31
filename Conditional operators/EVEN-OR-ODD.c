/*Write a Program to check whether a number is even or odd
 using conditional operator*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a;
 clrscr();
 printf("Enter a number");
 scanf("%d",&a);
 a%2==0? printf("Number is Even"): printf("Number is Odd");
 getch();
 }