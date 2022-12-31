/*Write a program to print table of n numbers,
 where n is input through the keyboard.*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,j,n,m;
 clrscr();
 printf("Enter the value of n: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=10;j++)
 {
 m=i*j;
 printf("%d * %d = %d \n",i,j,m);
 }
 printf("\n");
 }
 getch();
 }