/*Write a program to find the largest of three
  numbers using nested if-else*/
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a,b,c;
 clrscr();
 printf("Enter the three numbers");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
 if(a>c)
 printf("largest is %d",a);
 else
 printf("largest is %d",c);
 }
 else if(b>c)
 printf("largest is %d",b);
 getch();
 }