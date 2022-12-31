/*Write a prgram to print the following pattern:
 A
 AB
 ABC
 ABCD
 ABCDE  */

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,j;
 clrscr();
 for(i=65;i<=69;i++)
 {
 for(j=65;j<=i;j++)
 {
 printf("%c",j);
 }
 printf("\n");
 }
 getch();
 }