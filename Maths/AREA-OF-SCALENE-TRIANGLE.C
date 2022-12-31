/* Write a program to calculate the area of a triangle
   using following formula:
   area=sqrt(s*(s-a)*(s-b)*(s-c)), where a,b and c are
   the sides of triangle and s=(a+b+c)/2 */

   #include<stdio.h>
   #include<conio.h>
   #include<math.h>
   void main()
   {
   float a,b,c,s,area;
   clrscr();
   printf("Enter the sides a,b,c");
   scanf("%f%f%f",&a,&b,&c);
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Area of the triangle is %f",area);
   getch();
   }