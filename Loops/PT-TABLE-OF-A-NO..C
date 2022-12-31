/*Write a program to print table of a number.*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,n,m;
 clrscr();
 printf("Enter the value of n: ");
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 {
 m=n*i;
 printf("%d * %d = %d \n",n,i,m);
 }
 getch();
 }