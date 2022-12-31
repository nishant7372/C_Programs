/*Write a program to calculate factorial value
 of a number using Recursion*/

 #include<stdio.h>
 #include<conio.h>
 int rec(int);
 void main()
 {
 int n,fact;
 clrscr();
 printf("Enter the value of n: \n");
 scanf("%d",&n);
 fact=rec(n);                 //let n=4
 printf("%d",fact);
 getch();
 }

 int rec(int x)               //x=4
 {
 int f;
 if(x==1)
 return(1);                   //=4*rec(3)
 else                         //=3*rec(2)
 f=x*rec(x-1);                //=2*1
 return(f);
 }