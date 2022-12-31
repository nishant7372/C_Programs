/*Write a program to find the right most digit of integral part of a
 floating point number*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 float n;
 int ip,rmd;
 clrscr();
 printf("Enter a floating point number \n");
 scanf("%f",&n);
 ip=(int)n;
 rmd=ip%10;
 printf("The right most digit of intgral part is %d",rmd);
 getch();
 }