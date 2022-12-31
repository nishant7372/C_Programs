/*Write a program to prinnt the following pattern:
 A B C D E
 A B C D
 A B C
 A B
 A           */

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,j;
 clrscr();
 for(i=69;i>=65;i--)
 {
 for(j=65;j<=i;j++)
 {
 printf("%c",j);
 }
 printf("\n");
 }
 getch();
 }