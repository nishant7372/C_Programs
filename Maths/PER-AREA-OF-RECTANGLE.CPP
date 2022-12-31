/*If length and bradth are input through the keyboard.
  Write a program to calculate perimeter and area of a rectangle*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int l,b,per,area;
 clrscr();
 printf("Enter the value oflength and bradth");
 scanf("%d%d",&l,&b);
 per=2*(l+b);
 area=l*b;
 printf("Perimeter and Area of Rectangle are %d and %d",per,area);
 getch();
 }