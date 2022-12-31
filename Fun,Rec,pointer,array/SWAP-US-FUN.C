/*Write a program to perform swapping of two numbers using function.
  (Function with arguments but no return values).*/

 #include<stdio.h>
 #include<conio.h>
 void swap(int,int);
 void main()
 {
 int a=4,b=3;
 swap(a,b);
 getch();
 }

 void swap(int x,int y)
 {
 int z;
 clrscr();
 z=x;
 x=y;
 y=z;
 printf("%d,%d",x,y);
 }