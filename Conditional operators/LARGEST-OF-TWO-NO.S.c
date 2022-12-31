/*Write a progarm to find the largest of two numbers
  using conditional operator*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a,b,lar;
 clrscr();
 printf("Enter the two numbers");
 scanf("%d%d",&a,&b);
 lar = (a>b)?a:b;
 printf("The largest number is %d",lar);
 getch();
 }