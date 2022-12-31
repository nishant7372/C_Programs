/*Write a program to check whether a triangle
 is isoceles, equilateral,scalene or right
 angled triangle, where the sides of triangle
 are input through the keyboard.*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a,b,c;
 clrscr();
 printf("Enter the sides of the triangle: \n");
 scanf("%d%d%d",&a,&b,&c);
 if((a==b)&&(b==c))
 printf("Equilateral triangle");
 else if((a==b)||(a==c)||(b==c))
 printf("Isoceles triangle");
 else if((a!=b)&&(b!=c))
 {
 printf("Scalene triangle \n");
 if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))
 printf("& Right angled triangle");
 }
 getch();
 }
