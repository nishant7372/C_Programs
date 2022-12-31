/*Accept any two numbers, if first number is greater
 than second number then print the sum of these two numbers,
 otherwise print their difference. Write the program using
 ternary operator*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a,b;
 clrscr();
 printf("Enter the two numbers \n");
 scanf("%d%d",&a,&b);
 (a>b)?printf("%d",a+b):printf("%d",b-a);
 getch();
 }