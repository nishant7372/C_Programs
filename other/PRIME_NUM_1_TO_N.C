 /*Write a program to print prime numbers in range of 1-100.*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,j,c=0;
 clrscr();
 for(i=1;i<=100;i++)
 {
 for(j=2;j<=i;j++)
 {
 if(i%j==0)
 {
 c++;
 break;
 }}
 if(c==0 && i!=1)
 printf("%d \t",i);
 }
 getch();
 }