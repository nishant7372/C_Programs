/* Write a program to print the following pattern:
   1234554321
   1234  4321
   123    321
   12      21
   1        1    */


 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,j,k,c=0;
 clrscr();
 for(i=5;i>=1;i--)
 {
 for(j=1;j<=i;j++)
 {
 printf("%d",j);
 }
 for(k=1;k<=c;k++)
 {
 printf(" ");
 }
 c=c+2;
 for(j=0;j<=i-1;j++)
 {
 printf("%d",i-j);
 }
 printf("\n");
 }
 getch();
 }