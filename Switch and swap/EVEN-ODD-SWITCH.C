/*Write a progarm to to check whether the entered number is
 even or odd using switch satatement*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int n,a;
 clrscr();
 printf("Enter any number");
 scanf("%d",&n);
 a=n%2;
 switch(a)
 {
 case 0:
 printf("Number is Even");
 break;
 case 1:
 printf("Number is Odd");
 break;
 }
 getch();
 }