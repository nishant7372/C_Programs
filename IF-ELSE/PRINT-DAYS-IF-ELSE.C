/*Write a progarm to print days of a week based
 on user's choice using else-if ladder*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int n;
 clrscr();
 printf("Enter your choice");
 scanf("%d",&n);
 if(n==1)
 printf("Monday");
 else if(n==2)
 printf("Tuesday");
 else if(n==3)
 printf("Wednesday");
 else if(n==4)
 printf("Thursday");
 else if(n==5)
 printf("Friday");
 else if(n==6)
 printf("Saturday");
 else if(n==7)
 printf("Sunday");
 else
 printf("Enter between 1-7");
 getch();
 }