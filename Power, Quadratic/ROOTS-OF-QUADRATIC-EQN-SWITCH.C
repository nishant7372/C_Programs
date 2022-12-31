/*Write a program to pr int the roots  of a quadratic equation
 and its characteristics using switch-case statement.*/

 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
 float a,b,c;
 float d,x1,x2;
 clrscr();
 printf("Enter the values of a,b and c of quadratic equation(ax^2+bx+c): \n");
 scanf("%f%f%f",&a,&b,&c);
 d=((b*b)-(4*a*c));
 printf("discriminant is %f \n",d);
 switch(d>0)
 {
 case 1:
 x1=(-b+sqrt(d))/(2*a);
 x2=(-b-sqrt(d))/(2*a);
 printf("Two distinct and real roots exists: %f  and %f \n",x1,x2);
 break;
 case 0:
 switch(d<0)
 {
 case 1:
 printf("Imaginary roots \n");
 break;
 case 0:
 x1=x2=(-b/(2*a));
 printf("Two equal and real roots exists: %f and %f \n",x1,x2);
 break;
 }
 }
 getch();
 }