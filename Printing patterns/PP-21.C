/*Write a program to print hte following pattern:
 1 0 1 0 1
 1 1 1 1 1
 1 0 1 0 1
 1 1 1 1 1
 1 0 1 0 1   */


 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,j;
 clrscr();
 for(i=1;i<=5;i++)
 {
 for(j=1;j<=5;j++)
 {
 if((j%2==0)&&(i%2!=0))
 printf("0 ");
 else
 printf("1 ");
 }
 printf("\n");
 }
 getch();
 }