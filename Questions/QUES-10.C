/*Write a program to recieve marks of physics, chemistry
 and maths from user and check its eligiblity for course if
 Marks of Physics>40
 Marks of Chemisrty>50
 Marks of Mathematics>60
 Total of Physics and Math's marks>150
		 or
 Total of three subject's marks>200 */

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int p,c,m;
 clrscr();
 printf("Enter marks in physics \n");
 scanf("%d",&p);
 printf("Enter marks in chemistry \n");
 scanf("%d",&c);
 printf("Enter marks in mathematics \n");
 scanf("%d",&m);
 if(((p>40)&&(c>50)&&(m>60)&&((p+m)>150))
  ||((p>40)&&(c>50)&&(m>60)&&((p+c+m)>200)))
 printf("\n The candidate is Eligible");
 else
 printf("\n Not Eligible");
 getch();
 }