/*Write a program to calculate simple interest of three
 persons where p,r and t are input through the keyboard*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i=1;
 float p,r,t,si;
 clrscr();
 while(i<=3)
 {
 printf("Enter p, r and t \n");
 scanf("%f%f%f",&p,&r,&t);
 si=(p*r*t)*(0.01);
 printf("Simple Interest = %f \n",si);
 i++;
 }
 getch();
 }
