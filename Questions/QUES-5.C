/*Write a program to find the left most digit of integral part of a
 floating point number*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 float n;
 int ip,lmd;
 clrscr();
 printf("Enter a floating point number with two integral digits \n");
 scanf("%f",&n);
 ip=(int)n;
 lmd=ip/10;
 printf("The left most digit of intgral part is %d",lmd);
 getch();
 }