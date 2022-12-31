/*Write a program to calculate the sum of the series:
 1^3 + 2^3 + 3^3 + ... upto n terms, where n is input
 through the keyboard.*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int n,i,res,s=0;
 clrscr();
 printf("Enter the value of n: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 res=i*i*i;
 s=s+res;
 }
 printf("%d",s);
 getch();
 }