/*write a program to check whether a number is prime or not using break.*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int n,i=2;
 clrscr();
 printf("Enter any number \n");
 scanf("%d",&n);
 while(i<=n-1)
 {
 if(n%i==0)
 {
 printf("Not a prime number");
 break;
 }
 i++;
 }
 if(i==n)
 printf("It is a prime number");
 getch();
 }
