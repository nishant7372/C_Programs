/*Write a program to check whether the entered
 number is a perfect number or not.
 A no. is perfect number, which is equal to
 the sum of its factors(except itself).
 For eg.factor of 6 is 1,2,3 so, 1+2+3=6, the given number*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,n,sum=0;
 clrscr();
 printf("Enter any number \n");
 scanf("%d",&n);
 for(i=1;i<n;i++)
 {
 if(n%i==0)
 sum=sum+i;
 }
 if(n==sum)
 printf("Perfect number");
 else
 printf("Not a Perfect number");
 getch();
 }